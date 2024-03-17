-- ◇◆◇◆◇◆◇◆◇◆◇◆◇◆◇ Ejercicio 1 ◇◆◇◆◇◆◇◆◇◆◇◆◇◆◇ 
-- a) Implementá el tipo Carrera como está definido arriba.
data Carrera = Matemática | Física | Computación | Astronomía

-- b) Definí la siguiente función, usando pattern matching: titulo :: Carrera -> String
-- que devuelve el nombre completo de la carrera en forma de string. Por ejemplo, para el
-- constructor Matematica, debe devolver ”Licenciatura en Matemática”.
funcion :: Carrera -> String
funcion Matemática = "Licenciatura en Matemática Aplicada"
funcion Física = "Licenciatura en Física"
funcion Computación = "Licenciatura en Ciencias de la Computación"
funcion Astronomía = "Licenciatura en Astronomía"

-- c) Para escribir música se utiliza la denominada notación musical, la cual consta de
-- notas (do, re, mi, ...). Adem´as, estas notas pueden presentar alg´un modificador ]
-- (sostenido) o [ (bemol), por ejemplo do], si[, etc. Por ahora nos vamos a olvidar de
-- estos modificadores (llamados alteraciones) y vamos a representar las notas básicas.
-- Definir el tipo NotaBasica con constructores Do, Re, Mi, Fa, Sol, La y Si
data NotaBasica = Do | Re | Mi | Fa | Sol | La | Si deriving (Show, Eq, Ord, Bounded)

-- d) El sistema de notación musical anglosajón, tambi´en conocido como notación o cifrado
-- americano, relaciona las notas básicas con letras de la A a la G. Este sistema se usa por
-- ejemplo para las tablaturas de guitarra. Programar usando pattern matching la función:
-- que relaciona las notas Do, Re, Mi, Fa, Sol, La y Si con los caracteres ’C’ , ’D’, ’E’,
-- ’F’, ’G’, ’A’ y ’B’ respectivamente.
cifradoAmericano :: NotaBasica -> Char
cifradoAmericano Do = 'C'
cifradoAmericano Re = 'D'
cifradoAmericano Mi = 'E'
cifradoAmericano Fa = 'F'
cifradoAmericano Sol = 'G'
cifradoAmericano La = 'A'
cifradoAmericano Si = 'B'


-- ◇◆◇◆◇◆◇◆◇◆◇◆◇◆◇ Ejercicio 2 ◇◆◇◆◇◆◇◆◇◆◇◆◇◆◇ 
-- a) Completar la definición del tipo NotaBasica para que las expresiones
-- Main> Do <= Re
-- Main> Fa `min` Sol
--sean válidas y no generen error. Ayuda: usar deriving con múltiples clases.
-- data NotaBasica = Do | Re | Mi | Fa | Sol | La | Si deriving (Show, Ord)
-----------------------------------------------------------------------------------------------------

-- ◇◆◇◆◇◆◇◆◇◆◇◆◇◆◇ Ejercicio 3 ◇◆◇◆◇◆◇◆◇◆◇◆◇◆◇ 
-- a) Definir usando polimorfismo ad hoc la función minimoElemento que calcula (de manera
-- recursiva) cuál es el menor valor de una lista de tipo [a]. Asegurarse que sólo esté
-- definida para listas no vacías.
minimoElemento :: (Ord a) => [a] -> a
minimoElemento [x] = x
minimoElemento (x:y:xs) | x > y = minimoElemento (y:xs)
                        | x < y = minimoElemento (x:xs)
--Ejemplos de ejecución: 
{-
ghci> minimoElemento [Do, Re, Fa, Si]
Do
ghci> minimoElemento [Mi, Fa, La, Si]
Mi
-}

