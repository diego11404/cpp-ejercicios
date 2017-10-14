#include <iostream>
#include <ctime>
#include <cstdlib>
int main(){
  srand((int)time(NULL));
  int py, cy;
  int** matriz1 = new int*[5];
  for(int i=0,j;i<5;i++){
    matriz1[i]=new int[3];
    for(j=0;j<3;j++)
      matriz1[i][j]=0;
  }
  py=rand()%5;
  cy=rand()%5;
  matriz1[cy][0]=1;
  matriz1[py][2]=1;
  
  std::cout<<"Huascar Disparo desde X[2], Y["<<py<<"]"<<std::endl;
  std::cout<<"Proyectil impacto posicion X[0], Y["<<cy<<"]"<<std::endl;

  for(int i=0,j;i<5;i++){
    for(j=0;j<3;j++){
      std::cout<<matriz1[i][j]<<"\t";
    }
    std::cout<<std::endl;  
  }
  std::cout<<"Peru Gano:)"<<std::endl;
  system("pause");
  return 0;
}