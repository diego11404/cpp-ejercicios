#include <iostream>

using namespace std;

int main(){
	for(int i=1;i<=12;i++){
		cout<<"	"<<"Y("<<i<<")";
	}
	cout<<endl;
int i=1,b=1;
    salir2:
    if(i<=15){
    	cout<<"X("<<i<<")"<<"\t";	
        salir1:
        if(b<13){
        cout<<"  "<<i*b<<"	";
        ++b;
        goto salir1; }
        b=1;
       	cout<<endl;
        ++i;
        goto salir2;
    }
	
 return 0;
 
}
