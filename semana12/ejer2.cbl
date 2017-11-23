*> division de identificacion de programa
IDENTIFICATION DIVISION.
    PROGRAM-ID. P1.

*> division de entorno: recursos del computador
ENVIRONMENT DIVISION.

*> expecificacion de variables de locales, de archivos(PLANOS,PDS o VSAN) Y DB(db2,oracle,sql)
DATA DIVISION.
    WORKING-STORAGE SECTION.
*>01-87
    01 NUMERO1 PIC S99 VALUE 10.
    01 NUMERO2 PIC s9(2) VALUE 20.
    01 RES PIC s9(3).
    01 CONT PIC 99 VALUE 0.
    01 D1  PIC S99v9(2).
    01 D2 PIC S99v9(2).
    01 T1 PIC S99v9(2).
    01 T2 PIC S99v9(2).
    01 DD PIC S9(2)v9(2).
    01 DT PIC S9(2)v9(2).
PROCEDURE DIVISION.
    princial. *> procedimiento principal

        DISPLAY "INGRESE distancia final".
        ACCEPT D2.
        DISPLAY "INGRESE distancia inicial".
        ACCEPT D1.
        DISPLAY "INGRESE tiempo final".
        ACCEPT T2.
        DISPLAY "INGRESE tiempo inicial".
        ACCEPT T1.
        DISPLAY "RESULTADO".
        SUBTRACT D1 FROM D2 GIVING DD.
        SUBTRACT T1 FROM T2 GIVING DT.
        DIVIDE DD BY DT GIVING RES.
        DISPLAY "RESULTADO: ", RES.
        *>PERFORM mensaje 0 times.
        PERFORM numeros 10 times.
        STOP RUN.
        *>D2/D1 / T2/T1
    mensaje.
         DISPLAY "diego".
    numeros.
        COMPUTE CONT= CONT + 2.
        *>COMPUTE RES= CONT / 2 .
       *> compute ( (CONT%1)==0 ).
        DISPLAY CONT.
