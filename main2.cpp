#include <iostream>
#include "arregloCelular.hpp"
using namespace std;
int main(){
	
    SArregloCelular* arrCelu= new SArregloCelular(10);
    short opcion;
    long nro;
    char continuar;
    SCelular* cel; 
    char* marca;
    do{
        cout<<"Menu"<<endl;
        cout<<"1.Insertar"<<endl;
        cout<<"2.Mostrar"<<endl;
        cout<<"3.Salir"<<endl;
        cin>>opcion;
        switch(opcion){
        	case 1:
        		do{ 
        			marca =new char[10];
	                cout<<"Ingrese numero: ";
	                cin>>nro;
	                cout<<"Ingrese Marca: ";
	                cin>>marca;
	                cel = new SCelular(nro,(char*)marca);
	                arrCelu->insertar(cel);
	                cout<<"Desea continuar S/N: ";
	                cin>>continuar;
            	}while(toupper(continuar)=='S');
        		break;
        	case 2:
        		for(int i=0; i<arrCelu->getlongitud();i++){
        			arrCelu->reportar(i);
				}
				break;	
		}
    }while(opcion!=3);
 
    return 0;
}
