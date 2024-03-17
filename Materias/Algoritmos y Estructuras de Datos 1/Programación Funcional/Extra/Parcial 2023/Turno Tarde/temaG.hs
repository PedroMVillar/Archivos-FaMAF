-- ╔════════════════════╗
-- |    Ejercicio 1     |
-- ╚════════════════════╝
{-
a) Opción 3: Es una función polimórfica Paramétrica.
b) Opción 1: La declaración de tipos está bien.
c) Opción 2: La función decrementar decrementa el valor dentro de un Just en 1 y devuelve Nothing si se le pasa Nothing.
d) Opción 4: El tipo NuevoTipo tiene dos constructores, uno sin parámetros y el otro constructor con un parámetro.
-}
-- ╔════════════════════╗
-- |    Ejercicio 2     |
-- ╚════════════════════╝
data Categoria = Literatura | Infantiles | Autoayuda | Comics deriving Show
 data Editorial = Altea | Minotauro | Panini deriving Show
 type Titulo = String 
 type Precio = Int 
 data Marca = Monoblock | Paprika deriving Show
 type AnioAgenda = Int 
 data ArticulosLibreria = Libro Categoria Editorial Titulo Precio | Agenda Marca AnioAgenda Precio | Cuaderno Marca Precio
 misma_categoria :: Categoria -> Categoria -> Bool
 misma_categoria c1 c2 = 
case c1 of
    Literatura -> case c2 of
        Literatura -> True
        _ -> False
        Infantiles -> case c2 of
            Infantiles -> True
        _ -> False
        Autoayuda -> case c2 of
            Autoayuda -> True
            _ -> False
            Comics -> case c2 of
                Comics -> True
                _ -> False
es_libro :: ArticulosLibreria -> Bool
es_libro (Libro _ _ _ _) = True
es_libro _ = False
categoria_libro :: ArticulosLibreria -> Categoria
categoria_libro (Libro c _ _ _) = c
cuantosLibros :: [ArticulosLibreria] -> Categoria -> Int
cuantosLibros [] c = 0
cuantosLibros (l:ls) c
  | (es_libro l) && (misma_categoria c cat) = 1 + (cuantosLibros ls c)
  | otherwise = (cuantosLibros ls c)
  where 
  cat = categoria_libro l
{-
Ejemplo con 3 articulos
*Main> cuantosLibros [Libro Literatura Altea "2" 40, Libro Literatura Altea "3" 40, Agenda Paprika 40 40] Literatura
2
-}
misma_editorial :: Editorial -> Editorial -> Bool
misma_editorial e1 e2 =
case e1 of
    Altea -> case e2 of
        Altea -> True
        _ -> False
        Minotauro -> case e2 of
            Minotauro -> True
            _ -> False
            Panini -> case e2 of
                Panini -> True
                _ -> False
misma_marca :: Marca -> Marca -> Bool
misma_marca m1 m2 =
case m1 of
    Monoblock -> case m2 of
        Monoblock -> True
        _ -> False
        Paprika -> case m2 of
            Paprika -> True
            _ -> False
instance Eq ArticulosLibreria where
    (Libro c1 e1 t1 p1) == (Libro c2 e2 t2 p2) = ((misma_editorial e1 e2) && (t1 == t2))
    (Agenda m1 a1 p1) == (Agenda m2 a2 p2) = ((a1 == a2) && (misma_marca m1 m2) && (p1 == p2)) 
    (Cuaderno m1 p1) == (Cuaderno m2 p2) = ((misma_marca m1 m2) && (p1 == p2))
{-
 Ejemplos con libro:
 *Main> (Libro Literatura Altea "Libro1" 40) == (Libro Literatura Altea "Libro1" 90)
 True
 *Main> (Libro Literatura Altea "Libro1" 40) == (Libro Literatura Altea "Libro21" 90)
 False
 Ejemplos con Agendas:
 *Main> (Agenda Monoblock 20 90) == (Agenda Paprika 20 90)
 False
 *Main> (Agenda Monoblock 20 90) == (Agenda Monoblock 20 90)
 True
 Ejemplos con Cuadernos:
 *Main> (Cuaderno Paprika 40) == (Cuaderno Monoblock 40)
 False
 *Main> (Cuaderno Monoblock 80) == (Cuaderno Monoblock 80)
 True
-} 
-- ╔════════════════════╗
-- |    Ejercicio 3     |
-- ╚════════════════════╝
data Nivel = Uno | Dos | Tres deriving Show
data NotasDeIngles = EvolucionDelEstudiante String Nivel Int Int Int NotasDeIngles | NoHayMasEstudiantes
mayor_a7 :: Int -> Bool
mayor_a7 c = c > 7
pasaDeNivel :: NotasDeIngles -> String -> Bool 
pasaDeNivel NoHayMasEstudiantes _ = False
pasaDeNivel (EvolucionDelEstudiante s Uno i1 i2 i3 no) n
    | (n==s) = ((i1 > 7) || (i2 > 7)) && (i3 >= 6)
    | otherwise = pasaDeNivel no n
pasaDeNivel (EvolucionDelEstudiante s Dos i1 i2 i3 no) n
    | (n==s) = ((i1 > 7) || (i2 > 7)) && (i3 >= 6)
    | otherwise = pasaDeNivel no n
pasaDeNivel (EvolucionDelEstudiante s Tres i1 i2 i3 no) n 
    | (n==s) = ((i1 >= 7) && (i2 >= 7)) && (i3 >= 8)
    | otherwise = pasaDeNivel no n
{-
 *Main> pasaDeNivel (EvolucionDelEstudiante "Pablo" Uno 2 3 4 (EvolucionDelEstudiante "Juan" Dos 8 7 8 (EvolucionDelEstudiante "Pepe" Uno 7 8 7 NoHayMasEstudiantes))) "Juan"
 True
-}
devolverNivel :: NotasDeIngles -> String -> Maybe Nivel
devolverNivel NoHayMasEstudiantes _ = Nothing
devolverNivel (EvolucionDelEstudiante st n i1 i2 i3 no) s 
    | (st == s) = Just n
    | otherwise = devolverNivel no s
{-
 *Main> devolverNivel (EvolucionDelEstudiante "Juan" Uno 1 2 3 NoHayMasEstudiantes) "Juan"
 Just Uno
-}