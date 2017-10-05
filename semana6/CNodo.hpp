template<typename T> class CNodo{
  CNodo<T>* nodos;
  T elemento;
public:
  CNodo(T elemento);
  CNodo<T>* getNodos();
  void setNodos(CNodo<T>* obj);
  T getElemento();
};
template<typename T> CNodo<T>::CNodo(T element){
  this->elemento=element;
  this->nodos=nullptr;
}
template<typename T>
CNodo<T>* CNodo<T>::getNodos(){
  return this->nodos;  
}
template<typename T>
void CNodo<T>::setNodos(CNodo<T>* obj){
  this->nodos=obj;
}
template<typename T>
T CNodo<T>::getElemento(){
  return this->elemento;
}