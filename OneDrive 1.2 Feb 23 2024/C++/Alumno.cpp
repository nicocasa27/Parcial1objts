/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   ALumno.cpp
 * Author: maybe
 * 
 * Created on 17 de febrero de 2023, 13:14
 */

#include "Alumno.h"

Alumno::Alumno(void){
    this->_noControl="";
    this->_nombre="";
    this->_calif1=0;
    this->_calif2=0;
    this->_calif3=0;
}

Alumno::Alumno(string nc, string no, int c1, int c2, int c3){
    this->_noControl=nc;
    this->_nombre=no;
    this->_calif1=c1;
    this->_calif2=c2;
    this->_calif3=c3;   
}

void Alumno::setNoControl(string nc){
    this->_noControl=nc;
}

string Alumno::getNoControl(){
    return this->_noControl;
}

void Alumno::setNombre(string no){
    this->_nombre=no;
}

string Alumno::getNombre(){
    return this->_nombre;
}

void Alumno::setCalif1(int c1){
    _calif1=c1;
}

int Alumno::getCalif1(){
    return _calif1;
}

void Alumno::setCalif2(int c2){
    _calif1=c2;
}

int Alumno::getCalif2(){
    return _calif2;
}

void Alumno::setCalif3(int c3){
    _calif1=c3;
}

int Alumno::getCalif3(){
    return _calif3;
}

void Alumno::Leer(){
    
}

string Alumno::RetNoControl(){
    return ""; 
}

string Alumno::RetNombre(){
    return "";
}

void Alumno::RetCalif(){
    
}


