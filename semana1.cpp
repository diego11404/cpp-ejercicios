#include <iostream>

using namespace std;

int main()
{   /*
    short n1,n2,r;
	std::cout<<"Ingrese primer Numero"<<"\n";
	std::cin>>n1;
	std::cout<<"Ingrese segundonumero"<<"\n";
	std::cin>>n2;
	r=(n1>n2)*n1+(n2>n1)*n2;
	std::cout<<"El Mayor es "<<r<< "\n" ; */
	char marca;
	short modelo;
	int r;
	cout<<"Ingrese la marca del carro"<< "\n" ;
	cin>>marca;
	cout<<"Ingrese el modelo del carro"<< "\n" ;
	cin>>modelo;
	r=(marca=='t' && modelo==1)*0.90*37013+
    	(marca=='k' && modelo==1)*0.87*47800+
	    (marca=='n' && modelo==1)*0.85*56700;
	std::cout<<"TOTAL A PAGAR"<<"\n"<<r<< "\n" ;






}



#include <iostream>

using namespace std;

int main(){
int i=0;
    for(;;){

        if (i<10){
            ++i;
            cout<<i<<"\n";

        }else
        goto salir;

    }
    salir:
 return 0;}


#include <iostream>

using namespace std;

int main()
{
int i=1,b=1;
    cout<<"TABLA DEL : "<<1<<"\n";
    salir2:
    if(i<=15){
        salir1:
        if(b<13){
        cout<<i*b<<"\n";
        ++b;
        goto salir1; }
        b=1;
        cout<<"TABLA DEL : "<<i+1<<"\n";
        ++i;
        goto salir2;
    }
 return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int arr[10]{9,5,6,54,5,78,2,1,0,99};
    int i=1,j=0;
    int temp;
    salir1:
     if(i<sizeof(arr)/sizeof(int)){
        j=i;
        salir2:
        if(j >= 0 && arr[j]<arr[j-1]){
            temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
            goto salir2;
        }
        i++;
        goto salir1;
    }
    for(int c=0;c<sizeof(arr)/sizeof(int);c++){
        cout<<arr[c]<<"\n";
    }
 return 0;
}


##########################################
#include <iostream>

using namespace std;

int main()
{
    int arr[100];
	short i=0;
	do{
		arr[i++]=rand()%500;

	}while(i<100);
	i=0;
	do{
		cout<<arr[i++]<<"\n";
	}while(i<100);


 return 0;
}
########################
