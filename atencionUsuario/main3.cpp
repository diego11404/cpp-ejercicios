#include "CLista.hpp"
#include "CColaUsuario.hpp"
#include <ctime>
#include <cstdlib>
int main(){
  srand(int(time(NULL)));
  char opt;
  char type[]={'A','D','P'};
  CColaUsuario* userList = new CColaUsuario();
  CUsuario* user= new CUsuario();
  do{
     system("cls");
    std::cout<<"1. Insert "<<std::endl;
    std::cout<<"2. Attend "<<std::endl;
    std::cout<<"3. Show Queue"<<std::endl;
    std::cout<<"4. Show Attended"<<std::endl;
    std::cout<<"5. Save"<<std::endl;
    std::cout<<"6. Read"<<std::endl;
    std::cout<<"ingrese opcion : "; std::cin>>opt;
    switch(opt){
      case '1':{
        system("cls");
        for(int i=0;i<15;++i){
          user= new CUsuario((char*)"Diego",(char*)"layza",type[rand()%3],i+1*2,i+1);
          userList->insertToList(user);
        }
        system("pause");
      }
      break;
      case '2': 
        system("cls");
        if(userList->attend()) std::cout<<"Atendido\n";
        system("pause");
      break;
      case '3':
        system("cls");
        userList->showQueue();
        system("pause");
       break;
      case '4':
        system("cls");
        userList->showAttended();
        system("pause");
       break;
       case '5':
        system("cls");
        userList->Save();
        system("pause");
       break;
       case '6':
        system("cls");
        userList->Read();
        system("pause");
       break;  
    }
  }while(opt!='0');
  //leer datos
  std::ifstream leer("datos.txt");
  std::string linea;
  for(;leer.good();){
    std::getline(leer,linea);
    std::cout<<linea<<std::endl;
  }
  leer.close();
  /*  CLista<int> *list = new CLista<int>();
    int c=0;
    while(c!=15){
    list->insertStart(c);
    c++;
    }
  list->getAll();
  std::cout<<list->getStart()->getElement()<<"\n";
  std::cout<<list->getEnd()->getElement()<<"\n";
  list->eraseNext(0);
  list->eraseNext(1);
  list->getAll();
  */
  return 0;
}