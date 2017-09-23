#include <iostream>
using namespace std;
const int MAX=5;
int main(){
	void convertir(double *);
	double arr[MAX]={12.8,45.9,23.65,12.23,76.74};
	convertir(arr);
	for(int i=0;i<MAX;i++){
		cout<<i<<" : "<<arr[i]<<endl;
	}
}
void convertir(double num[]){
	for(int i=0;i<MAX;i++){
			
		*num++*= 2.54;
	
	}
}
