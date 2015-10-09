#include <stack>
#include <string>
using namespace std;

class Comunicacion{

private:
	stack <string> canal;
public:
	Comunicacion(void);
	~Comunicacion(void);
	int inicializar(void);
	bool send(void);
	bool receive(void);
	bool deform_mensaje(double mu,double sigma,int tipo);

};
