#include <iostream>
#include "ListaServicio.hpp"
#include <ctime>
#include <cstdlib>

int main(){
  srand(int(time(NULL)));
  char opcion;
  CAtencion *atencion;
  CVehiculo* vehiculo;
  CServicio* servicio;
  ListaServicio *lista = new ListaServicio();

  int tipoServicio[]={1,2,3};
  std::string Nombre[]={"Lavado","Encerado","Silicona"};
  int costo[]={10,15,10};
  char tipoVehiculo[]={'A','C'};
  std::string NombreVehiculo[]={"Auto","Camioneta"};

  do{
    system("cls");
    std::cout<<"1. Generar Servicios"<<"\n";
    std::cout<<"2. Numero de veces de cada servcio"<<std::endl;
    std::cout<<"3. Mostrar Servicio con menor demanda"<<std::endl;
    std::cout<<"4. Monto Promedio por Servicio Lavado"<<std::endl;
    std::cout<<"5. Ordenar"<<std::endl;
    std::cout<<"6. mostrar todo"<<std::endl;
    
    std::cout<<"Ingresar opcion: ";
    std::cin>>opcion;
    
    switch(opcion){
      case '1':{
      system("cls");
      int valor,valor2;
        for(int i=0;i<25;i++){
          valor=rand()%3;
          valor2=rand()%2;
          vehiculo = new CVehiculo(tipoVehiculo[valor2],NombreVehiculo[valor2]);
          servicio = new CServicio(tipoServicio[valor],Nombre[valor],costo[valor]);
          atencion= new CAtencion(vehiculo,servicio);
          lista->InsertarAtencion(atencion);
        }
        lista->calcularAtenciones();
        std::cout<<"OK"<<std::endl;
      system("pause");
      }  
      break;
      case '2':
        system("cls");
        std::cout<<"Numero de veces de cada servcio"<<std::endl;
        lista->mostrarServicios();      
        system("pause");
      break;
      case '3':
        system("cls");
        lista->CalcularMenorDemanda();
        system("pause");
      break;
      case '4':
        system("cls");
        lista->MontoPromedioXLavado();
        system("pause");
      break;
      case '5':
        system("cls");

        system("pause");
      break;
      case '6':
        system("cls");
        lista->MostrarTodo();      
        system("pause");
      break;
    }
  }while(opcion!='0');
  delete lista;
  return 0;
}