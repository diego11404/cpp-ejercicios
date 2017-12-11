#include <iostream>
#include <cstdlib>
#include <ctime>
int main(){
  srand(int(time(NULL)));
  int point;
  char ** arr;
  int *altitud;
  int c=0;
  do{
    std::cout<<"Ingrese Numero puntos: "; std::cin>>point;
  }while(0 > point || point > 15);
  arr = new char*[point];
  altitud = new int[point];
  int *result = new int[point];

  std::cout<<"Punto:     "<<"\t";
  for(int i=0;i<point;i++)
    std::cout<<i<<"\t";

  std::cout<<"\nAltitud: "<<"\t";
  for(int i=0;i<point;i++){
    altitud[i]=rand()%16+10;
    std::cout<<altitud[i]<<"\t";
    result[i]=0;
  }
  
  for(int i=1;i<point-1;i++){
    if(altitud[i-1]<altitud[i] && altitud[i]>altitud[i+1]){
      c++, result[i]++;
    }
  }
  std::cout<< "\nCantidad picos "<<c<<" En los puntos: ";
  for(int i=1;i<point-1;i++){
      if(result[i]>0) std::cout<<i<<",";
  }
  std::cout<<"\nPunto"<<"\n";
  for(int i=0,j ; i< point;i++){
      arr[i]= new char[altitud[i]];
      std::cout<<i<<". "<<"\t";
    for(j=0;j<altitud[i];j++){
      arr[i][j]='+';
      std::cout<<arr[i][j]<<"  ";
    }
    std::cout<<altitud[i]<<"\n";
}
return 0;
}