//Declaración de arreglos unidimensionales

public class Hola{
    public static void main(String args[]){
        //tipoDato NombreVariable[] = inicialización opcional
       // int array1 [];
        //Los arreglos se comportan como objetos
        int array1[]  = new int[10];
        
        array1[0]= 12;
        array1[8] = 18;

        System.out.println(array1[0]);
       
        for(int i=0; i < array1.length; i++){
            System.out.println(array1[i]);
        }
    }
}