-- b) Definir la función minimoElemento’ de manera tal que el caso base de la recursión
-- sea el de la lista vacía. Para ello revisar la clase Bounded.
minimoElemento' :: (Ord a, Bounded a) => [a] -> a
minimoElemento' []       = maxBound
minimoElemento' [x]      = x
minimoElemento' [x, y]   = min x y
minimoElemento' (x:y:xs) | x > y     = minimoElemento' (y:xs)
                          | otherwise = minimoElemento' (x:xs)
--Ejemplos de ejecución: 
{-
ghci> minimoElemento' [Fa, La, Sol, Re, Fa]
Re
ghci> minimoElemento' [Mi, Fa, La, Si]
Mi
-}

-- c) Usar la funci´on minimoElemento para determinar la nota más grave de la melodía:
-- [Fa, La, Sol, Re, Fa]
-- ghci> minimoElemento' [Fa, La, Sol, Re, Fa]
-- Re
-----------------------------------------------------------------------------------------------------

-- ◇◆◇◆◇◆◇◆◇◆◇◆◇◆◇ Ejercicio 4 ◇◆◇◆◇◆◇◆◇◆◇◆◇◆◇ 
--4.a) Implementá el tipo Deportista y todos sus tipos accesorios (NumCamiseta, Altura,
--Zona, etc).
type Altura = Int
type NumCamiseta = Int
data Zona = Arco | Defensa | Mediocampo | Delante deriving Show
data TipoReves = DosManos | UnaMano deriving Show
data Modalidad = Carretera | Pista | Monte | BMX deriving Show
data PiernaHabil = Izquierda | Derecha deriving Show
type ManoHabil = PiernaHabil
data Deportista = Ajedrecista
                  | Ciclista Modalidad
                  | Velocista Altura
                  | Tenista TipoReves ManoHabil Altura
                  | Futbolista Zona NumCamiseta PiernaHabil Altura
                  deriving Show

-- b) ¿Cuál es el tipo del constructor Ciclista?
-- Ciclista tiene el tipo de constructor Ciclista :: Modalidad -> Deportista

-- c) Programá la función contar_velocistas :: [Deportista] -> Int que dada una
-- lista de deportistas xs, devuelve la cantidad de velocistas que hay dentro de xs.
-- Programar contar_velocistas sin usar igualdad, utilizando pattern matching.
contar_velocistas :: [Deportista] -> Int
contar_velocistas [] = 0
contar_velocistas ((Ajedrecista):xs) = contar_velocistas xs
contar_velocistas ((Ciclista _):xs) = contar_velocistas xs
contar_velocistas ((Tenista _ _ _):xs) = contar_velocistas xs
contar_velocistas ((Futbolista _ _ _ _):xs) = contar_velocistas xs
contar_velocistas ((Velocista _):xs) = 1 + contar_velocistas xs
--Ejemplos de ejecución: 
{-
ghci> contar_velocistas [Velocista 173, Ajedrecista, Futbolista Arco 3 Derecha 180]
1
ghci> contar_velocistas [Velocista 173, Ciclista Pista, Velocista 168, Velocista 98, Ajedrecista]
3
-}

-- d) Programá la función contar_futbolistas :: [Deportista] -> Zona -> Int que
-- dada una lista de deportistas xs, y una zona z, devuelve la cantidad de futbolistas
-- incluidos en xs que juegan en la zona z. No usar igualdad, sólo pattern matching.


-- Hago una fucnión auxiliar que se fija si está el futbolista en la zona
futbo_encontrado :: Zona -> Deportista -> Bool
futbo_encontrado Arco (Futbolista Arco _ _ _) = True
futbo_encontrado Defensa (Futbolista Defensa _ _ _) = True
futbo_encontrado Mediocampo (Futbolista Mediocampo _ _ _) = True
futbo_encontrado Delante (Futbolista Delante _ _ _) = True
futbo_encontrado _ _ = False

contar_futbolistas :: [Deportista] -> Zona -> Int
contar_futbolistas [] _ = 0
contar_futbolistas (x:xs) zona 
                            | futbo_encontrado zona x = 1 + contar_futbolistas xs zona
                            | otherwise = contar_futbolistas xs zona
