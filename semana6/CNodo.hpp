template<typename T> class CNodo{
  CNodo<T>* siguiente;
  CNodo<T>* anterior;
  T elemento;
public:
  CNodo(T elemento);
  CNodo<T>* getSiguiente();
  CNodo<T>* getAnterior();
  bool setSiguiente(CNodo<T>* obj);
  bool setAnterior(CNodo<T>* obj);
  T getElemento();
};
template<typename T> CNodo<T>::CNodo(T element){
  this->elemento=element;
  this->siguiente=nullptr;
  this->anterior=nullptr;
}
template<typename T> CNodo<T>* CNodo<T>::getSiguiente(){
  return this->siguiente;  
}
template<typename T> CNodo<T>* CNodo<T>::getAnterior(){
  return this->anterior;
}
template<typename T> bool CNodo<T>::setSiguiente(CNodo<T>* obj){
  return this->siguiente=obj,true;
}
template<typename T> bool CNodo<T>::setAnterior(CNodo<T>* obj){
  return this->anterior=obj,true;
}
template<typename T>
T CNodo<T>::getElemento(){
  return this->elemento;
}

