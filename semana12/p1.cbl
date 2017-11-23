IDENTIFICATION DIVISION. 
*>division de identificacion de programa 
PROGRAM-ID. P1. 
ENVIRONMENT DIVISION. 
*>division de entorno: recursos del computador 
DATA DIVISION. 
WORKING-STORAGE SECTION. 
01  NUMERO1     PIC S9(2)V9(2) VALUE 10.16. 
01  NUMERO2     PIC S9(2)V99 VALUE -20. 
01  RESULTADO   PIC S9(3)V99 VALUE 20. 
01  CONT        PIC 99 VALUE 10. 
*>especificacion de variables de locales, 
*>de archivos(Planos,PDS o VSAM) y BD(db2, oracle, sql) 
PROCEDURE DIVISION. 
principal. 
*>procedimiento principal 
DISPLAY "Ingrese n1". 
*>ACCEPT NUMERO1. 
DISPLAY "Ingrese n2". 
*>ACCEPT NUMERO2. 
COMPUTE RESULTADO= NUMERO1+NUMERO2. 
DISPLAY NUMERO1. 
DISPLAY NUMERO2. 
DISPLAY RESULTADO. 
*>PERFORM mensaje CONT TIMES. 
STOP RUN. 
mensaje. 
DISPLAY "Mainframe 2017-2". 
