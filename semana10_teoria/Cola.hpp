#ifndef _COLA_HPP_
#define _COLA_HPP_

template<class T> struct Nodo{
    T elemento;
    Nodo<T>* siguiente;
    long c;
    Nodo(T e){
        this->elemento=e;
        this->siguiente=nullptr;
    }
};
template<class T> struct SCola{
    Nodo<T> * inicio;
    Nodo<T> * fin;
    long capacidad;
    bool band;
    SCola(){
        this->inicio=nullptr;
        this->fin=nullptr;
        capacidad=0;
    }
    bool insertar(T e){
        Nodo<T> *nuevo = new Nodo<T>(e);
        if(inicio==nullptr){
            inicio=nuevo;
            fin=nuevo;
        }else{
            fin->siguiente=nuevo;
            fin=nuevo;
        }
        this->capacidad++;
        return true;
       //return  inicio==nullptr && (fin=nuevo)  && (inicio=nuevo) || (inicio!=nullptr || (fin->siguiente=nuevo), (fin=nuevo)  ) , true;
    }
    T front(){
        if(inicio!=nullptr)
         return inicio->elemento;
       //return inicio!=nullptr ? inicio->elemento : 0;
    }
    bool pop(){
        band = false;
        if(inicio!=nullptr){
            inicio=inicio->siguiente;
            capacidad--;
            band=true;
        }
        return band;
       //return (band= inicio!=nullptr) && ( (aux=inicio),(inicio=inicio->siguiente),capacidad--),band;
    }
    Nodo<T>* getInicio(){
        return this->inicio;
    }
    Nodo<T>* iterator(int pos){
        Nodo<T>* aux = this->inicio;
        int c=0;
        if(pos>=0 && pos < this->capacidad){
            while(aux->siguiente!=nullptr && c++!=(pos) ){
                aux=aux->siguiente;
            }
            return aux;
        }
    }
};
#endif
