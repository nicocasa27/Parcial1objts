using System;

public class TestAlumno{
    static void Main(){
        //Crear un objeto de la clase Alumno
        //nomClase nomObjeto = new Constructor
        Alumno alumno1 = new Alumno();
        Alumno alumno2 = new Alumno("00G1","Perla", 10, 9, 6);

        Console.WriteLine(alumno1.RetNombre());
        Console.WriteLine(alumno1.RetControl());

        alumno1.setNoControl("A2340G");
        alumno1.setNombre("Ramiro");

        Console.WriteLine(alumno1.getNoControl());
        Console.WriteLine(alumno1.getNombre());
        Console.WriteLine(alumno1.getCalif1()+"\n"+alumno1.getCalif2()+"\n"+alumno1.getCalif3());

        Console.WriteLine(alumno2.getCalif1()+"\n"+alumno2.getCalif2()+"\n"+alumno2.getCalif3());


        //Console.WriteLine(alumno2._nombre);

    }
}