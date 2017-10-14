template<typename T> class CNodo{
  CNodo<T>* siguiente;
  CNodo<T>* anterior;
  T elemento;
public:
  CNodo(T elemento);
  CNodo<T>* getsiguiente();
  CNodo<T>* getanterior();
  void setsiguiente(CNodo<T>*);
  void setanterior(CNodo<T>*);
  T getElemento();
  void SetElemento(T);
};
template<typename T> CNodo<T>::CNodo(T elemento){
    this->anterior=nullptr;
    this->siguiente=nullptr;
    this->elemento=elemento;   
}
template<typename T> T CNodo<T>::getElemento(){
  return this->elemento;;
}
template<typename T> CNodo<T>* CNodo<T>::getsiguiente(){
  return this->siguiente;
}
template<typename T> CNodo<T>* CNodo<T>::getanterior(){
  return this->anterior;
}
template<typename T> void CNodo<T>::setanterior(CNodo<T>* obj){
  this->anterior=obj;
}
template<typename T> void CNodo<T>::setsiguiente(CNodo<T>* obj){
  this->siguiente=obj;
}