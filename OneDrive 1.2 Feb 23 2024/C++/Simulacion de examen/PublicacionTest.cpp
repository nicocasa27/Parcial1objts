#include <iostream>
#include "Publicacion.h"

using namespace std;

int main() {
    Publicacion libroImpreso(1, "Francisco Javier Ceballos", "Java 2", 455, "Pasta Blanda", "Especializado", 799.90);
    Publicacion audioLibro(2, "Leonardo Padura", "Vientos de cuaresma", 40, "Religioso", 249.90);
    Publicacion revista(3, "Forbes", 134, 15, "Business", 249.90);

    libroImpreso.Imprimir();
    cout << "\n";
    audioLibro.Imprimir();
    cout << "\n";
    revista.Imprimir();

	return 0;
}