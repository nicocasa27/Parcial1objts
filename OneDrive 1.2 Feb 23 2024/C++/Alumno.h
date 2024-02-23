/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   ALumno.h
 * Author: maybe
 *
 * Created on 17 de febrero de 2023, 13:14
 */

#ifndef ALUMNO_H
#define ALUMNO_H
#include <iostream>
using namespace std;

class Alumno{
private:
    string _noControl="";
    string _nombre="";
    int _calif1;
    int _calif2;
    int _calif3;
 
public:
    
    Alumno(void);
    Alumno(string, string, int, int, int);
    
    void Leer();
    string RetNoControl();
    string RetNombre();
    void RetCalif();
    
    void setNoControl(string nc);
    string getNoControl();
    
    void setNombre(string no);
    string getNombre();
    
    void setCalif1(int c1);
    int getCalif1();
    
    void setCalif2(int c2);
    int getCalif2();
    
    void setCalif3(int c3);
    int getCalif3();
    
};
#endif /* ALUMNO_H */

