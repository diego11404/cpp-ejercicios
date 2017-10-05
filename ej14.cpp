#include <iostream>
using namespace std;
// class template:
template <typename T> 
class mycontainer {
    T element;
  public:
    mycontainer (T arg) {this->element=arg;}
    T increase () {return ++element;}
};

// class template specialization:
template <>
class mycontainer <float>{
	float element;
	public:
		mycontainer(float arg) : element(arg){}
		float suma(float a){
			return a + element;
		}	
};
template <> 
class mycontainer <char> {
    char element;
  public:
    mycontainer (char arg): element(arg) {}
    char uppercase (){
      if ((element>='a')&&(element<='z'))
      element+='A'-'a';
      return element;
    }
    char letra(short pos){
    	if(pos >= 1 && pos <= 25)
      		return ('A'+pos)-1;
      	else return 64;
	}
};

int main () {
  mycontainer<int> myint (7);
  mycontainer<char> mychar ('y');
  mycontainer<double> mydouble (88);
  mycontainer<float> myfloat(3.5);
  cout << myint.increase() << endl;
  cout << mychar.uppercase() << endl;
  cout << mydouble.increase() << endl;
  cout << mychar.letra(1) << endl;
    cout << myfloat.suma(6.5) << endl;
  return 0;
}