--Ejemplos de ejecución: 
{-
ghci> contar_futbolistas [Futbolista Defensa 8 Derecha 180, Ajedrecista, Tenista DosManos Izquierda 170] Defensa
1
ghci> contar_futbolistas [Futbolista Defensa 8 Derecha 180, Ajedrecista, Tenista DosManos Izquierda 170] Arco
0
-}

--4.e) ¿La función anterior usa filter? Si no es así, reprogramala para usarla.
contar_futbolistas' :: [Deportista] -> Zona -> Int
contar_futbolistas' xs zona = length (filter(futbo_encontrado zona) xs)
--Ejemplos de ejecución: 
{-
ghci> contar_futbolistas' [Futbolista Defensa 8 Derecha 180, Ajedrecista, Tenista DosManos Izquierda 170] Arco
0
ghci> contar_futbolistas' [Futbolista Defensa 8 Derecha 180, Ajedrecista, Tenista DosManos Izquierda 170] Defensa
1
-}
-----------------------------------------------------------------------------------------------------

-- ◇◆◇◆◇◆◇◆◇◆◇◆◇◆◇ Ejercicio 5 ◇◆◇◆◇◆◇◆◇◆◇◆◇◆◇ 
-- a) Implementá la función sonidoNatural como está definida arriba.
sonidoNatural :: NotaBasica -> Int
sonidoNatural Do = 0
sonidoNatural Re = 2
sonidoNatural Mi = 4
sonidoNatural Fa = 5
sonidoNatural Sol = 7
sonidoNatural La = 9
sonidoNatural Si = 11

-- b) Definir el tipo enumerado Alteracion que consta de los constructores Bemol, Natural
-- y Sostenido.
data Alteracion = Bemol | Natural | Sostenido

-- c) Definir el tipo algebraico NotaMusical que debe tener un solo un constructor que llama-
-- remos Nota el cual toma dos par´ametros. El primer parámetro es de tipo NotaBasica
-- y el segundo de tipo Alteracion. De esta manera cuando se quiera representar una
-- nota alterada se puede usar como segundo parámetro del constructor un Bemol o
-- Sostenido y si se quiere representar una nota sin alteraciones se usa Natural como
-- segundo parámetro

data NotaMusical = Nota NotaBasica Alteracion

-- d) Definí la función sonidoCromatico :: NotaMusical -> Int que devuelve el sonido
-- de una nota, incrementando en uno su valor si tiene la alteración Sostenido, decre-
-- mentando en uno si tiene la alteración Bemol y dejando su valor intacto si la alteración
-- es Natural.
sonidoCromatico :: NotaMusical -> Int
sonidoCromatico (Nota a Sostenido) = (sonidoNatural a) + 1
sonidoCromatico (Nota a Bemol) = (sonidoNatural a) - 1
sonidoCromatico (Nota a Natural) = (sonidoNatural a)
--Ejemplos de ejecución: 
{-
ghci> sonidoCromatico (Nota Do Sostenido)
1
ghci> sonidoCromatico (Nota La Bemol)
8
-}

-- e) Incluí el tipo NotaMusical a la clase Eq de manera tal que dos notas que tengan el
-- mismo valor de sonidoCromatico se consideren iguales.
instance Eq NotaMusical where
        a == b = sonidoCromatico a == sonidoCromatico b

-- f) Incluí el tipo NotaMusical a la clase Ord definiendo el operador <=. Se debe definir
-- que una nota es menor o igual a otra si y s´olo si el valor de sonidoCromatico para la
-- primera es menor o igual al valor de sonidoCromatico para la segunda.
instance (Ord NotaMusical) where
        a <= b = sonidoCromatico a <= sonidoCromatico b
-----------------------------------------------------------------------------------------------------

