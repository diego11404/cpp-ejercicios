#include <iostream>
#include <vector>
using namespace std;
int main(){
    /*vector<double> vec1;
    vec1.assign(10,5);
    for(int i=0;i<vec1.size();i++){
        cout<<vec1.at(i)<<" ";
    }*/
    /*
    vector<double> vec2;
    vec2.assign(10,5);
    vector<double>::iterator it;
    for(it=vec2.begin();it!=vec2.end();it++){
        cout<<*it<<" ";
    }
    */
    /*
    double arr[10]={41,50,68,77,82,97,45,37,444,99};
    vector<double> vec3;
    vec3.assign(arr,arr+10);
    vector<double>::iterator it;
    double* first=&vec3.front()+4;
    double* last=&vec3.back()-2;
    cout<<*first<<" - "<<*last<<endl;
    cout<<*first**last;*/
    
   /* double arr[10]={41,50,68,77,82,97,45,37,444,99};

    vector<double> vec4;
    vector<double>::reverse_iterator rit;
    vec4.assign(arr,arr+10);
    cout<<*vec4.begin()<<" "<<*vec4.rbegin()<<endl;
  	cout<<*vec4.end()<<"- "<<*vec4.rend()<<endl;
    for(rit=vec4.rbegin();rit!=vec4.rend();rit++){
        cout<<*rit<<" ";
    }
   */
   /*
   int **count= new int*[20];
   for(int i=0;i<20;i++) {
       count[i]= new int[i*2];
   }
   cout<<endl;
   for(int i=0,j;i<20;i++){
       cout<<"i= "<<i<<"\t";
       for(j=0;j<i*2;j++){
            *(*(count+i)+j)=j;
           cout<<*(*(count+i)+j)<<" ";
       }
       cout<<endl;
   }
  */
  short x;
  int count[10];
  for(int i=0;i<10;i++) count[i]=0;
  do{
    cout<<"Ingresa: ";cin>>x;
    cout<<"X="<<++count[x]<<endl;
  }while(x!=0);
}
