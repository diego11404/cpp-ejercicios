#include <iostream>
#include <vector>
using namespace std;
int main(){
	double arr[10]={3.20,4.9,5.7,7.1,8.25,9,0,2,3,5};
	vector<double> vect(arr,arr+10);
	vector<double> vectCopy(vect);
	cout<<"Tamaño: "<<vectCopy.size()<<endl;
	for(int i=0;i<vectCopy.size();++i){
			cout<<vectCopy[i]<<endl;
	}
	return 0;
}