-- ◇◆◇◆◇◆◇◆◇◆◇◆◇◆◇ Ejercicio 6 ◇◆◇◆◇◆◇◆◇◆◇◆◇◆◇ 
-- a) Definir la función primerElemento que devuelve el primer elemento de una lista no
-- vacía, o Nothing si la lista es vacía.
primerElemento :: [a] -> Maybe a
primerElemento [] = Nothing
primerElemento (x:_) = Just x
--Ejemplos de ejecución: 
{-
ghci> primerElemento [Do, Re, Mi, Fa]
Just Do
ghci> primerElemento "hola"
Just 'h'
-}
-----------------------------------------------------------------------------------------------------

-- ◇◆◇◆◇◆◇◆◇◆◇◆◇◆◇ Ejercicio 7 ◇◆◇◆◇◆◇◆◇◆◇◆◇◆◇ 
-- a.1) Definir la funcion atender :: Cola -> Maybe Cola, que elimina de la cola a la persona que está
-- en la primer posición de una cola, por haber sido atendida. Si la cola está vacía,
-- devuelve Nothing.
data Cola = VaciaC | Encolada Deportista Cola deriving (Show)
atender :: Cola -> Maybe Cola
atender VaciaC = Nothing
atender (Encolada _ b) = Just b
--Ejemplos de ejecución: 
{-
ghci> atender (Encolada Ajedrecista (Encolada Ajedrecista VaciaC))
Just (Encolada Ajedrecista VaciaC)
ghci> atender (Encolada Ajedrecista VaciaC)
Just VaciaC
-}

-- a.2) definir la funcion encolar :: Deportista -> Cola -> Cola, que agrega una persona a una cola
-- de deportistas, en la ultima posición
encolar :: Deportista -> Cola -> Cola
encolar n VaciaC = Encolada n VaciaC
encolar m (Encolada h c) = Encolada h (encolar m c)
--Ejemplos de ejecución: 
{-
ghci> encolar (Velocista 189) (Encolada Ajedrecista (Encolada Ajedrecista VaciaC))
Encolada Ajedrecista (Encolada Ajedrecista (Encolada (Velocista 189) VaciaC))
-}

-- a.3) Definir la funcion busca :: Cola -> Zona -> Maybe Deportista, que devuelve el/la primera
-- futbolista dentro de la cola que juega en la zona que se corresponde con el segundo
-- parámetro. Si no hay futbolistas jugando en esa zona devuelve Nothing.
busca :: Cola -> Zona -> Maybe Deportista
busca VaciaC _ = Nothing
busca (Encolada (Futbolista h i j k) l) zona
        | futbo_encontrado zona n = Just n
        | otherwise = busca l zona
        where
        n = Futbolista h i j k
busca (Encolada _ l) zona = busca l zona
--Ejemplos de ejecución: 
{-
ghci> busca (Encolada Ajedrecista (Encolada (Futbolista Arco 189 Izquierda 4) VaciaC)) Arco
Just (Futbolista Arco 189 Izquierda 4)
-}

--7.b) ¿A qué otro tipo se parece Cola?
-- Hay semejanza entre el tipo Lista de Haskell donde VaciaC puede ser [] y
-- encolada representaria la definición recursiva de la lista a:[]
-----------------------------------------------------------------------------------------------------

-- ◇◆◇◆◇◆◇◆◇◆◇◆◇◆◇ Ejercicio 8 ◇◆◇◆◇◆◇◆◇◆◇◆◇◆◇ 
data ListaAsoc a b = Vacia | Nodo a b ( ListaAsoc a b )
  deriving (Show)

-- a) ¿Como se debe instanciar el tipo ListaAsoc para representar la información almacenada
-- en una guía telefónica?
data Telefonos = ListaAsoc Int String

-- b.1) la_long :: ListaAsoc a b -> Int que devuelve la cantidad de datos en una
-- lista
la_long :: ListaAsoc a b -> Int
la_long Vacia = 0
la_long (Nodo _ _ xs) = 1 + la_long xs
--Ejemplos de ejecución: 
{-
ghci> la_long (Nodo 1 2 (Nodo 8 3 (Vacia)))
2
-}

