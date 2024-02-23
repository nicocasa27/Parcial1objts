class Publicacion:
    def __init__(self, *args):
        if len(args)==7:
            self.__pub=args[0]
            self.__autor=args[1]
            self.__titulo=args[2]
            self.__paginas=args[3]
            self.__cubierta=args[4]
            self.__categoria=args[5]
            self.__precio=args[6]
        elif len(args)==6 and args[0]==2:
            self.__pub=args[0]
            self.__autor=args[1]
            self.__titulo=args[2]
            self.__track=args[3]
            self.__categoria=args[4]
            self.__precio=args[5]
        elif len(args)==6 and args[0]==3:
            self.__pub=args[0]
            self.__titulo=args[1]
            self.__numero=args[2]
            self.__volumen=args[3]
            self.__categoria=args[4]
            self.__precio= args[5]
    pass

    @property
    def pub(self):
        return self.__pub
    
    @property
    def autor(self):
        return self.__autor
    
    @property
    def titulo(self):
        return self.__titulo
    
    @property
    def paginas(self):
        return self.__paginas
    
    @property
    def cubierta(self):
        return self.__cubierta
    
    @property
    def numero(self):
        return self.__numero
    
    @property
    def track(self):
        return self.__track
    
    @property
    def categoria(self):
        return self.__categoria
    
    @property
    def volumen(self):
        return self.__volumen
    
    @property
    def precio(self):
        return self.__precio
    
    ###########
    @pub.setter
    def pub(self, x):
        self.__pub = x
    
    @autor.setter
    def autor(self, x):
        self.__autor = x
    
    @titulo.setter
    def titulo(self, x):
        self.__titulo = x
    
    @paginas.setter
    def paginas(self, x):
        self.__paginas = x
    
    @cubierta.setter
    def cubierta(self, x):
        self.__cubierta = x
    
    @numero.setter
    def numero(self, x):
        self.__numero = x
    
    @track.setter
    def track(self, x):
        self.__track = x
    
    @categoria.setter
    def categoria(self, x):
        self.__categoria = x
    
    @volumen.setter
    def volumen(self, x):
        self.__volumen = x
    
    @precio.setter
    def precio(self, x):
        self.__precio = x

    def Print(self):
        if self.pub == 1:
            print("Tipo de publicación: Libro impreso" )
            print("Datos de autor: ", self.autor)
            print("Titulo: ", self.titulo)
            print("Número de páginas: ", self.paginas)
            print("Tipo cubierta: ", self.cubierta)
            print("Categoría: ", self.categoria)
            print("Precio:", self.precio)
        elif self.pub == 2:
            print("Tipo de publicación: Audio Libro")
            print("Datos de autor: ", self.autor)
            print("Titulo: ", self.titulo)
            print("Número de tracks: ", self.track)
            print("Categoría: ", self.categoria)
            print("Precio:", self.precio)
        elif self.pub == 3:
            print("Tipo de publicación: Revista")
            print("Titulo: ", self.titulo)
            print("Número de revista: ", self.numero)
            print("Categoría: ", self.categoria)
            print("Precio:", self.precio)

libroImpreso = Publicacion(1,"Francisco Javier Ceballos", "Java 2", 455,"Pasta Blanda", "Especializado",799.90)
audioLibro = Publicacion(2,"Leonardo Padura", "Vientos de cuaresma", 40, "Religioso", 249.90)
revista = Publicacion(3, "Forbes", 134, 15, "Business", 249.90)

libroImpreso.Print()
print()
audioLibro.Print()
print()
revista.Print()