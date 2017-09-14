#include <iostream>
#include <vector>
using namespace std;
int main(){
	double arr[10]={3.20,4.9,5.7,7.1,8.25,9,0,2,3,5.2};
	vector<double> vect;
	vect.assign(arr,arr+10);
	cout<<"Tamaño: "<<vect.size()<<endl;
	for(int i=0;i<vect.size();++i){
			cout<<vect[i]<<endl;
	}
	return 0;
}
