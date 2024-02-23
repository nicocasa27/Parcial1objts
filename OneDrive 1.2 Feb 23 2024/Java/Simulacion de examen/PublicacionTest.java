// Definición de la clase PublicacionTest que contiene el método main para ejecutar el programa
public class PublicacionTest {
    public static void main(String[] args) {
        // Creación de un objeto de tipo Publicacion representando un libro impreso
        // Se pasa el tipo de publicación, autor, título, número de páginas, tipo de cubierta, categoría y precio al constructor
        Publicacion libroImpreso = new Publicacion(1,"Francisco Javier Ceballos", "Java 2", 455,"Pasta Blanda", "Especializado",799.90);
        
        // Creación de un objeto de tipo Publicacion representando un audio libro
        // Se pasa el tipo de publicación, autor, título, número de tracks, categoría y precio al constructor
        Publicacion audioLibro = new Publicacion(2,"Leonardo Padura", "Vientos de cuaresma", 40, "Religioso", 249.90);
        
        // Creación de un objeto de tipo Publicacion representando una revista
        // Se pasa el tipo de publicación, título, número de revista, volumen, categoría y precio al constructor
        Publicacion revista = new Publicacion(3, "Forbes", 134, 15, "Business", 249.90);

        // Llamada al método Imprimir para mostrar los detalles del libro impreso
        libroImpreso.Imprimir();
        System.out.println(); // Inserta una línea en blanco para separar las impresiones

        // Llamada al método Imprimir para mostrar los detalles del audio libro
        audioLibro.Imprimir();
        System.out.println(); // Inserta una línea en blanco para separar las impresiones

        // Llamada al método Imprimir para mostrar los detalles de la revista
        revista.Imprimir();
    }
}
