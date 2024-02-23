// Inclusión de la cabecera de la clase Publicacion y la biblioteca iostream para entrada/salida
#include "Publicacion.h"
#include <iostream>
using namespace std;

// Constructor para inicializar un libro impreso con sus atributos específicos
Publicacion::Publicacion(int pu, string au, string ti, int pa, string cu, string ca, double pr) {
    this->publicacion = pu; // Tipo de publicación
    this->autor = au;       // Autor del libro
    this->titulo = ti;      // Título del libro
    this->paginas = pa;     // Número de páginas del libro
    this->cubierta = cu;    // Tipo de cubierta del libro (pasta dura, pasta blanda)
    this->categoria = ca;   // Categoría a la que pertenece el libro
    this->precio = pr;      // Precio del libro
}

// Constructor para inicializar un audiolibro con sus atributos específicos
Publicacion::Publicacion(int pu, string au, string ti, int tr, string ca, double pr) {
    this->publicacion = pu; // Tipo de publicación
    this->autor = au;       // Autor del audiolibro
    this->titulo = ti;      // Título del audiolibro
    this->tracks = tr;      // Número de tracks del audiolibro
    this->categoria = ca;   // Categoría a la que pertenece el audiolibro
    this->precio = pr;      // Precio del audiolibro
}

// Constructor para inicializar una revista con sus atributos específicos
Publicacion::Publicacion(int pu, string ti, int nu, int vo, string ca, double pr) {
    this->publicacion = pu; // Tipo de publicación
    this->titulo = ti;      // Título de la revista
    this->numero = nu;      // Número de la revista
    this->volumen = vo;     // Volumen de la revista
    this->categoria = ca;   // Categoría a la que pertenece la revista
    this->precio = pr;      // Precio de la revista
}

// Métodos getter para acceder a los atributos de la clase
int Publicacion::getPublicacion() { return this->publicacion; }
string Publicacion::getAutor() { return this->autor; }
string Publicacion::getTitulo() { return this->titulo; }
int Publicacion::getPaginas() { return this->paginas; }
string Publicacion::getCubierta() { return this->cubierta; }
int Publicacion::getTracks() { return this->tracks; }
string Publicacion::getCategoria() { return this->categoria; }
int Publicacion::getNumero() { return this->numero; }
int Publicacion::getVolumen() { return this->volumen; }
double Publicacion::getPrecio() { return this->precio; }

// Métodos setter para modificar los atributos de la clase
void Publicacion::setPublicacion(int x) { this->publicacion = x; }
void Publicacion::setAutor(string x) { this->autor = x; }
void Publicacion::setTitulo(string x) { this->titulo = x; }
void Publicacion::setPaginas(int x) { this->paginas = x; }
void Publicacion::setCubierta(string x) { this->cubierta = x; }
void Publicacion::setTracks(int x) { this->tracks = x; }
void Publicacion::setCategoria(string x) { this->categoria = x; }
void Publicacion::setNumero(int x) { this->numero = x; }
void Publicacion::setVolumen(int x) { this->volumen = x; }
void Publicacion::setPrecio(double x) { this->precio = x; }

// Método para imprimir la información de la publicación basada en su tipo
void Publicacion::Imprimir() {
    switch (this->publicacion) {
    case 1: // Libro impreso
        cout << "Tipo de publicacion: Libro impreso" << endl;
        cout << "Datos de autor: " << this->getAutor() << endl;
        cout << "Titulo: " << this->getTitulo() << endl;
        cout << "Número de páginas: " << getPaginas() << endl;
        cout << "Tipo de cubierta: " << this->getCubierta() << endl;
        cout << "Categoría: " << this->getCategoria() << endl;
        cout << "Precio: " << this->getPrecio() << endl;
        break;
    case 2: // Audio Libro
        cout << "Tipo de publicacion: Audio Libro" << endl;
        cout << "Datos de autor: " << this->getAutor() << endl;
        cout << "Titulo: " << this->getTitulo() << endl;
        cout << "Número de tracks: " << this->getTracks() << endl;
        cout << "Categoría: " << this->getCategoria() << endl;
        cout << "Precio: " << this->getPrecio() << endl;
        break;
    case 3: // Revista
        cout << "Tipo de publicacion: Revista" << endl;
        cout << "Titulo: " << this->getTitulo() << endl;
        cout << "Número de revista: " << this->getNumero() << endl;
        cout << "Volumen: " << this->getVolumen() << endl;
        cout << "Categoría: " << this->getCategoria() << endl;
        cout << "Precio: " << this->getPrecio() << endl;
        break;
    }
}
