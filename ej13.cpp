#include <iostream>
#include <vector>
template<typename T1,typename T2> 
T1 cualquier(T1 a, T2 b){
 	return a + b;
 }
template<class T1>
class nada{
	nada<T1>* nad;
	T1 elemento;
	T1 elemento2;
  	std::vector<T1*> lista;
public: 
  	nada(T1 a, T1 b);
	T1 suma(T1 a = 10 ,T1 b=25);
  	void insertar(T1* obj){
  		lista.push_back(obj);	
	}
	short capacidad(){
		return lista.size();
	}
	T1* recuperar(short pos);
	void eliminar(short pos);
	
	void mostrar(){
		for(int i=0;i<lista.size();i++){
			std::cout<<lista[i]<<std::endl;
		}
	}
  	
};
template<typename T>
T nada<T>::suma(T a ,T b){
		return a + b;
}
template<typename T>
nada<T>::nada(T a, T b){
  	this->elemento=a;
  	this->elemento2=b;
	this->nad=nullptr;
	}
template<typename T>
T* nada<T>::recuperar(short pos){
	return lista.at(pos);
}
template<typename T>
void nada<T>::eliminar(short pos){
		lista.erase(pos);
}
int main(){
 	unsigned g =50;
 	
 	std::cout<<cualquier<int>(5,8)<<std::endl;
 	std::cout<<cualquier(5.5,8.9)<<std::endl;
 	std::cout<<cualquier(99.888888,8)<<std::endl;
 	std::cout<<cualquier(8.2,9)<<std::endl;
 	
 	nada<int*>* entero = new nada<int*>(new int(10),new int(20));
 	nada<double>* real = new nada<double>(17,2);
 	nada<float> flotante(10.2,2.3);
 
 	
 	int** ente=new int*[10];
 	for(int i=0;i<10;i++){
 		ente[i]=new int(i*10);
	 }
 	std::cout<<ente+2<<" "<<ente+1<<" "<<ente<<" "<<(ente+1)<<std::endl;
 	for(int i=0;i<10;++i){
 		entero->insertar(ente+i);
 		std::cout<<**(entero->recuperar(i))<<" ";
	}
 	entero->mostrar();
	std::cout<<"REALES"<<std::endl;
	real->insertar(new double(10.8));
	std::cout<<*(real->recuperar(0))<<std::endl;
	std::cout<<"Suma: "<<real->suma(10.8,85.3)<<std::endl;
	std::cout<<"Floatantes"<<std::endl;
	std::cout<<"Suma: "<<flotante.suma(18.8,15.3)<<std::endl;
	delete entero,ente;
	delete real;
 	return 0;
 }
