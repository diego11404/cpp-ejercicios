#include "SLaboratorio.hpp"
using namespace std;
int main(){
  SLaboratorio* lab= new SLaboratorio(10,20);
  Sdispositivo* disposi;
  char opt;
  char* nombre;
  char* marca;
  char* codigo;
  char* color;
  char* pabellon;
  char* apellido;
  short dni;
  short capacidad;
  short aula;
  short pos;
  
  do{
    system("cls");
    cout<<"*******Menu********"<<endl;
    cout<<"1.Ingresar Dispositivo "<<endl;
    cout<<"2.Obtener Dispositivo "<<endl;
    cout<<"3.Eliminar Dispotivio "<<endl;
    cout<<"4.Registrar Tecnico "<<endl;
    cout<<"5.Registrar Pabellon "<<endl;
    cout<<"6.Mostrar Dispositivos"<<endl;
    cout<<"0.Salir "<<endl;
    cout<<"Ingresar Opcion: "; cin>>opt;
    switch(opt){
      case '1':
      {   
          system("cls");
          nombre = new char[10];
          marca =new char[10];
          codigo =new char[10];
          color =new char[10];
          system("cls");
          cout<<"Ingrese Nombre: ";  cin>>nombre;
          cout<<"Ingrese Marca: "; cin>>marca;
          cout<<"Ingrese Codigo: "; cin>>codigo;
          cout<<"Ingrese Color: "; cin>>color;
          disposi= new Sdispositivo((char*)nombre,(char*)marca,(char*)codigo,(char*)color);
          lab->Agregar(disposi);
          system("pause");
      }
        break;
      case '2':
        {
        system("cls");
        cout<<"Ingrese Posicion para obtener: ";cin>>pos;
        Sdispositivo* tmp=lab->obtener(pos);
        if(tmp!=nullptr)  cout<<tmp->nombre<<" "<<tmp->marca<<" "<<tmp->codigo<<" "<<tmp->color<<endl;
        else cout<<"VACIO"<<endl;
        system("pause");
      }
        break;
      case '3':
        system("cls");
        cout<<"Ingrese Posicion para eliminar: ";cin>>pos;
        lab->Eliminar(pos);
        system("pause");        
        break;
      case '4':
        nombre= new char[10];
        apellido= new char[10];
        cout<<"Ingrese Nombre: "; cin>>nombre;
        cout<<"Ingrese apellido: "; cin>>apellido;
        cout<<"Ingrese DNI: "; cin>>dni;
        break;
      case '5':
        pabellon = new char[10];
        cout<<"Ingrese Pabellon: ";cin>>pabellon;
        break;
      case '6': lab->showDispositivo(); system("pause");
      break;
    }
  }while(opt!='0');
  
  /*for(int i=0;i<200;i++){
    //((i%3)==2) ?  cout<<i<<endl : cout<<i<<"\t";
    if((i%10)==9){
      cout<<i<<endl;
    }else  cout<<i<<"\t";    
  }
  */
  return 0;

}