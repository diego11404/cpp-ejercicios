*> division de identificacion de programa
IDENTIFICATION DIVISION.
    PROGRAM-ID. P3.

*> division de entorno: recursos del computador
ENVIRONMENT DIVISION.

*> expecificacion de variables de locales, de archivos(PLANOS,PDS o VSAN) Y DB(db2,oracle,sql)
DATA DIVISION.
    WORKING-STORAGE SECTION.
*>01-87
    01 ACUM PIC S999 VALUE 1.
    01 INCR PIC 9 VALUE 1.
    01 CONT PIC 9(2) VALUE 1.
    01 CONT2 PIC 9(2) VALUE 1.
    01 NUMERO PIC 9(2).
    01 N PIC 9(6).
    01 SUMATORIA PIC 9(6) VALUE 0.
    01 RES PIC 9(2) VALUE 0.
PROCEDURE DIVISION.
    princial.
        display "Ingrese x total";
        accept NUMERO.
        display "Ingrese N total";
        accept N.
        *>PERFORM factorial CONT TIMES. 
        PERFORM fact2 NUMERO TIMES. 
        display SUMATORIA.
        *>DISPLAY ACUM.
        STOP RUN.
    factorial.
        MULTIPLY ACUM BY INCR GIVING ACUM.
        ADD 1 TO INCR.
    fact2.
        MULTIPLY ACUM BY INCR GIVING ACUM.
        ADD 1 TO INCR.
        COMPUTE N = N - 1.
        compute RES = ACUM / N.
        COMPUTE SUMATORIA = SUMATORIA + RES.
        DISPLAY RES.
        
        