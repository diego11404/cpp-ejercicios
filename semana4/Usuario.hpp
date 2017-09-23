#ifndef  __USUARIO_HPP__
#define __USUARIO_HPP__
class CUsuario{
private:
	char* nombre;
	char* apellido;
	long dni;
	char* brevete;
	long codigo;
public:
	CUsuario(char* nombre,char* apellido,long dni,char* brevete,long codigo);
	CUsuario();
	~CUsuario();
	char* getNombre();
	char* getApellido();
	long getDni();
	char* getBrevete();
	long getCodigo();

	void setNombre(char* nombre);
	void setApellido(char* apellido);
	void setDni(long dni);
	void setBrevete(char* brevete);
	void setCodigo(long codigo);
};
CUsuario::CUsuario(char* nombre, char* apellido, long dni, char* brevete, long codigo) {
	this->nombre = nombre; //  referencia al nombre del atributo de la clase
	this->apellido = apellido;
	this->dni = dni;
	this->brevete = brevete;
	this->codigo = codigo;
}
CUsuario::CUsuario(){
	this->nombre = new char[10];
	this->apellido = new char[10];
	this->dni = 0;
	this->brevete = new char[10];
	this->codigo = 0;
} 
CUsuario::~CUsuario() {}
char* CUsuario::getNombre() { return this->nombre; }
char* CUsuario::getApellido(){ return this->apellido; }
long CUsuario::getDni(){ return this->dni; }
char* CUsuario::getBrevete(){ return this->brevete; }
long CUsuario::getCodigo(){ return this->codigo; }
/////////////////////////////////////////////////////
void CUsuario::setNombre(char* nombre) {  this->nombre=nombre; }
void CUsuario::setApellido(char* apellido){  this->apellido= apellido; }
void CUsuario::setDni(long dni){  this->dni= dni; }
void CUsuario::setBrevete(char* brevete){  this->brevete= brevete; }
void CUsuario::setCodigo(long codigo){  this->codigo= codigo; }
#endif // ! __USUARIO_HPP__
