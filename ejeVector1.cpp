#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<double> vect(10,8);
	cout<<vect.size()<<endl;
	int i=0;
	salir:
		cout<<vect[i++]<<endl; 
	if(i<vect.size()) goto salir;
		
	return 0;
}
