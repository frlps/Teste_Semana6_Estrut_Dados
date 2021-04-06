#include <iostream>
using namespace std;
//Chamando o namespace std aqui exime de refazer estas chamadas nos demais arquivos?

class Aluno{
private :
  int         ra;
  std::string nome;  
public:  
  Aluno();
  Aluno(int ra, std::string nome);
  string getNome() const;
  int getRa() const;
};
