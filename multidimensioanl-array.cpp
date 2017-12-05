#include <iostream>
#include <cstdlib>
#include <ctime>

int main (){

  srand((int)time(NULL));
  std::cout<<"Hello world"<<std::endl;

  int arr[3][4][3]={{1,2,3},
                   {{4,5,6},{33,88,77},{44,11,10},{12,13,14}},
                   {9,18,65}};

  std::cout<<arr[1][1][2]<<std::endl;
  std::cout<<*(*(*(arr+1)+3)+2)<<std::endl;

  int arr2[3][3][3];
  std::cout<<"Tamanio: "<<sizeof(arr2[1])/sizeof(arr2[1][1])<<"\n";

  for(int i=0;i<sizeof(arr2)/sizeof(arr2[0]);i++){
    for(int j=0;j<sizeof(arr2[1])/sizeof(arr2[1][1]);j++){
      for(int k=0;k<3;k++){
        arr2[i][j][k]=rand()%80+1;
        std::cout<<arr2[i][j][k]<<"\t";
      } 
      std::cout<<std::endl;
    } 
      std::cout<<std::endl;
    }
    std::cout<<std::endl;

    std::cout<<"OTRA FORMA :"<<std::endl;
    
  int ***arr3 = new int**[3];
  for(int i=0;i<3;i++){
    arr3[i] = new int*[3];
      for(int j=0;j<3;j++){
      	arr3[i][j] = new int[3];
		for(int k=0;k<3;k++){
       		arr3[i][j][k] = rand()%80+1;
       		std::cout<<arr3[i][j][k]<<"\t";
      	}
      	 std::cout<<std::endl;
      }
      std::cout<<std::endl;
  }
  
  system("pause");
  return 0;
}
