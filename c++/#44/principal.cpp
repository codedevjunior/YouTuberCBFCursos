#include <iostream>

class Aviao{

public:
  int vel = 0;
  int velMax;
  std::string tipo;
  void ini(int tp);

private:

};

void Aviao::ini(int tp){
  if(tp == 1){
    this -> velMax = 800;
    this -> tipo = "Jato";
  }else if(tp == 2){
    this -> velMax = 350;
    this -> tipo = "Monomotor";
  }else if(tp == 3){
    this -> velMax = 180;
    this -> tipo = "Planador";
  }
}

int main(){

  Aviao *av1=new Aviao();
  av1 -> ini(3);

  std::cout << av1 -> velMax;

  return 0;
}
