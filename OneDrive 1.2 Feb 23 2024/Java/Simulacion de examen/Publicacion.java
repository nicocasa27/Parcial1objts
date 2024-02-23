// Definición de la clase Publicacion
public class Publicacion {
    // Atributos privados de la clase para almacenar características de una publicación
    private int publicacion; // Tipo de publicación (1: Libro impreso, 2: Audio libro, 3: Revista)
    private String autor; // Nombre del autor de la publicación
    private String titulo; // Título de la publicación
    private int paginas; // Número de páginas (aplica para libros y revistas)
    private String cubierta; // Tipo de cubierta para libros (pasta dura, pasta blanda)
    private int tracks; // Número de tracks (aplica para audiolibros)
    private String categoria; // Categoría de la publicación (literatura, consulta, etc.)
    private int numero; // Número de revista (aplica para revistas)
    private int volumen; // Volumen de la revista (aplica para revistas)
    private double precio; // Precio de la publicación

    // Constructor para Libro Impreso
    public Publicacion(int pu, String au, String ti, int pa, String cu, String ca, double pr){
        this.publicacion = pu;
        this.autor = au;
        this.titulo = ti;
        this.paginas = pa;
        this.cubierta = cu;
        this.categoria = ca;
        this.precio = pr;
    }

    // Constructor para Audio Libro
    public Publicacion(int pu, String au, String ti, int tr, String ca, double pr){
        this.publicacion = pu;
        this.autor = au;
        this.titulo = ti;
        this.tracks = tr;
        this.categoria = ca;
        this.precio = pr;
    }

    // Constructor para Revista
    public Publicacion(int pu, String ti, int nu, int vo, String ca, double pr){
        this.publicacion = pu;
        this.titulo = ti;
        this.numero = nu;
        this.volumen = vo;
        this.categoria = ca;
        this.precio = pr;
    }

    // Métodos getter para obtener los valores de los atributos
    public int getPublicacion(){
       return this.publicacion;
    }

    public String getAutor(){
        return this.autor;
    }

    public String getTitulo(){        
        return this.titulo;
    }

    public int getPaginas(){
        return this.paginas;
    }

    public String getCubierta(){
        return this.cubierta;
    }

    public int getTracks(){
        return this.tracks;
    }

    public String getCategoria(){
        return this.categoria;
    }

    public int getNumero(){
        return this.numero;
    }

    public int getVolumen(){
        return this.volumen;
    }

    public double getPrecio(){
        return this.precio;
    }

    // Métodos setter para establecer los valores de los atributos
    void setPublicacion(int x){
        this.publicacion = x;
    }

    void setAutor(String x){
        this.autor = x;
    }

    void setTitulo(String x){        
        this.titulo = x;
    }

    void setPaginas(int x){
        this.paginas = x;
    }

    void setCubierta(String x){
        this.cubierta = x;
    }

    void setTracks(int x){
        this.tracks = x;
    }

    void setCategoria(String x){
        this.categoria = x;
    }

    void setNumero(int x){
        this.numero = x;
    }

    void setVolumen(int x){
        this.volumen = x;
    }

    void setPrecio(double x){
        this.precio = x;
    }

    // Método para imprimir los detalles de la publicación basado en su tipo
    void Imprimir(){
        switch(this.publicacion){
            case 1: // Libro impreso
                System.out.println("Tipo de publicacion: Libro impreso");
                System.out.println("Datos de autor: "+this.getAutor());
                System.out.println("Titulo: "+this.getTitulo());
                System.out.println("Número de páginas: "+getPaginas());
                System.out.println("Tipo de cubierta: "+this.getCubierta());
                System.out.println("Categoría: "+ this.getCategoria());
                System.out.println("Precio: "+this.getPrecio());
                break;
            case 2: // Audio libro
                System.out.println("Tipo de publicacion: Audio Libro");
                System.out.println("Datos de autor: "+this.getAutor());
                System.out.println("Titulo: "+this.getTitulo());
                System.out.println("Número de tracks: "+getTracks());
                System.out.println("Categoría: "+ this.getCategoria());
                System.out.println("Precio: "+this.getPrecio());
                break;
            case 3: // Revista
                System.out.println("Tipo de publicacion: Revista");
                System.out.println("Titulo: "+this.getTitulo());
                System.out.println("Número de revista: "+getNumero());
                System.out.println("Volumen: "+this.getVolumen());
                System.out.println("Categoría: "+ this.getCategoria());
                System.out.println("Precio: "+this.getPrecio());
                break;
        }
    }
}
