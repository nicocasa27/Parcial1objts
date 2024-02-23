using System;

public class PublicacionTest
{
    static void Main()
    {
        Publicacion libroImpreso = new Publicacion(1, "Francisco Javier Ceballos", "Java 2", 455, "Pasta Blanda", "Especializado", 799.90);
        Publicacion audioLibro = new Publicacion(2, "Leonardo Padura", "Vientos de cuaresma", 40, "Religioso", 249.90);
        Publicacion revista = new Publicacion(3, "Forbes", 134, 15, "Business", 249.90);

        libroImpreso.Imprimir();
        Console.WriteLine();
        audioLibro.Imprimir();
        Console.WriteLine();
        revista.Imprimir();
    }
}