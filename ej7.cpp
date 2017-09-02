#include <iostream>
#include <cstring>
using namespace std;
int main(){ 
	int arr[100]={1,2,3,4,5,6,7,8,9};
	string arrStr[100]={"hola","nenas"};
	char arrChar[100]={'d','f','d','p','x'};
	struct Person{
		char name[20];
		string lastName;
		int age;
		Names(){age = 21;lastName="DEFECTO";}
		guardarAge(int a){age=a;}
		int verAge(){return age;}
	}diego,cesar,*ptr;
	
	ptr=&diego;
	
	strcpy(diego.name,"holaChar");
	diego.lastName="HOLA2";
	diego.age=20;
	
	cesar.Names();
	cout<<cesar.age<<endl;
	cesar.guardarAge(22);
	cout<<cesar.age<<endl;
	cout<<cesar.verAge()<<endl;
	
	arr[0]=58;
	arrStr[0]="eso";
	arrChar[2]='m';
	ptr->age=88;
	cout<<arrChar[2]<<endl;
	cout<<ptr->age<<"--"<<diego.age<<endl;
	cout<<cesar.age<<endl;
	return 0;
}