-- b.2) 
la_concat :: ListaAsoc a b -> ListaAsoc a b -> ListaAsoc a b
la_concat Vacia xs = xs
la_concat ys Vacia = ys
la_concat (Nodo a b xs) ys = Nodo a b (la_concat xs ys)
--Ejemplos de ejecución: 
{-
ghci> la_concat (Nodo 1 2 (Nodo 8 3 (Vacia))) (Nodo 2 3 (Nodo 3 2 (Vacia)))
Nodo 1 2 (Nodo 8 3 (Nodo 2 3 (Nodo 3 2 Vacia)))
-}

-- b.3) la_agregar :: Eq a => ListaAsoc a b -> a -> b -> ListaAsoc a b, que
-- agrega un nodo a la lista de asociaciones si la clave no está en la lista, o actualiza
-- el valor si la clave ya se encontraba.
la_agregar :: (Eq a) => ListaAsoc a b -> a -> b -> ListaAsoc a b
la_agregar Vacia a b = Nodo a b Vacia
la_agregar (Nodo a b xs) n m 
    | a == n    = Nodo a m xs
    | otherwise = Nodo a b (la_agregar xs n m)
--Ejemplos de ejecución: 
{-
ghci> la_agregar (Nodo 1 2 (Nodo 8 3 (Vacia))) 3 4
Nodo 1 2 (Nodo 8 3 (Nodo 3 4 Vacia))
-}

-- b.4) la_pares :: ListaAsoc a b -> [(a, b)] que transforma una lista de asocia-
-- ciones en una lista de pares clave-dato.
la_pares :: ListaAsoc a b -> [(a, b)]
la_pares Vacia = []
la_pares (Nodo a b xs) = (a, b) : la_pares xs
--Ejemplos de ejecución: 
{-
ghci> la_pares (Nodo 1 2 (Nodo 8 3 (Vacia)))
[(1,2),(8,3)]
-}

-- b.5) la_busca :: Eq a => ListaAsoc a b -> a -> Maybe b que dada una lista
-- y una clave devuelve el dato asociado, si es que existe. En caso contrario devuelve
-- Nothing.
la_busca :: (Eq a) => ListaAsoc a b -> a -> Maybe b
la_busca Vacia _ = Nothing
la_busca (Nodo a b xs) n
    | a == n    = Just b
    | otherwise = la_busca xs n
--Ejemplos de ejecución: 
{-
ghci> la_busca (Nodo 1 2 (Nodo 8 3 (Vacia))) 8
Just 3
ghci> la_busca (Nodo 1 2 (Nodo 8 3 (Vacia))) 1
Just 2
-}

-- b.6) la_borrar :: Eq a => a -> ListaAsoc a b -> ListaAsoc a b que dada
-- una clave a elimina la entrada en la lista.
la_borra :: (Eq a) => a -> ListaAsoc a b -> ListaAsoc a b
la_borra _ Vacia = Vacia
la_borra n (Nodo a b xs)
    | n == a    = xs
    | otherwise = Nodo a b (la_borra n xs)
--Ejemplos de ejecución: 
{-
ghci> la_borra 9 (Nodo 1 2 (Nodo 8 3 (Vacia))) 
Nodo 1 2 (Nodo 8 3 Vacia)
-}
-----------------------------------------------------------------------------------------------------
                         
-- ◇◆◇◆◇◆◇◆◇◆◇◆◇◆◇ Ejercicio 9 ◇◆◇◆◇◆◇◆◇◆◇◆◇◆◇ 
-- Otro tipo de datos muy útil y que se puede usar para representar muchas
-- situaciones es el árbol; por ejemplo, el análisis sintáctico de una oración, una estructura
-- jerárquica como un árbol genealógico o la taxonomía de Linneo.
data Arbol a = Hoja | Rama ( Arbol a ) a ( Arbol a )
type Prefijos = Arbol String
--can , cana , canario , canas , cant , cantar , canto :: Prefijos
{--can = Rama cana ”can” cant
cana = Rama canario ”a” canas
canario = Rama Hoja ”rio” Hoja
canas = Rama Hoja ”s” Hoja
cant = Rama cantar ”t” canto
cantar = Rama Hoja ”ar” Hoja
canto = Rama Hoja ”o” Hoja
--}

