// Previene la inclusión múltiple del archivo de encabezado
#pragma once
#include <iostream> // Incluye la biblioteca estándar de entrada y salida
using namespace std; // Utiliza el espacio de nombres std para evitar prefijar std:: a cada elemento de la biblioteca estándar

// Definición de la clase Publicacion
class Publicacion
{
private: // Sección privada para los atributos
    int publicacion; // Tipo de publicación (1: Libro impreso, 2: Audio libro, 3: Revista)
    string autor; // Autor de la publicación
    string titulo; // Título de la publicación
    int paginas; // Número de páginas (solo para libros y revistas)
    string cubierta; // Tipo de cubierta (solo para libros)
    int tracks; // Número de tracks (solo para audiolibros)
    string categoria; // Categoría de la publicación (literatura, ciencia, etc.)
    int numero; // Número de revista (solo para revistas)
    int volumen; // Volumen de la revista (solo para revistas)
    double precio; // Precio de la publicación

public: // Sección pública para constructores, métodos getter y setter, y el método imprimir
    // Constructores sobrecargados para inicializar objetos de tipo Publicacion
    Publicacion(int pu, string au, string ti, int pa, string cu, string ca, double pr); // Constructor para libro impreso
    Publicacion(int pu, string au, string ti, int tr, string ca, double pr); // Constructor para audiolibro
    Publicacion(int pu, string ti, int nu, int vo, string ca, double pr); // Constructor para revista

    // Métodos getter para acceder a los atributos de la clase
    int getPublicacion(void);
    string getAutor(void);
    string getTitulo(void);
    int getPaginas(void);
    string getCubierta(void);
    int getTracks(void);
    string getCategoria(void);
    int getNumero(void);
    int getVolumen(void);
    double getPrecio(void);
    
    // Métodos setter para modificar los atributos de la clase
    void setPublicacion(int x);
    void setAutor(string x);
    void setTitulo(string x);
    void setPaginas(int x);
    void setCubierta(string x);
    void setTracks(int x);
    void setCategoria(string x);
    void setNumero(int x);
    void setVolumen(int x);
    void setPrecio(double x);

    // Método para imprimir en consola los datos de la publicación
    void Imprimir(void);
};


// Métodos Getter
// Los métodos getter permiten acceder a los valores de los atributos privados de una clase. No modifican los datos, solo los devuelven al llamador. Aquí tienes un desglose de cada getter:

// int getPublicacion(void);: Devuelve el tipo de la publicación.
// string getAutor(void);: Devuelve el nombre del autor de la publicación.
// string getTitulo(void);: Devuelve el título de la publicación.
// int getPaginas(void);: Devuelve el número de páginas de la publicación (aplicable a libros y revistas).
// string getCubierta(void);: Devuelve el tipo de cubierta del libro (pasta dura o blanda).
// int getTracks(void);: Devuelve el número de tracks del audiolibro.
// string getCategoria(void);: Devuelve la categoría a la que pertenece la publicación.
// int getNumero(void);: Devuelve el número de la revista.
// int getVolumen(void);: Devuelve el volumen de la revista.
// double getPrecio(void);: Devuelve el precio de la publicación.
// Métodos Setter
// Los métodos setter permiten modificar los valores de los atributos privados de una clase. Cada uno toma un parámetro que es el nuevo valor que se asignará al atributo correspondiente:

// void setPublicacion(int x);: Establece el tipo de la publicación.
// void setAutor(string x);: Establece el nombre del autor de la publicación.
// void setTitulo(string x);: Establece el título de la publicación.
// void setPaginas(int x);: Establece el número de páginas de la publicación.
// void setCubierta(string x);: Establece el tipo de cubierta del libro.
// void setTracks(int x);: Establece el número de tracks del audiolibro.
// void setCategoria(string x);: Establece la categoría de la publicación.
// void setNumero(int x);: Establece el número de la revista.
// void setVolumen(int x);: Establece el volumen de la revista.
// void setPrecio(double x);: Establece el precio de la publicación.