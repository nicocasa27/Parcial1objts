#include <cstdlib>
#include <iostream>
#include "Alumno.h"

using namespace std;

int main(){
    
    Alumno alumno1();
    Alumno alumno2("01230523","Lizbeth", 85, 89, 90);
    
    //cout<<alumno1.getNoControl();
    //cout<<alumno1.getNombre();
    
    cout<<alumno2.getNoControl();
    cout<<alumno2.getNombre();
    cout<<alumno2.getCalif1();
    cout<<alumno2.getCalif2();
    cout<<alumno2.getCalif3();
    
    /*alumno1._calif1=10;
    alumno1._calif2=10;
    alumno1._calif3=10;
    alumno1._noControl="FD234";
    alumno1._nombre="Liliana";
    
    alumno1.Leer();
    alumno1.RetCalif();
    string nc= alumno1.RetNoControl();
    string no= alumno1.RetNombre();*/
    
    return 0;
    
}

