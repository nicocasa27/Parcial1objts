

public class Alumno{
    

   private String _noControl;
   static String _nombre;
   private int _calif1;
   private int _calif2;
   private int _calif3;
   
   Alumno(){
       this._noControl="";
       _nombre="";
       this._calif1=0;
       this._calif2=0;
       this._calif3=0;       
   }
   
   Alumno(String nc, String no, int c1, int c2, int c3){
       this._noControl=nc;
       _nombre=no;
       this._calif1=c1;
       this._calif2=c2;
       this._calif3=c3;   
   }
   
   public void setNoControl(String nc){
       this._noControl=nc;
   }
   
   public String getNoControl(){
       return _noControl;
   }
   
   public void setNombre(String no){
       _nombre=no;
   }
   
   public String getNombre(){
       return _nombre;
   }

   public void setCalif1(int c1){
       this._calif1=c1;
   }
   
   public int getCalif1(){
       return _calif1;
   }
   
   public void setCalif2(int c2){
       this._calif2=c2;
   }
   
   public int getCalif2(){
       return _calif2;
   }
   
   public void setCalif3(int c3){
       this._calif3=c3;
   }
   
   public int getCalif3(){
       return _calif3;
   }
   
   void Leer(){
      
   }
    
   String RetNoControl(){
       return "OP12344";
   }
   
   String RetNombre(){
       return "Liliana";
   }
   
   void RetCalif(){
       
   }

}