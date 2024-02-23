using System;

public class PublicacionTest
{
    static void Main()
    {
        // Creación de una instancia de Publicacion para representar un libro impreso.
        // Se especifican todos los detalles relevantes como el tipo de publicación, autor, título, número de páginas,
        // tipo de cubierta, categoría y precio.
        Publicacion libroImpreso = new Publicacion(1, "Francisco Javier Ceballos", "Java 2", 455, "Pasta Blanda", "Especializado", 799.90);

        // Creación de una instancia de Publicacion para representar un audiolibro.
        // Se proporcionan detalles como el tipo de publicación, autor, título, número de tracks, categoría y precio.
        Publicacion audioLibro = new Publicacion(2, "Leonardo Padura", "Vientos de cuaresma", 40, "Religioso", 249.90);

        // Creación de una instancia de Publicacion para representar una revista.
        // Se incluyen detalles como el tipo de publicación, título, número de revista, volumen, categoría y precio.
        Publicacion revista = new Publicacion(3, "Forbes", 134, 15, "Business", 249.90);

        // Utilización del método Imprimir() de cada objeto Publicacion para mostrar sus detalles.
        libroImpreso.Imprimir();
        Console.WriteLine(); // Se añade una línea en blanco para separar las impresiones de cada publicación.

        audioLibro.Imprimir();
        Console.WriteLine(); // Se añade una línea en blanco para separar las impresiones.

        revista.Imprimir();
    }
}
