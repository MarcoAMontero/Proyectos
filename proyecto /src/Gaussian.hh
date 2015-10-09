// Marco Antonio Montero Chavarría
// Generar valores según una distribución gaussiana a partir de una distribución
// uniforme usando rand() y método Box- Muller
#include <cstdlib>
#include <cmath>
using namespace std;
class Gaussian{

public:
Gaussian(void);
~Gaussian(void);
double generarGaussiana(double mu, double sigma);

};
