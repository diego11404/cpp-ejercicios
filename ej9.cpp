#include <iostream>
using namespace std;
struct Auto{
    short codigo;
    char* nombre;
    char* marca;
    
    Auto(){
    	codigo=0;
    	nombre= new char[10];
    	marca= new char[10];
	}
    Auto(short codigo, char* nombre,char* marca){
    	this->codigo=codigo;
    	this->nombre=nombre;
    	this->marca=marca;
	}
}a1;

int main()
{   
//Static
  a1.codigo=12;
  a1.nombre=(char*)"corola";
  a1.marca=(char*)"TOYOTA";
  cout<<a1.codigo<<" "<<a1.nombre<<" "<<a1.marca<<endl;
  
  Auto a2;
  a2.codigo=13;
  a2.nombre=(char*)"yaris";
  a2.marca=(char*)"TOYOTA2";
  cout<<a2.codigo<<" "<<a2.nombre<<" "<<a2.marca<<endl;
  
  	Auto a3(14,(char*)"sorrento",(char*)"KIA"); 
  	cout<<a3.codigo<<" "<<a3.nombre<<" "<<a3.marca<<endl;
  	
  	//Dinamic
 	Auto* ad1= new Auto(15,(char*)"aventador",(char*)"lamborguini");
	cout<<ad1->codigo<<" "<<ad1->nombre<<" "<<ad1->marca<<endl;	
	Auto* ad2= new Auto(17,(char*)"astron",(char*)"Aston martin");
	cout<<ad1->codigo<<" "<<ad1->nombre<<" "<<ad1->marca<<endl;	
	
	Auto** arrAuto= new Auto*[10];
	cout<<"ARRAY >>"<<arrAuto<<endl;
	*arrAuto=ad1;
	*(arrAuto+1)=ad2;
	cout<<(*(arrAuto+1))->codigo<<" "<<ad1<<endl;
	arrAuto[2]=&a2;
	arrAuto[3]=&a1;
	arrAuto[4]=new Auto(16,(char*)"FTURBO",(char*)"Macclaren");
	arrAuto[5]=&a3;
	for(int i=0;i<6;++i){
			cout<<i<<" "<<arrAuto[i]->codigo<<" "<<(*(arrAuto+i))->nombre<<" "<<(*(arrAuto+i))->marca<<endl;
	}
   return 0;
}
