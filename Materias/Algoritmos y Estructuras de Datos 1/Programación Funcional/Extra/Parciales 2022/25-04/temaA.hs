
-- ╔════════════════════╗
-- |    Ejercicio 1     |
-- ╚════════════════════╝
data Forma = Piedra | Papel | Tijera
le_gana :: Forma -> Forma -> Bool
le_gana f1 f2 =
    case f1 of
        Piedra -> case f2 of
            Tijera -> True
            Piedra -> False
            Papel -> False
        Papel -> case f2 of
            Piedra -> True
            Papel -> False
            Tijera -> False
        Tijera -> case f2 of
            Papel -> True
            Tijera -> False
            Piedra -> False 
-- ╔════════════════════╗
-- |    Ejercicio 2     |
-- ╚════════════════════╝
type Nombre = String
data Jugador = Mano Nombre Forma 
ganador :: Jugador -> Jugador -> Maybe Nombre
ganador (Mano n f) (Mano n' f')
    | le_gana f f' = Just n 
    | le_gana f' f = Just n'
    | otherwise = Nothing
-- ╔════════════════════╗
-- |    Ejercicio 3     |
-- ╚════════════════════╝
data NotaMusical = Do | Re | Mi | Fa | Sol | La | Si
data Figura = Negra | Corchea
data Melodia = Entonar NotaMusical Figura Melodia | Vacia
contar_tiempos :: Melodia -> Int
contar_tiempos Vacia = 0
contar_tiempos (Entonar nM f m) =
    case f of
        Negra -> 2 + contar_tiempos m
        Corchea -> 1 + contar_tiempos m
-- ╔════════════════════╗
-- |    Ejercicio 4     |
-- ╚════════════════════╝
data Arbol a = Hoja | Rama (Arbol a) a (Arbol a)
arbol_sum :: Arbol Int -> Arbol Int -> Arbol Int
arbol_sum Hoja a1 = a1
arbol_sum (Rama aIzq a aDer) (Rama aIzq' a' aDer') =
    (Rama (arbol_sum aIzq aIzq') a (arbol_sum aDer aDer'))