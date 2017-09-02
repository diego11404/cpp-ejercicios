#include <iostream>
using namespace std;
int main()
{
int i=1,b=1;
    salir2:
        cout<<"TABLA DEL : "<<i<<"\n";
        salir1:
        cout<<i<<"X"<<b-1<<"= "<<i*b++<<endl;
        if(b<13)goto salir1;
        b=1;
        ++i;
    if (i<=12)goto salir2;
 return 0;
}
