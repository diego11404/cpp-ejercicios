#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){
  srand(time(NULL));
  vector<int> entero;
  vector<char> character;
  for(int i=0;i<10;++i){
    entero.push_back(rand()%10+1);
    character.push_back(rand()%26+65);
    cout<<entero[i]<<"-"<<character[i]<<endl;
  }
  return 0;
  
  system("pause");
}