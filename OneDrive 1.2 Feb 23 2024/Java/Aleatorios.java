//Importar un paquete Random
import java.util.Random;

public class Aleatorios {
    public static void main(String[] args) {
        //Crear un objeto de la clase Random
        //CLASE variable = new CLASE();
        Random leoni = new Random();
        
        int mayab; //Variable que alamacena el valor aleatorio
        
        for(int i=0; i<10; i++){
            //Instrucción 
            mayab = 50+ leoni.nextInt(51);
            System.out.println(mayab);
        }


    }
}
