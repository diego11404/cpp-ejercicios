*> division de identificacion de programa
IDENTIFICATION DIVISION. *>/ iDENTIFICATION DIVISION.
    PROGRAM-ID. P1.    *>//PROGRAM-ID. EXAMEN.

*> division de entorno: recursos del computador
ENVIRONMENT DIVISION. *>// ENVIRONMENT DIVISION.

*> expecificacion de variables de locales, de archivos(PLANOS,PDS o VSAN) Y DB(db2,oracle,sql)
DATA DIVISION. *> DATA DIVISION
    WORKING-STORAGE SECTION. *>WORKING-STORAGE SECTION
*>01-87
    01 NUMERO1 PIC S999 VALUE 100. *>01 NUMERO1 PIC s99 VALUE 20
    01 NUMERO2 PIC s9(3) VALUE 20. *>01 RESULTADO PIC S999 VALUE 300.
    01 RES PIC s9(3).    *>01 RESP PIC S9(3)
    01 CONT PIC 99 VALUE 0.
    01 D1  PIC S99v9(2).
    01 D2 PIC S99v9(2). *>01 R1 PIC S9(2)V9(2);
    01 T1 PIC S99v9(2). *> s9(2)v9(2). 10.66
    01 T2 PIC S99v9(2). *> 01 VARIABLE PIC S9(5)V9(2).
    01 DD PIC S9(2)v9(2).
    01 DT PIC S9(2)v9(2).
    01 Names PIC A(10).
    01 sumaDeN PIC S9(3)V9(2).
PROCEDURE DIVISION. *> PROCEDURE DIVISION
    hola.
        Display "INGRESE NOMBRE".
        accept Names.
    princial. *> procedimiento principal
        DISPLAY "INGRESE  D2: ".
        ACCEPT D2.
        DISPLAY "INGRESE D1: ".
        ACCEPT D1.
        DISPLAY "INGRESE T2: ".
        ACCEPT T2.
        DISPLAY "INGRESE T1: ".
        ACCEPT T1.
        DISPLAY "RESULTADO: ".
        SUBTRACT D1 FROM D2 GIVING DD.
        SUBTRACT T1 FROM T2 GIVING DT.
        DIVIDE DD BY DT GIVING RES.
        DISPLAY "RESULTADO: ", RES.
        *>PERFORM mensaje 0 times.
        PERFORM numeros 10 times.
        perform mensaje 5 times.
        perform sumitas.

        *>D2/D1 / T2/T1
    mensaje.
         DISPLAY "Tu nombre es : "  Names.
    numeros.
        COMPUTE CONT= CONT + 2.
        *>COMPUTE RES= CONT / 2 .
       *> compute ( (CONT%1)==0 ).
        DISPLAY CONT.
    sumitas.
        ADD D1 to D2 GIVING sumaDeN.
        DISPLAY "RESULTADO DE Suma es : " sumaDeN.
   STOP RUN.
