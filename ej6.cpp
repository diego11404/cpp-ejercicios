#include <iostream>
//pasando valores por referencia
using namespace std;
int main(){
	void convertir(double&,int*);
	double num = 10.7;
	int x=100;
	int *p=&x;
	cout<<num<<"-"<<x<<endl;
	convertir(num,p);
	cout<<num<<" -"<<x<<endl;

	
}
void convertir(double& valor,int *ptr){
	int pp=*ptr;
	valor *= 2.54;
	pp=500;
	cout<<"NUEVO VALORES: "<<valor<<"--"<<pp<<endl;
}
