#include <iostream>
using namespace std;
struct SCelular {
    long nro;
    char *marca;
    SCelular(){
        nro=0;
        marca= new char[10];
    }
    SCelular(long nro,char* marca){
      this->nro=nro;
      this->marca=marca;
    }
    void getAll(){
    	cout<<nro<<"	"<<marca<<endl;
	}
};
struct SArregloCelular{
    SCelular** lista;
    short indice;
    short capacidad;
    SArregloCelular(){
        capacidad=10;
        lista= new SCelular*[capacidad];
        indice=-1;
     
    }
    void insertar(SCelular* cel){
        indice++;
        if(indice<=capacidad){
            lista[indice]=cel;
        }
    }
    short getlongitud(){
        return indice+1;
    }
    SCelular* recuperar(short pos){
        if(pos>=0 && pos<=indice){
            return lista[pos];
        }
    }
    void reportar(short i){
        lista[i]->getAll();
    }
};
int main(){
    SArregloCelular* arrCel= new SArregloCelular();
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
	                arrCel->insertar(cel);
	                cout<<"Desea continuar S/N: ";
	                cin>>continuar;
            	}while(toupper(continuar)=='S');
        		break;
        	case 2:
        		for(int i=0; i<arrCel->getlongitud();i++){
        			arrCel->reportar(i);
				}
				break;	
		}
    }while(opcion!=3);
 
    return 0;
}