-- a) a_long :: Arbol a -> Int que dado un árbol devuelve la cantidad de datos almacenados.
a_long :: Arbol a -> Int
a_long Hoja = 0
a_long (Rama aIzq _ aDer) = 1 + a_long aIzq + a_long aDer
--Ejemplos de ejecución: 
{-
ghci> a_long (Rama (Rama (Hoja) 9 (Hoja)) 1 Hoja)
2
ghci> a_long (Rama (Rama (Hoja) 9 (Hoja)) 1 (Rama (Rama (Rama Hoja 2 Hoja) 7 Hoja) 8 (Rama Hoja 2 Hoja)))
6
-}

-- b) a_hojas :: Arbol a -> Int que dado un árbol devuelve la cantidad de hojas.
a_vacio :: Arbol a -> Bool
a_vacio Hoja = True
a_vacio (Rama _ _ _) = False

a_hojas :: Arbol a -> Int
a_hojas Hoja = 0
a_hojas (Rama aIzq _ aDer) =
  if a_vacio aIzq && a_vacio aDer
    then 1
      else a_hojas aIzq + a_hojas aDer
--Ejemplos de ejecución: 
{-
ghci> a_hojas (Rama (Rama (Hoja) 9 (Hoja)) 1 Hoja)
1
ghci> a_hojas (Rama (Rama (Hoja) 9 (Hoja)) 1 (Rama (Rama (Rama Hoja 2 Hoja) 7 Hoja) 8 (Rama Hoja 2 Hoja)))
3
-}

-- c) a_inc :: Num a => Arbol a -> Arbol a que dado un árbol que contiene números,
-- los incrementa en uno.
a_inc :: (Num a) => Arbol a -> Arbol a
a_inc Hoja = Hoja
a_inc (Rama aIzq a aDer) = Rama (a_inc aIzq) (a + 1) (a_inc aDer)
--Ejemplos de ejecución: 
{-
ghci> a_inc (Rama (Rama (Hoja) 9 (Hoja)) 1 (Rama (Rama (Rama Hoja 2 Hoja) 7 Hoja) 8 (Rama Hoja 2 Hoja)))
Rama (Rama Hoja 10 Hoja) 2 (Rama (Rama (Rama Hoja 3 Hoja) 8 Hoja) 9 (Rama Hoja 3 Hoja))
ghci> a_inc (Rama (Rama (Hoja) 9 (Hoja)) 1 Hoja)
Rama (Rama Hoja 10 Hoja) 2 Hoja
-}

-- d) a_map :: (a -> b) -> Arbol a -> Arbol b que dada una funci´on y un ´arbol,
-- devuelve el árbol con la misma estructura, que resulta de aplicar la función a cada uno
-- de los elementos del árbol. Revisá la definición de la función anterior y reprogramala
-- usando a_map
a_map :: (a -> b) -> Arbol a -> Arbol b
a_map _ Hoja = Hoja
a_map f (Rama aIzq a aDer) = Rama (a_map f aIzq) (f a) (a_map f aDer)
--Ejemplos de ejecución: 
{-
ghci> a_map (*7) (Rama (Rama (Hoja) 9 (Hoja)) 1 Hoja)
Rama (Rama Hoja 63 Hoja) 7 Hoja
ghci> a_map (/5) (Rama (Rama (Hoja) 9 (Hoja)) 1 Hoja)
Rama (Rama Hoja 1.8 Hoja) 0.2 Hoja
-}
-----------------------------------------------------------------------------------------------------

