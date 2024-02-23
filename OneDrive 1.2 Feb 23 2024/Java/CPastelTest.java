import java.util.Scanner;
public class CPastelTest{
    public static void main(String[] args) {
        //Crear un objeto de la clase CPastel
        //Clase nomObjeto = new Clase();
        CPastel uva = new CPastel(); //uva es el objeto de la clase CPastel
        CPastel oreo = new CPastel(10.5f,"Torre",true,"esponjoso");
        Scanner leer = new Scanner(System.in);

        System.out.println("Tamaño de tu pastel");
        uva.setTamanio(leer.nextFloat());

        System.out.println("Forma de tu pastel");
        uva.setForma(leer.nextLine());
        
        
        System.out.println("El tamaño del pastel es "+ uva.getTamanio());
        
        uva.xux();
        uva.comer();
        uva.partir();

        //uva.forma="Cuadrado";
        //uva.relleno=false;

        System.out.println();
        uva.partir();
        uva.xux();
        
        System.out.println();
        oreo.xux();
        oreo.comer();
        oreo.partir();
    }

}