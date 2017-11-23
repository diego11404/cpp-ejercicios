IDENTIFICATION DIVISION. 
*>division de identificacion de programa 
PROGRAM-ID. P1. 
 
ENVIRONMENT DIVISION. 
*>division de entorno: recursos del computador 
DATA DIVISION. 
WORKING-STORAGE SECTION. 
01  D1     PIC S9(2)V9(2). 
01  D2     PIC S9(2)V99. 
01  DD     PIC S9(2)V99. 
01  T1     PIC S9(2)V9(2). 
01  T2     PIC S9(2)V99. 
01  DT     PIC S9(2)V99. 
01  VX   PIC S9(3)V99. 
01  CONT        PIC 99 VALUE 10. 
*>especificacion de variables de locales, 
*>de archivos(Planos,PDS o VSAM) y BD(db2, oracle, sql) 
PROCEDURE DIVISION. 
principal. 
*>procedimiento principal 
DISPLAY "Ingrese D1". 
ACCEPT D1. 
DISPLAY "Ingrese n2". 
ACCEPT D2. 
DISPLAY "Ingrese T1". 
ACCEPT T1. 
DISPLAY "Ingrese T2". 
ACCEPT T2. 
SUBTRACT D1 FROM D2 GIVING DD. 
SUBTRACT T1 FROM T2 GIVING DT. 
DIVIDE DD BY DT GIVING VX. 
DISPLAY "Diferencial de distancia: ", DD. 
DISPLAY "Diferencial de Tiempo: ", DT. 
DISPLAY "Velocidad promedio: ", VX, "m/s". 
*>PERFORM mensaje CONT TIMES. 
STOP RUN. 
mensaje. 
DISPLAY "Mainframe 2017-2". 
