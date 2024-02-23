class Alumno:
    def __init__(self, *args):
        if len(args)==0:
            self._noControl=""
            self._nombre=""
            self._calif1=0
            self._calif2=0
            self._calif3=0
        elif len(args)==5:
            self._noControl=args[0]
            self._nombre=args[1]
            self._calif1=args[2]
            self._calif2=args[3]
            self._calif3=args[4]           
        pass


    def Leer(self):
        print ("Leer")

    def RetNoControl(self):
        print ("Num Control")
        
    
    def RetNombre(self):
        print ("Nombre")
        pass

    def RetCalif(self):
        print ("Calificacion")
        

    def setNoControl(self, nc):
        self._noControl=nc

    def getNoControl(self):
        return self._noControl

    def setNombre(self, no):
        self._nombre=no
    
    def getNombre(self):
        return self._nombre
   
    def setCalif1(self, c1):
        self._calif1=c1
    
    def getCalif1(self):
        return self._calif1

    def setCalif2(self, c2):
        self._calif2=c2
    
    def getCalif2(self):
        return self._calif2

    def setCalif3(self, c3):
        self._calif3=c3
    
    def getCalif3(self):
        return self._calif3

alumno1 = Alumno()
alumno2 = Alumno("01230523", "Lizbeth", 89, 88, 90)

print(alumno1.getNombre())
print(alumno1.getNoControl())
print(alumno1.getCalif1())
print(alumno1.getCalif2())
print(alumno1.getCalif3())
print("Alumno 2")
print(alumno2.getNombre())
print(alumno2.getNoControl())
print(alumno2.getCalif1())
print(alumno2.getCalif2())
print(alumno2.getCalif3())



