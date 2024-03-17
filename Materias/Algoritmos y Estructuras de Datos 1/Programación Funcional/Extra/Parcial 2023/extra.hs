
-- ╔════════════════════════════════════════════╗
-- |    Definir el tipo con los constructotes   |
-- ╚════════════════════════════════════════════╝
data Tipo = Constructor1 | Constructor2 | Constructor3
-- ╔══════════════════════════════════════════════════════════════╗
-- |    Definir el tipo con los constructotes con los parámetros  |
-- ╚══════════════════════════════════════════════════════════════╝
data Tipo = Constructor1 Param Param2 | Constructor2 Param | Constructor3 Param3 
-- ╔══════════════════════════════════════════════════════════════╗
-- |    Definir Sin que debe ser sinónimo de tipo x               |
-- ╚══════════════════════════════════════════════════════════════╝
type SinInt = Int
type SinChar = Char
type SinString = String 
-- ╔═════════════════════════════════════════════════════════════════════════╗
-- |    Función para comparar constructores de un tipo con Pattern Matching  |
-- ╚═════════════════════════════════════════════════════════════════════════╝
data Editorial = Altea | Panini
misma_editorial :: Editorial -> Editorial -> Bool
misma_editorial Altea Altea = True
misma_editorial Panini Panini = True
misma_editorial _ _ = False
-- ╔═════════════════════════════════════════════════════════════════════════╗
-- |    Función para comparar constructores de un tipo con Switch and Case   |
-- ╚═════════════════════════════════════════════════════════════════════════╝
data Editorial = Altea | Panini
misma_editorial :: Editorial -> Editorial -> Bool
misma_editorial x y =
    case x of
        Altea -> case y of
            Altea -> True
            _ -> False
    case x of
        Panini -> case y of
            Panini -> True
            _ -> False
-- ╔═════════════════════════════════════════════════════════════════╗
-- |    Función para contar libros de una categoria en específico    |
-- ╚═════════════════════════════════════════════════════════════════╝
data Categoria = Literatura | Infantiles | Autoayuda | Comics
data Editorial = Altea | Minotauro | Panini
type Titulo = String
type Precio = Int
type AnioAgenda = Int
data Marca = Monoblock | Paprika
data ArticulosLibreria = Libro Categoria Editorial Titulo Precio | Agenda Marca AnioAgenda Precio | Cuaderno Marca Precio

misma_categoria :: Categoria -> Categoria
misma_categoria Literatura Literatura = True
misma_categoria Infantiles Infantiles = True
misma_categoria Autoayuda Autoayuda = True
misma_categoria Comics Comics = True
misma_categoria _ _ = False

cuantosLibros :: [ArticulosLibreria] -> Categoria -> Int
cuantosLibros [] _ = 0
cuantosLibros ((Libro c e t p):xs) c1
    | misma_categoria c c1 = 1 + cuantosLibros xs c1
    | otherwise = cuantosLibros xs c1
cuantasViguetas (_:ys) c1 = cuantosLibros xs c1

-- ╔══════════════════════════════════════╗
-- |    Instanciar Eq de clase de tipo    |
-- ╚══════════════════════════════════════╝
misma_editorial :: Editorial -> Editorial -> Bool
misma_editorial Altea Altea = True
misma_editorial Minotauro Minotauro = True
misma_editorial Panini Panini = True
misma_editorial _ _ = False

instance Eq ArticulosLibreria where
    (Libro c1 e1 t1 p1) == (Libro c2 e2 t2 p2) = (misma_editorial e1 e2) && (t1 == t2)

-- ╔═══════════════════════════════╗
-- |    Función de Condiciones     |
-- ╚═══════════════════════════════╝
data Nivel = Uno | Dos | Tres deriving Show
data NotasDeIngles = EvolucionDelEstudiante String Nivel Int Int Int NotasDeIngles | NoHayMasEstudiantes

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