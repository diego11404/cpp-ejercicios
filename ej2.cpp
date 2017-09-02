#include <iostream>
#include <cstring>

using namespace std;
int main(){
	string hola="asdasdasdasdd";
	char oracion[]="hola amigos";
	char *ptrChar=(char*)"jaja";	
	

	cout<<oracion<<endl;
	cout<<ptrChar<<endl;
	cout<<"======================="<<endl;
	hola;
	strcpy( oracion, "Sara" );
	*ptrChar++;
	
	cout<<hola<<endl;
	cout<<oracion<<endl;
	cout<<ptrChar<<endl;
}
