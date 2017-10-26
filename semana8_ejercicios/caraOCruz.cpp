#include <iostream>

int main(){
  int num;
  int moneda;
  do{
    int Mary=0;
    int John=0;
    std::cout<<"Ingrese el numero de juegos: "; std::cin>>num;
    if(num>=1){
      for(int i=0;i<num;i++){
        std::cin>>moneda;
        (moneda==0) ? Mary++ : John++;
      }
      //std::cout<<"Mary won "<<Mary<<" times and John won "<<John<<" times\n";
      printf("Mary won %d times and John won %d times\n", Mary, John );
    }
  }while(num>0);

  //std::cout<<"Ingrese el numero de juegos: "; std::cin>>num;
  //while(num>0){
  //  int cara=0;
  //  int cruz=0;
  //    for(int i=0;i<num;i++){
  //      std::cin>>moneda;
  //      (moneda==0) ? cara++ : cruz++;
  //    }
  //    std::cout<<"Mary won "<<cara<<" times and John won "<<cruz<<" times\n";
  //    std::cout<<"Ingrese el numero de juegos: "; std::cin>>num;
  //  }
  return 0;
}