-- ◇◆◇◆◇◆◇◆◇◆◇◆◇◆◇ Ejercicio 10 ◇◆◇◆◇◆◇◆◇◆◇◆◇◆◇
-- Un tipo también muy útil, es el ´arbol binario de b´usqueda (ABB). Un ABB es
-- una estructura de datos donde cada nodo tiene un valor y cumple con la propiedad de que
-- los valores en el subárbol izquierdo son menores que el valor del nodo, y los valores en el
-- subárbol derecho son mayores.

-- a) : Definir el tipo recursivo ABB utilizando los constructores:
-- RamaABB :: ABB a -> a -> ABB a
-- VacioABB :: ABB a
data ABB a = VacioABB | RamaABB (ABB a) a (ABB a)
  deriving (Show)

-- b) Definir una función insertarABB que tome un valor y un árbol binario como entrada y
-- devuelva un nuevo árbol que contenga el valor insertado en el árbol original. La función
-- tiene que tener el siguiente tipado:
insertarABB :: Ord a => a -> ABB a -> ABB a
insertarABB x VacioABB = RamaABB VacioABB x VacioABB
insertarABB x (RamaABB ri n rd)
  | x <= n = RamaABB (insertarABB x ri) n rd
  | otherwise = RamaABB ri n (insertarABB x rd)
--Ejemplos de ejecución: 
{-
ghci> insertarABB 4 (RamaABB VacioABB 7 VacioABB)
RamaABB (RamaABB VacioABB 4 VacioABB) 7 VacioABB
ghci> insertarABB 2 (RamaABB (RamaABB VacioABB 4 (RamaABB (RamaABB VacioABB 1 VacioABB) 3 VacioABB)) 7 VacioABB)
RamaABB (RamaABB (RamaABB VacioABB 2 VacioABB) 4 (RamaABB (RamaABB VacioABB 1 VacioABB) 3 VacioABB)) 7 VacioABB
-}

-- c) Define una función llamada buscarEnArbol que tome un valor y un árbol binario como
-- entrada y devuelva True si el valor está presente en el árbol y False en caso contrario.
-- La función tiene que tener el siguiente tipado:
-- buscarABB :: Eq a => a -> ABB a -> Bool
buscarABB :: Eq a => a -> ABB a -> Bool
buscarABB _ VacioABB = False
buscarABB x (RamaABB ri n rd)
  | x == n = True
  | otherwise = buscarABB x ri || buscarABB x rd
--Ejemplos de ejecución: 
{-
ghci> buscarEnArbol 2 (RamaABB (RamaABB VacioABB 4 (RamaABB (RamaABB VacioABB 1 VacioABB) 3 VacioABB)) 7 VacioABB)
False
ghci> buscarEnArbol 7 (RamaABB (RamaABB VacioABB 4 (RamaABB (RamaABB VacioABB 1 VacioABB) 3 VacioABB)) 7 VacioABB)
True
-}

-- d) Definir la función verificarABB que devuelve True si el árbol cumple con la propiedad
-- fundamental o False en caso contrario
mayorQueTodos :: Ord a => a -> ABB a -> Bool
mayorQueTodos _ VacioABB = True
mayorQueTodos x (RamaABB ri n rd)
  | x > n = mayorQueTodos x ri && mayorQueTodos x rd
  | otherwise = False

menorQueTodos :: Ord a => a -> ABB a -> Bool
menorQueTodos _ VacioABB = True
menorQueTodos x (RamaABB ri n rd)
  | x < n = menorQueTodos x ri && menorQueTodos x rd
  | otherwise = False

verificarABB :: Ord a => ABB a -> Bool
verificarABB VacioABB = True
verificarABB (RamaABB ri n rd) = mayorQueTodos n ri && menorQueTodos n rd
--Ejemplos de ejecución: 
{-
ghci> p1 = RamaABB (RamaABB VacioABB 10 VacioABB) 2 (RamaABB VacioABB 11 VacioABB)
ghci> verificarABB p1
False
-}
-----------------------------------------------------------------------------------------------------