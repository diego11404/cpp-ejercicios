#include <iostream>
#include <string>
#include "CArrArticulo.hpp"

int main(){
  bool flag=false;
  int contador=-1;
  short capac=10;
  CCliente **listaClientes = new CCliente *[capac];
  CArrArticulo** listaCompras= new CArrArticulo*[capac];
  CArrArticulo* arrArticulo;
  CArticulo* articulo;
  CCliente* cliente;
  char *UserName;
  long dni;
  char opt;
  char *nombre;
  do{
    system("cls");
    std::cout<<"*******Menu*****"<<std::endl;   
    if(!flag) std::cout<<"1. Agregar Cliente"<<std::endl;
    std::cout<<"2. Agregar Producto"<<std::endl;   
    std::cout<<"3. Detalles Compra"<<std::endl;
    std::cout<<"4. Finalizar Compra"<<std::endl;
    std::cout<<"5. TODAS LAS COMPRAS"<<std::endl;
    std::cout<<"0. Salir"<<std::endl; 
    do{
      std::cout<<"Ingrese opcion: "; std::cin>>opt;
    }while(flag && opt=='1');
    switch(opt){
        case '1': 
        system("cls");
        UserName = new char[20];  
        std::cout<<"Ingrese Nombre Cliente: "; std::cin>>UserName;
        std::cout<<"Ingrese DNI : "; std::cin>>dni;
        cliente = new CCliente((char*)UserName,dni);
        arrArticulo = new CArrArticulo(cliente,10);
        flag=true;
        break;
      case '2':
        system("cls");
        std::cout<<"******Agregar Productos********"<<std::endl;
        nombre = new char[20];
        int precio;
        int cantidad;
        std::cout<<"Ingrese Nombre Producto: "; std::cin>>nombre;
        std::cout<<"Ingrese Precio Producto: "; std::cin>>precio;
        std::cout<<"Ingrese Cantidad Producto: "; std::cin>>cantidad;
        articulo = new CArticulo((char*)nombre,precio,cantidad);
        arrArticulo->Insertar(articulo);
        arrArticulo->mostrarTodo();
        system("pause");
        break;
      case '3':
      system("cls");  
      arrArticulo->mostrarTodo();
      system("pause");
      break;
      case '4':
      system("cls");
      contador++;
      std::cout<< (contador < capac && (listaClientes[contador]=cliente) &&  
                  (listaCompras[contador]=arrArticulo) && (flag=false),contador>=capac && (flag=true)  ? "CAPACIDAD LLena\n": "Insertado\n");
      system("pause");
      break;
      case '5':
      system("cls");
      std::cout<<"TODAS LAS COMPRAS"<<std::endl;
      for(int i=0;i<=contador;i++){
        if(listaClientes[i]!=nullptr && listaCompras[i]!=nullptr){
          std::cout<<"Compra Numero: "<<i+1<<std::endl;
          //std::cout<<*listaClientes[i]<<std::endl;
          listaCompras[i]->mostrarTodo();
        }
        std::cout<<"\n";
      }
      system("pause");
      break;
    }
  }while(opt!='0');
 
  /*
   for(int i=0;i<10;i++){
    lCli[i]= new CCliente((char*)"Diego","LQ"+std::to_string(i));
  }
  for(int i=0;i<10;i++){
    listaArticulo->Insertar(new CArticulo((char*)"Libro",10+i,3+i));
  }
  std::cout<<"Lista: "<<std::endl;
  listaArticulo->mostrarTodo();
  std::cout<<"Monto total: "<<listaArticulo->CalcularMontoTotal();
  */
  return 0;
}
  