#include <iostream>
#ifndef _USUARIO_HPP_
#define _USUARIO_HPP_
class CUsuario{
private:
  char* name;
  char* lastName;
  char typeUser;
  short userCode;
  short ticker; 
public:
  CUsuario(char* name,char* lastName,char typeUser,short userCode,short ticker);
  char* getname();
  char* getlastName();
  char  gettypeUser();
  short getuserCode();
  short getticker();
  void getAll();
  friend std::ostream& operator<<(std::ostream&,const CUsuario&);
};
std::ostream& operator<<(std::ostream& strm,const CUsuario& obj){
  std::cout<<obj.name<<" "<<obj.lastName<<" "<<obj.typeUser<<" "<<obj.userCode<<" "<<obj.ticker;
  
}
CUsuario::CUsuario(char* name,char* lastName,char typeUser,short userCode,short ticker){
    this->name=name;
    this->lastName=lastName;
    this->typeUser=typeUser;
    this->userCode=userCode;
    this->ticker=ticker;
}
char* CUsuario::getname(){return this->name;}
char* CUsuario::getlastName(){return this->lastName;}
char  CUsuario::gettypeUser(){return this->typeUser;}
short CUsuario::getuserCode(){return this->userCode;}
short CUsuario::getticker(){return this->ticker;}
void CUsuario::getAll(){
  std::cout<<this->name<<" "<<this->lastName<<" "<<this->typeUser<<" "<<this->userCode<<" "<<this->ticker<<std::endl;  
}
#endif