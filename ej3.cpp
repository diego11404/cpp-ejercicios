 #include <iostream>
 #include <iterator>
  using namespace std;
 int main(){
 	void muestraCadena(char*);
 	void muestaInt(int*);
 	int arr[15]={1,2,3,4,5,6,7,8,9,10,44,76};
 	char str[]="hola que tal";
 	muestraCadena(str);
 	muestaInt(arr);
 	return 0;
 }
 void muestraCadena(char *ps){
 	while(*ps){

 		cout<<*ps++<<"-"<<ps<<"--"<<&ps<<endl;
	 }
 }
 void muestaInt(int *num){
 	while(*num){
 		cout<<*num++<<"--"<<*num<<"--"<<&num<<endl;
	 }
 }
