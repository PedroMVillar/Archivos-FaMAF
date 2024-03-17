-- ╔════════════════════╗
-- |    Ejercicio 1     |
-- ╚════════════════════╝
{- Punto A
1) a sólo puede tomar valores que representan números (Int, Float, etc.)
    Falso: a tambien puede tomar valores de un tipo de dato predefinido que no sea necesariamente
    un numero, por ejemplo definiendo un tipo y derivandolo a la clase Eq y Ord o instanciandolo
    tambien podría ser una opcion para a
2) x sólo puede tomar valores numéricos. 
    Falseo: x toma valores de tipo a, y por consecuencia del punto 1, no necesariamente debe tomar
    valores numericos.
3) a es una variable de tipo:
    Verdadero.
4) x es una variable de tipo:
    La variable de tipo es a, x es una representación del argumento que va a tomar la función
5) Ninguna de las anteriores
-}
-- RTA: [ 3 ]

{- Punto B
1) TipoEnum no es un tipo enumerado.
    False: el TipoEnum es un tipo enumerado por la consigna
2) f Val1 Val2 retorna Val 1
    Falso: porque no esta derivada a la clase Show
3) f Val1 Val2 retorna Val 2
    Falso: por consecuencia del punto 2
4) No se puede instanciar a con el tipo TipoEnum
    Verdadero
5) Ninguna de las anteriores:
-}
-- RTA: [ 4 ]

{- Punto C
1) TipoEnum no es un tipo enumerado.
    False
2) f Val1 Val2 retorna Val1
    Verdadero: si es un tipo enumerado significa que pertencen a la clase Eq y Ord, por lo que tiparia
    la funcion tomando estos como argumentos, y si pertenece a la clase Ord, Val1 < Val2 => f Val1 Val2 = Val2
3) f Val1 Val2 retorna Val2
    Falso: por consecuencia del punto 2
4) No se puede instanciar a con el tipo TipoEnum
    Falso: si se puede ya que se derivó a las clases correspondientes.
5) Ninguna de las anteriores
-}
-- RTA: [ 2 ]

{- Punto D
1) No se puede invocar f en 5 puesto que falta un parámetro
    Verdadero: dara un error del tipo No instance of..
2) f 5 esuna funcion de tipo a -> a
    Falso: f 5 es una funcion de tipo Int -> (Int -> Int)
3) f 5 es una funcion de tipo Int -> a
    Falso
4) f 5 es una funcion de tipo Int -> Int
    Falso
5) Ninguna de las anteriores
-}
-- RTA: [ 1 ]
-- ╔════════════════════╗
-- |    Ejercicio 2     |
-- ╚════════════════════╝
data Categoria = Literatura | Infantiles | Autoayuda | Comics
data Editorial = Altea | Minotauro | Panini
type Titulo = String
type Precio = Int
type AnioAgenda = Int
data Marca = Monoblock | Paprika
data ArticulosLibreria = Libro Categoria Editorial Titulo Precio | Agenda Marca AnioAgenda Precio | Cuaderno Marca Precio

librosBaratos :: [ArticulosLibreria] -> Precio -> [ArticulosLibreria]
librosBaratos [] _ = []
librosBaratos ((Libro c e t pr):xs) p 
    | pr <= p = (Libro c e t pr) : librosBaratos xs p
    | otherwise = librosBaratos xs p
librosBaratos ((Agenda m a pr):xs) p = librosBaratos xs p
librosBaratos ((Cuaderno m pr):xs) p = librosBaratos xs p

misma_editorial :: ArticulosLibreria -> ArticulosLibreria -> Bool
misma_editorial (Libro _ e _ _ ) (Libro _ e2 _ _ ) =  
    case e of 
        Altea -> case e2 of
            Altea -> True
            _ -> False
        Minotauro -> case e2 of
            Minotauro -> True
            _ -> False
        Panini -> case e2 of
            Panini -> True
            _ -> False
misma_editorial _ _ = False
mismo_precio_libro :: ArticulosLibreria -> ArticulosLibreria -> Bool
mismo_precio_libro (Libro _ _ _ p ) (Libro _ _ _ p2 ) = p == p2
mismo_precio_libro _ _ = False
mismo_anio_agenda :: ArticulosLibreria -> ArticulosLibreria -> Bool
mismo_anio_agenda (Agenda _ a _) (Agenda _ a2 _) = a == a2
mismo_anio_agenda _ _ = False
mismo_precio_agenda :: ArticulosLibreria -> ArticulosLibreria -> Bool
mismo_precio_agenda (Agenda m a p) (Agenda m2 a2 p2) = p == p2
mismo_precio_agenda _ _ = False
mismo_precio_cuaderno :: ArticulosLibreria -> ArticulosLibreria -> Bool
mismo_precio_cuaderno (Cuaderno m p) (Cuaderno m2 p2) = p == p2
mismo_precio_cuaderno _ _ = False

instance Eq ArticulosLibreria where
    Libro c1 e1 t1 p1 == Libro c2 e2 t2 p2 = (misma_editorial (Libro c1 e1 t1 p1) (Libro c2 e2 t2 p2)) && (mismo_precio_libro (Libro c1 e1 t1 p1)(Libro c2 e2 t2 p2))
    Agenda m1 a1 p1 == Agenda m2 a2 p2 = (mismo_anio_agenda (Agenda m1 a1 p1) (Agenda m2 a2 p2)) && (mismo_precio_agenda (Agenda m2 a2 p2) (Agenda m2 a2 p2))
    Cuaderno m1 p1 == Cuaderno m2 p2 = mismo_precio_cuaderno (Cuaderno m1 p1) (Cuaderno m2 p2)
-- ╔════════════════════╗
-- |    Ejercicio 3     |
-- ╚════════════════════╝