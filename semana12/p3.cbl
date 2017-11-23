IDENTIFICATION DIVISION. 
*>division de identificacion de programa 
PROGRAM-ID. P1. 
 
ENVIRONMENT DIVISION. 
*>division de entorno: recursos del computador 
DATA DIVISION. 
WORKING-STORAGE SECTION. 
01  ACUM      PIC 9(2) VALUE 0. 
01  INCR      PIC 9 VALUE 2. 
01  CONT      PIC 9(2) VALUE 10. 
*>especificacion de variables de locales, 
*>de archivos(Planos,PDS o VSAM) y BD(db2, oracle, sql) 
PROCEDURE DIVISION. 
*>procedimiento principal 
PERFORM calcula CONT TIMES. 
STOP RUN. 
calcula. 
COMPUTE ACUM=ACUM+INCR. 
DISPLAY ACUM. 
