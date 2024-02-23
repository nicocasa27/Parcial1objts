# Una compañía editorial produce tanto libros impresos como revistas y audio-libros. Para su software de control de inventario, el equipo de desarrollo ha dividido el trabajo y a te han pedido implementar las siguientes clases:

# - **Publicación**: que almacene el **tipo de publicación, datos de autor, título, número de páginas, tipo de cubierta, número de tracks, categoría, número de revista**, **volumen** y **precio** de una publicación.

# Los *****tipos de publicación* ****son los siguientes: Libro impreso, Audio Libro y Revista.

# Las *categorías* pueden ser: literatura, consulta/referencia, artísticos, divulgación, técnicos/especializados, religiosos, autoayuda, infantiles, etc.

# Se deben definir 3 **constructores** con parámetros (validando todo lo que corresponda). *No se pueden crear objetos sin datos.*

# Además, se debe contar con los métodos **setters y getter** para todos los atributos. En el método setter del atributo *tipo de publicación*, deberá validar lo siguiente:

# - Si el tipo de publicación es un *libro impreso*, deberá asignar un valor al **tipo de cubierta** (pasta dura, pasta blanda).
# - Si el tipo de publicación es un *audio libro*, asignar un valor al **número de tracks.**
# - Si el tipo de publicación es una *revista*, asignar valores al **número de revista** y **volumen**.

# También debes añadir un método llamado Print, el cuál muestre en pantalla los datos de un objeto de la clase,  de la siguiente forma:

# Salida 1

# **Tipo de publicación:** Libro impreso****

# **Datos de autor:** Francisco Javier Ceballos

# **Título:** Java 2****

# **Número de páginas:** 455****

# **Tipo de cubierta:** Pasta blanda

# **Categoría:** Especializado

# **Precio:** 799.90

# Salida 2

# **Tipo de publicación:** Audio libro****

# **Datos de autor:** Leonardo Padura

# **Título:** Vientos de cuaresma****

# **Número de tracks:** 40

# **Categoría:** Religioso

# **Precio:** 249.90

# Salida 3

# **Tipo de publicación:** Revista****

# **Título:** Forbes

# **Número de revista:** 134

# **Volumen:** 15

# **Categoría:** Business

# **Precio:** 249.90

# Cuando termines de implementar tus clases, realiza un programa **Tester** para verificar que todo funciona de acuerdo a lo planeado. Debe crearse al menos un objeto para cada constructor.










# Definición de la clase Publicacion
class Publicacion:
    # Constructor de la clase con valores predeterminados para permitir la creación de objetos variados
    def __init__(self, pu=0, au="", ti="", pa=0, cu="", tr=0, nu=0, vo=0, ca="", pr=0.0):
        # Atributos privados de la clase
        self.__pub = pu  # Tipo de publicación (1: Libro impreso, 2: Audio libro, 3: Revista)
        self.__autor = au  # Nombre del autor
        self.__titulo = ti  # Título de la publicación
        self.__paginas = pa  # Número de páginas (para libros y revistas)
        self.__cubierta = cu  # Tipo de cubierta (para libros impresos)
        self.__track = tr  # Número de tracks (para audiolibros)
        self.__numero = nu  # Número de revista
        self.__volumen = vo  # Volumen de la revista
        self.__categoria = ca  # Categoría de la publicación
        self.__precio = pr  # Precio de la publicación

    # Propiedades (getters) para acceder a los atributos de la clase
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

    # Setters para modificar los atributos de la clase
    @pub.setter
    def pub(self, x):
        self.__pub = x

    # Los siguientes setters permiten modificar los atributos después de la creación del objeto
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

    # Método para imprimir los detalles de la publicación
    def Print(self):
        # Imprime los detalles basándose en el tipo de publicación
        if self.pub == 1:  # Libro impreso
            print("Tipo de publicación: Libro impreso")
            print("Datos de autor: ", self.autor)
            print("Titulo: ", self.titulo)
            print("Número de páginas: ", self.paginas)
            print("Tipo cubierta: ", self.cubierta)
            print("Categoría: ", self.categoria)
            print("Precio:", self.precio)
        elif self.pub == 2:  # Audio libro
            print("Tipo de publicación: Audio Libro")
            print("Datos de autor: ", self.autor)
            print("Titulo: ", self.titulo)
            print("Número de tracks: ", self.track)
            print("Categoría: ", self.categoria)
            print("Precio:", self.precio)
        elif self.pub == 3:  # Revista
            print("Tipo de publicación: Revista")
            print("Titulo: ", self.titulo)
            print("Número de revista: ", self.numero)
            print("Volumen: ", self.volumen)
            print("Categoría: ", self.categoria)
            print("Precio:", self.precio)

# Creación de objetos utilizando diferentes constructores para demostrar la funcionalidad
libroImpreso = Publicacion(1, "Francisco Javier Ceballos", "Java 2", 455, "Pasta Blanda", 0, 0, 0, "Especializado", 799.90)
audioLibro = Publicacion(2, "Leonardo Padura", "Vientos de cuaresma", 0, "", 40, 0, 0, "Religioso", 249.90)
revista = Publicacion(3, "", "Forbes", 0, "", 0, 134, 15, "Business", 249.90)

# Uso del método Print para mostrar los detalles de cada objeto creado
libroImpreso.Print()
print()
audioLibro.Print()
print()
revista.Print()
