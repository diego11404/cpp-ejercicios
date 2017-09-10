struct SCelular {
    long nro;
    char *marca;
    SCelular(){
        nro=0;
        marca= new char[10];
    }
    SCelular(long nro,char* marca){
      this->nro=nro;
      this->marca=marca;
    }
    void getAll(){
    	std::cout<<nro<<"	"<<marca<<std::endl;
	}
};
