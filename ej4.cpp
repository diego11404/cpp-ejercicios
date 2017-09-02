#include <iostream>
using namespace std;
int main(){
	int arr[]={13,42,54,65,87,98,68};
	int *ptr;
	ptr = arr;
	for(int i=0;i<7;i++){
		cout<<ptr[i]<<"--"<<*(arr+i)<<"--"<<*(ptr++)<<endl;
	}
}
