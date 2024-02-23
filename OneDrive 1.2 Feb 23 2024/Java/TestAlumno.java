

public class TestAlumno {
    public static void main(String args[]){
        
        Alumno alumno1 = new Alumno();
        Alumno alumno2 = new Alumno("01230523","Lizbeth",87,89,90);
        
        Alumno._nombre="HOla";
        
        //alumno1.Leer();
        //alumno1.RetCalif();
        System.out.println(alumno1.getNoControl());
        System.out.println(alumno1.getNombre());
        
        System.out.println(alumno2.getNoControl());
        System.out.println(alumno2.getNombre());
        System.out.println(alumno2.getCalif1());
        System.out.println(alumno2.getCalif2());
        System.out.println(alumno2.getCalif3());
        
        
    }
    
}
