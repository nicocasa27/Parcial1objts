using System;

public class Publicacion
{
    // Atributos privados que almacenan propiedades de la publicación
    private int publicacion; // Tipo de publicación (1: Libro impreso, 2: Audio Libro, 3: Revista)
    private String autor; // Autor de la publicación
    private String titulo; // Título de la publicación
    private int paginas; // Número de páginas (para libros y revistas)
    private String cubierta; // Tipo de cubierta (para libros)
    private int tracks; // Número de tracks (para audiolibros)
    private String categoria; // Categoría temática de la publicación
    private int numero; // Número de la edición (para revistas)
    private int volumen; // Volumen de la edición (para revistas)
    private double precio; // Precio de la publicación

    // Constructores sobrecargados para inicializar objetos de la clase con diferentes conjuntos de datos
    public Publicacion(int pu, String au, String ti, int pa, String cu, String ca, double pr)
    {
        // Inicializa un libro impreso con sus propiedades específicas
        this.publicacion = pu;
        this.autor = au;
        this.titulo = ti;
        this.paginas = pa;
        this.cubierta = cu;
        this.categoria = ca;
        this.precio = pr;
    }

    public Publicacion(int pu, String au, String ti, int tr, String ca, double pr)
    {
        // Inicializa un audiolibro con sus propiedades específicas, estableciendo autor y cubierta como vacíos ya que no son relevantes
        this.publicacion = pu;
        this.autor = au;
        this.titulo = ti;
        this.tracks = tr;
        this.categoria = ca;
        this.precio = pr;
        this.autor = "";
        this.cubierta = "";
    }

    public Publicacion(int pu, String ti, int nu, int vo, String ca, double pr)
    {
        // Inicializa una revista con sus propiedades específicas, estableciendo autor y cubierta como vacíos ya que no son relevantes
        this.publicacion = pu;
        this.titulo = ti;
        this.numero = nu;
        this.volumen = vo;
        this.categoria = ca;
        this.precio = pr;
        this.autor = "";
        this.cubierta = "";
    }

    // Métodos getter para obtener los valores de los atributos
    public int getPublicacion() { return this.publicacion; }
    public String getAutor() { return this.autor; }
    public String getTitulo() { return this.titulo; }
    public int getPaginas() { return this.paginas; }
    public String getCubierta() { return this.cubierta; }
    public int getTracks() { return this.tracks; }
    public String getCategoria() { return this.categoria; }
    public int getNumero() { return this.numero; }
    public int getVolumen() { return this.volumen; }
    double getPrecio() { return this.precio; }

    // Métodos setter para modificar los valores de los atributos
    void setPublicacion(int x) { this.publicacion = x; }
    void setAutor(String x) { this.autor = x; }
    void setTitulo(String x) { this.titulo = x; }
    void setPaginas(int x) { this.paginas = x; }
    void setCubierta(String x) { this.cubierta = x; }
    void setTracks(int x) { this.tracks = x; }
    void setCategoria(String x) { this.categoria = x; }
    void setNumero(int x) { this.numero = x; }
    void setVolumen(int x) { this.volumen = x; }
    void setPrecio(double x) { this.precio = x; }

    // Método para imprimir en consola los detalles de la publicación basándose en su tipo
    public void Imprimir()
    {
        switch (this.publicacion)
        {
            case 1: // Libro impreso
                Console.WriteLine("Tipo de publicacion: Libro impreso");
                Console.WriteLine("Datos de autor: " + this.getAutor());
                Console.WriteLine("Titulo: " + this.getTitulo());
                Console.WriteLine("Número de páginas: " + getPaginas());
                Console.WriteLine("Tipo de cubierta: " + this.getCubierta());
                Console.WriteLine("Categoría: " + this.getCategoria());
                Console.WriteLine("Precio: " + this.getPrecio());
                break;
            case 2: // Audio Libro
                Console.WriteLine("Tipo de publicacion: Audio Libro");
                Console.WriteLine("Datos de autor: " + this.getAutor());
                Console.WriteLine("Titulo: " + this.getTitulo());
                Console.WriteLine("Número de tracks: " + getTracks());
                Console.WriteLine("Categoría: " + this.getCategoria());
                Console.WriteLine("Precio: " + this.getPrecio());
                break;
            case 3: // Revista
                Console.WriteLine("Tipo de publicacion: Revista");
                Console.WriteLine("Titulo: " + this.getTitulo());
                Console.WriteLine("Número de revista: " + getNumero());
                Console.WriteLine("Volumen: " + this.getVolumen());
                Console.WriteLine("Categoría: " + this.getCategoria());
                Console.WriteLine("Precio: " + this.getPrecio());
                break;
        }
    }
}
