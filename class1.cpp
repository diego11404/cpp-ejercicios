#include <iostream>
using namespace std;
class Cfecha{
	int dia,mes,anio;
public:
	Cfecha(int dia,int mes,int anio){
		this->dia=dia;
		this->mes=mes;
		this->anio=anio;
	}
	Cfecha(int dia,int mes){
		this->dia=dia;
		this->mes=mes;
		this->anio=0;
	}
	Cfecha(){
		dia=0;
		mes=0;
		anio=0;
	}
	////get 
	int getDia(){return dia;}
	int getMes(){return mes;}
	int getAnio(){return anio;}
	//// set
	void setDia(int d){this->dia=d;}
	void setMes(int d){mes=d;}
	void setAnio(int a){this->anio=a;}
	
	void addMes(int n){
		this->mes+=n;
	}
	void showDate(){
		cout<<this->dia<<"/"<<mes<<"/"<<anio<<endl;
	}
	~Cfecha(){	}
};
int main(){

	Cfecha today(8,10,2015);
	today.setAnio(2018);
	today.setDia(22);
	today.addMes(2);
	today.showDate();
	Cfecha *today2 = new Cfecha(8,10,2016);
	today2->showDate();
	Cfecha hoy(8,10,2017);
	cout<<hoy.getDia()<<"/"<<hoy.getMes()<<"/"<<hoy.getAnio()<<endl;
	
	return 0;
}

