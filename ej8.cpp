#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
 namespace BuscaMinas{
 	int c,j;
	char s='s'; 
	int **matriz;
 	int **matrizVisual;
 void crearMatriz(int dim){
 
 	matriz=new int*[dim];
 	matrizVisual=new int*[dim];
 	//reservar espacio para las matrices
 	for(int i=0;i<dim;i++){
 			matriz[i]= new int[dim];
 			matrizVisual[i]= new int[dim];
	}
 }
 void poblarMatriz(int dim,int level){
 	//llenar con valores y ceros
	for(int i=0,j;i<dim;i++){
 		for(j=0;j<dim;j++){
 			matriz[i][j]=rand()%9+1;
 			matrizVisual[i][j]=0;
		 }
	}
	for(int i=0;i<dim*level;i++){
 			matriz[rand()%dim][rand()%dim]=0;
	}
 }
 void mostrarMatriz(int dim,int &x, int *y,bool &perdio){
		system("cls");
	 	for(int i=0,j;i<dim;i++){
	 		for(j=0;j<dim;j++){
	 			cout<<matriz[i][j]<<" ";
			 }
			cout<<endl;
		}
		cout<<endl;
		for(int i=0,j;i<dim;i++){
			cout<<"X("<<i+1<<")"<<"\t";
 			for(j=0;j<dim;j++){
 				if(matrizVisual[i][j]==0){
 					if(perdio){
 						if(matriz[i][j]==0){
 						cout<<"X"<<" ";	
						}else
						cout<<'*'<<" ";
					}else
			 		cout<<'*'<<" ";
			 	}else
				cout<<matriz[i][j]<<" ";	 
			}
			cout<<endl;
		}
		cout<<"X:"<<x<<endl;
		cout<<"Y:"<<*y<<endl; 
		if(!perdio){
			salir:
			cout<<"Ingrese Cordenada X: ";
			cin>>x;
			cout<<"Ingrese Cordenada Y: ";
			cin>>*y;
			if(max(x,*y)>dim|| min(x,*y)<1){
				 cout<<"Coordenadas incorrectas"<<endl;
				 goto salir;
			}
		}
 }
 void jugar(int dim){
 	bool flag=true;
 	bool perdio=false;
 	int x=0,y=0;
 	do{
 		mostrarMatriz(dim,x,&y,perdio); 
		if(matrizVisual[x-1][y-1]==0){
			c+=matriz[x-1][y-1];
			matrizVisual[x-1][y-1]=1;
		}
		if(matriz[x-1][y-1]==0){
				flag=false;
				perdio=true;
				matrizVisual[x-1][y-1]=0;
				mostrarMatriz(dim,x,&y,perdio); 
				cout<<"Perdiste: "<<endl;
				cout<<"Tu puntaje es : "<<c<<endl;
		}
	
	}while(flag);	
 }
 }

 int main(){

 	srand(time(NULL));
 	int dim,level;
 	cout<<"ingrese Dimencion de la matriz: ";
 	cin>>dim;
 	cout<<"ingrese Nivel 1 - 3:  ";
 	cin>>level;
	BuscaMinas::crearMatriz(dim);
	BuscaMinas::poblarMatriz(dim,level);
	BuscaMinas::jugar(dim);
	return 0;
 }

