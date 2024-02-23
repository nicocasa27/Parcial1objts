using System;

public class Alumno{
    //Atributos
    private String _noControl;
    private String _nombre;
    private int _calif1;
    private int _calif2;
    private int _calif3;
    
    //Constructores
    public Alumno(){
        this._noControl="";
        this._nombre="";
        this._calif1=0;
        this._calif2=0;
        this._calif3=0;
    }
    public Alumno(String nc, String no, int c1, int c2, int c3){
        this._noControl=nc;
        this._nombre = no;
        this._calif1=c1;
        this._calif2=c2;
        this._calif3=c3;
    }

    //Métodos setter y getter
    public void setNoControl(String nc){
        this._noControl = nc;
    }

    public String getNoControl(){
        return this._noControl;
    }

    public void setNombre(String no){
        this._nombre=no;
    }

    public String getNombre(){
        return this._nombre;
    }

    public void setCalif1(int c1){
        this._calif1=c1;
    }

    public int getCalif1(){
        return this._calif1;
    }

    public void setCalif2(int c2){
        this._calif2=c2;
    }

    public int getCalif2(){
        return this._calif2;
    }

    public void setCalif3(int c3){
        this._calif3=c3;
    }

    public int getCalif3(){
        return this._calif3;
    }

    //Métodos
    public String RetControl(){
        return "OP12344";
    }

    public String RetNombre(){
        return "Liliana";
    }

    public void RetCalif(){

    }



}