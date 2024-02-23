public class CPastel {
    //Declarar los atributos
    private float tamanio;
    private String forma;
    private boolean relleno;
    private String consistencia;

    //Declaración de constructor
    CPastel(){
        tamanio=2.5f;
        forma="Redonda";
        relleno=true;
        consistencia="suave";
    }

    //Constructor 2 - Recibe 4 parámetros
    CPastel(float t, String f, boolean r, String c){ 
        tamanio = t;
        forma = f;
        relleno = r;
        consistencia = c;
    }

    //Declarar los métodos
    public void comer(/*con o sin parametros*/){
        System.out.println("Me voy a comer un rico pastel que esta "+consistencia);
    }
    
    public void partir(){
        System.out.println("Vamos a partir el pastel de "+tamanio+" kg de forma "+
        forma);
    }

    public void xux(){
       if (relleno == true)
            System.out.println("Te recomiendo que no hagas xux");         
       else 
            System.out.println("Sería buena idea hacer xux");
    }

    public void setTamanio(float t){
        tamanio = t;
    }

    public void setForma(String f){
        forma = f;
    }

    public void setRelleno(boolean r){
        relleno = r;
    }

    public void setConsistencia(String c){
        consistencia = c;
    }

    public float getTamanio(){
        return tamanio;
    }

    public String getForma(){
        return forma;
    }

    public boolean getRelleno(){
        return relleno;
    }

    public String getConsistencia(){
        return consistencia;
    }


}

