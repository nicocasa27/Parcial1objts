using System;

public class Publicacion
{
    private int publicacion;
    private String autor;
    private String titulo;
    private int paginas;
    private String cubierta;
    private int tracks;
    private String categoria;
    private int numero;
    private int volumen;
    private double precio;

    public Publicacion(int pu, String au, String ti, int pa, String cu, String ca, double pr)
    {
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
        this.publicacion = pu;
        this.titulo = ti;
        this.numero = nu;
        this.volumen = vo;
        this.categoria = ca;
        this.precio = pr;
        this.autor = "";
        this.cubierta = "";
    }

    // Getter y Setter
    public int pub
    {
        get { return publicacion; }
        set { publicacion = value; }
    }

    public String Autor
    {
        get { return autor; }
        set { autor = value; }
    }

    public String Titulo
    {
        get { return titulo; }
        set { titulo = value; }
    }

    public int Paginas
    {
        get { return paginas; }
        set { paginas = value; }
    }
    
    public String Cubierta
    {
        get { return cubierta; }
        set { cubierta = value; }
    }

    public int Tracks
    {
        get { return tracks; }
        set { tracks = value; }
    }
    
    public String Categoria
    {
        get { return categoria; }
        set { categoria = value; }
    }

    public int Numero
    {
        get { return numero; }
        set {  numero = value; }
    }

    public int Volumen
    {
        get { return volumen; }
        set { volumen = value; }
    }

    public double Precio
    {
        get { return precio; }
        set { precio = value; }
    }

    public void Imprimir()
    {
        switch (pub)
        {
            case 1:
                Console.WriteLine("Tipo de publicacion: Libro impreso");
                Console.WriteLine("Datos de autor: " + Autor);
                Console.WriteLine("Titulo: " + Titulo);
                Console.WriteLine("Número de páginas: " + Paginas);
                Console.WriteLine("Tipo de cubierta: " + Cubierta);
                Console.WriteLine("Categoría: " + Categoria);
                Console.WriteLine("Precio" + Precio);
                break;
            case 2:
                Console.WriteLine("Tipo de publicacion: Audio Libro");
                Console.WriteLine("Datos de autor: " + Autor);
                Console.WriteLine("Titulo: " + Titulo);
                Console.WriteLine("Número de tracks: " + Tracks);
                Console.WriteLine("Categoría: " + Categoria);
                Console.WriteLine("Precio" + Precio);
                break;
            case 3:
                Console.WriteLine("Tipo de publicacion: Revista");
                Console.WriteLine("Titulo: " + Titulo);
                Console.WriteLine("Nímero de revista: " + Numero);
                Console.WriteLine("Volumen: " + Volumen);
                Console.WriteLine("Categoría: " + Categoria);
                Console.WriteLine("Precio: " + Precio);
                break;
        }
    }
}
