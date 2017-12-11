#include <iostream>
#include "CArchivos.hpp"
#include "vector"
#include "list"

using namespace std;

int main(){
    srand((int)time(NULL));
    SCola<int> entero;
    std::queue<int> myqueue;
    //for(int i=0;i<100;i++){
    //    entero.insertar(i);
    //    myqueue.push(i);
    //}
    //for(int i=0;i<100;i++){
    //    cout<<entero.front()<<endl;
    //    cout<<myqueue.front()<<endl;
    //}
    //CArchivos arch;
    //arch.escArchivos("Diego");
    //std::clock_t inicio ,fin,dif;
    //inicio = clock();
    //arch.leerArchivo(entero);
    //fin= clock(); 
    //cout<<"Tiempo de Ejecucion: "<<(fin-inicio)<<"\n";
    //inicio = clock();
    //arch.leerArchivoXQueue(myqueue);
    //fin= clock();
    //dif=(fin-inicio);
    //cout<<"Tiempo de Ejecucion: "<<dif<<"\n";
    //////////////////
    std::ofstream archive("diego.csv");
    for(int i=0;i<10;++i){
        archive<<"diego"+std::to_string(i)<<","<<"lq"<<","<<rand()%8+18<<std::endl;
        entero.insertar((i+1)*2);
        myqueue.push(i);
    }
    archive.close();
    std::ifstream leer("diego.csv");
    std::string file;
    while(std::getline(leer,file)){
        std::cout<<file<<"\n";
    }
    leer.close();
    //for(int i=0;i < entero.capacidad;i++)
    //    std::cout<<i<<"."<<entero.iterator(i)->elemento<<endl;
    //std::cout<<entero.iterator(4)->elemento<<endl;
    deque<SCola<int*>*> *mydeque = new deque<SCola<int*>*>();
    for(int i=0;i<2;++i){
        SCola<int*> *col= new SCola<int*>();
        mydeque->push_back(col);
        for(int j=0;j<15;++j){
            col->insertar(new int(rand()%10+10));
        }
    }
    std::deque<SCola<int*>*>::iterator it = mydeque->begin();
    for(;it!=mydeque->end();it++){
        for(int j=0;j<15;j++)
            cout<<*(*it)->iterator(j)->elemento<<endl;
    }
    return 0;
    
}