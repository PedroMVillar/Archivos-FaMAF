-- ╔════════════════════╗
-- |    Ejercicio 1     |
-- ╚════════════════════╝
data Numeracion = Cero | Uno | Dos | Tres | Cuatro
    deriving Show
misma_numeracion :: Numeracion -> Numeracion -> Bool
misma_numeracion n1 n2 =
    case n1 of
        Cero -> case n2 of
            Cero -> True
            _ -> False
        Uno -> case n2 of
            Uno -> True 
            _ -> False
        Dos -> case n2 of
            Dos -> True
            _ -> False
        Tres -> case n2 of
            Tres -> True
            _ -> False
        Cuatro -> case n2 of
            Cuatro -> True
            _ -> False

data Domino = Ficha Numeracion Numeracion
encajar :: Domino -> Domino -> Maybe Numeracion
encajar (Ficha _ ab1) (Ficha ar2 ab2) = 
    if misma_numeracion ab1 ar2 
        then Just ab2
        else Nothing
-- ╔════════════════════╗
-- |    Ejercicio 2     |
-- ╚════════════════════╝
compatibles :: [Domino] -> Numeracion -> [Numeracion]
compatibles [] _ = [] 
compatibles ((Ficha n1 n2):ds) n
    | misma_numeracion n1 n = n2 : compatibles ds n
    | otherwise = compatibles ds n
-- ╔════════════════════╗
-- |    Ejercicio 3     |
-- ╚════════════════════╝
type Evento = String
data Categoria = Cumple | Reunion | Otro 
data Calendario = Agendar Evento Categoria Calendario | SinEventos
es_reunion :: Categoria -> Bool
es_reunion Reunion = True
listar_reuniones :: Calendario -> [Evento]
listar_reuniones SinEventos = []
listar_reuniones (Agendar e c ca) =
    if es_reunion c
        then e : listar_reuniones ca
        else listar_reuniones ca
-- ╔════════════════════╗
-- |    Ejercicio 4     |
-- ╚════════════════════╝
data Arbol a = Hoja | Rama (Arbol a) a (Arbol a)
a_min :: Arbol a -> a
a_min (Rama Hoja x _) = x
a_min (Rama izquierda _ _) = a_min izquierda