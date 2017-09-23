#include "Estacionamiento.hpp"

int main() {
	CEstacionamiento* e = new CEstacionamiento(10);
	CVehiculo* tmp;
	char opt;
	char* marca;
	char* modelo;
	char* placa;
	char* color;
	short anio;
	short pos;	
	do{
		system("cls");
		cout<<"*********MENU***************"<<endl;
		cout<<"1.Insertar Vehiculo"<<endl;
		cout<<"2.insertar X Posicion"<<endl;
		cout<<"3.Buscar X Placa"<<endl;
		cout<<"4.Obtener Disponible"<<endl;
		cout<<"5.Ordenar X anio"<<endl;		
		cout<<"6.Retirar Vehiculo"<<endl;
		cout<<"7.Ver Todo"<<endl;
		cout<<"8.Ver X Posicion"<<endl;		
		cout<<"0.salir"<<endl;
		cout<<"Ingrese opcion: ";cin>>opt;
		switch(opt){
			case '1': 
				system("cls");
				marca=new char[10];
				modelo=new char[10];
				placa=new char[10];
				color=new char[10];
				cout<<"*********Insertar**************"<<endl;cin.ignore();
				cout<<"Ingrese marca: ";cin>>marca;
				cout<<"Ingrese modelo: ";cin>>modelo;
				cout<<"Ingrese placa: ";cin>>placa;
				cout<<"Ingrese color: ";cin>>color;
				cout<<"Ingrese anio: ";cin>>anio;
				tmp= new CVehiculo((char*)marca,(char*)modelo,(char*)placa,(char*)color,anio);	
				e->insertar(tmp);
				system("pause");  break;
			case '2': 
				system("cls");
				marca=new char[10];
				modelo=new char[10];
				placa=new char[10];
				color=new char[10];
				cout<<"Posiciones Disponibles: "<<endl;
				e->ObtenerDisponible();
				cout<<"*******Insertar X Posicion*********"<<endl;cin.ignore();
				cout<<"Ingrese marca: ";cin>>marca;
				cout<<"Ingrese modelo: ";cin>>modelo;
				cout<<"Ingrese placa: ";cin>>placa;
				cout<<"Ingrese color: ";cin>>color;
				cout<<"Ingrese anio: ";cin>>anio;
				cout<<"Ingresar Posicion: "; cin>>pos;
				tmp= new CVehiculo((char*)marca,(char*)modelo,(char*)placa,(char*)color,anio);					
				e->insertarXPosicion(tmp,pos);
				system("pause"); break;
			case '3':
				system("cls");
				cout << "Ingrese PLACA: ";cin>>placa;
				e->buscarXPlaca((char*)placa);
				system("pause"); break;
			case '4':
				system("cls");
				cout<<"******Posiciones Disponibles*******"<<endl;										
				e->ObtenerDisponible();
				system("pause");
				break;
			case '5':
				system("cls");
				cout<<"******Ordnar X Anio*******"<<endl;						
				e->ordenarXAnio();
				system("pause");
				break;
			case '6':
				system("cls");
				cout<<"Posiciones ocupadas: "<<endl;	
				e->ObtenerDisponible(true);
				cout<<"Indique la posicion del vehiculo a retirar: "; cin>>pos;
				e->Retirar(pos);
				system("pause"); break;
			case '7':
				system("cls");
				cout<<"******Ver Todo********"<<endl;
				e->verTodo();
				system("pause"); break;
			case '8':
				system("cls");			
				cout<<"Indique la posicion: "; cin>>pos;
				if((tmp=e->verXPosicion(pos))!=nullptr)
					tmp->getAll();
				else cout<<"Posicion vacia"<<endl;
				system("pause");
			break;
		}
	}while(opt!='0');
	/*
	int x=88;
	int b=889;
	int f=10;
	int *arr[22]={&f,&x,&b,&x,&b,&x,&b,&x,&b,&x,&b,&x,&b,&x,&b,&x,&b,&x,&b,&x,&b,&x};	
	for(int i=0;i < sizeof(arr)/4;i++){
		cout<<**(arr+i)<<"->"<<*arr[i]<<endl;
	}
	cout<<sizeof(arr)/4<<endl;
	system("pause");
	*/
	return 0;
}
