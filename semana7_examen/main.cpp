#include <iostream>
#include "CRegistroSalida.hpp"
#include "CAgenteSeguridad.hpp"
using namespace std;
int main(){
  CAgenteSeguridad* agent; 
  char opt;

  CRegistroSalida* rSalida = new CRegistroSalida(30);

  for(int i=0;i<30;i++){
    rSalida->Insertar(new CAgenteSeguridad((char*)"juan",100+i,(char*)"7/10/17",(char*)"2 PM",(char*)"PERU-2589",
    (char*)"Lucho Gomez",20+i,(char*)"Campus Trujillo",(char*)"Campus Piura",(char*)"100 Km"));
  }
  
  do{
    system("cls");
    std::cout<<"********Menu*******"<<std::endl;
    std::cout<<"1.Mostrar Registros"<<std::endl;
    std::cout<<"2.Mostrar Pasajeros Diarios"<<std::endl;
    std::cout<<"3.Recaudacion Mensual"<<std::endl;
    
    
    std::cout<<"0. Salir"<<std::endl;
    std::cout<<"Ingresar Opcion: "; 
    cin>>opt;
    switch(opt){
      case '1':
      system("cls");
      rSalida->Mostrar();
      system("pause");
      break;
      case '2':
      system("cls");
      cout<<"PASAJEROS DIARIOS"<<endl;   
      rSalida->NpasajerosDiarios();     
      system("pause");
      break;
      case '3':
      system("cls");      
      int p;      
      cout<<"Recaudacion Mensual"<<endl;   
      p=rSalida->RecaudacionMES();
      cout<<"RECAUDACION TOTAL: "<<p<<endl;
      system("pause");
      break;
    }
  }while(opt!='0');
  

  system("pause");
  
  return 0;
}