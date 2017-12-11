#ifndef CNodo_hpp
#define CNodo_hpp

template<class T> class CNodo{
  T element;
  CNodo<T>* next;
  CNodo<T>* previus;
  public:
    CNodo(T element);
    CNodo<T>* getNext();
    CNodo<T>* getPrevius();
    void setNext(CNodo<T>*);
    void setPrevius(CNodo<T>*);
    T getElement();
};
template<typename T> CNodo<T>::CNodo(T element){
  this->element = element;
  this->next=nullptr;
  this->previus=nullptr;
}
template<typename T> CNodo<T>* CNodo<T>::getNext(){return this->next;}
template<typename T> CNodo<T>* CNodo<T>::getPrevius(){return this->previus;}
template<typename T> void CNodo<T>::setNext(CNodo<T>* nodo){this->next=nodo;}
template<typename T> void CNodo<T>::setPrevius(CNodo<T>* nodo){ this->previus=nodo;}
template<typename T> T CNodo<T>::getElement(){return this->element;}

#endif