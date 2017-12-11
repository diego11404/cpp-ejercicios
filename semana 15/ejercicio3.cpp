#include <iostream>
int main(){
  std::cout<<"\t";
  for(int i=0;i<20;i++)
    std::cout<<i<<"     ";

  std::cout<<"\n";
  char **matriz = new char*[20];
  for(int i=0,j;i<20;i++){
    std::cout<<i<<"\t";
    matriz[i]= new char[20];
    for(j=0;j<20;j++){
      matriz[i][j]='*';
      std::cout<<matriz[i][j]<<"     ";
    }
    std::cout<<"\n";
  }
  return 0;
}