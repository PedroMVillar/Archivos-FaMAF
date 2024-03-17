-- ╔════════════════════╗
-- |    Ejercicio 1     |
-- ╚════════════════════╝
data Color = Rojo | Negro | Azul
    deriving Show
mismo_color :: Color -> Color -> Bool
mismo_color c1 c2 =
    case c1 of
        Rojo -> case c2 of
            Rojo -> True
            _ -> False
        Negro -> case c2 of
            Negro -> True
            _ -> False
        Azul -> case c2 of
            Azul -> True
            _ -> False

data Tipo = Auto | Moto | Camion deriving Show
data Vehiculo = Cons Tipo Color deriving Show
pintar_auto :: Vehiculo -> Color -> Maybe Vehiculo
pintar_auto (Cons Auto co) c = Just (Cons Auto c) 
pintar_auto (Cons _ _ ) _ = Nothing
-- ╔════════════════════╗
-- |    Ejercicio 2     |
-- ╚════════════════════╝
solo_de_color :: Color -> [Vehiculo] -> [Tipo]
solo_de_color c' ((Cons t c):cs) =
    if mismo_color c' c
        then t : solo_de_color c' cs
        else solo_de_color c' cs 
-- ╔════════════════════╗
-- |    Ejercicio 3     |
-- ╚════════════════════╝
type Precio = Int
type Nombre = String
data Producto = Item Nombre Precio
data Compra = AgregarProd Producto Int Compra | Nada

precio_producto :: Producto -> Precio
precio_producto (Item _ p) = p
costo :: Compra -> Precio
costo Nada = 0
costo (AgregarProd p i c) = (p1 * i) + costo c 
    where p1 = precio_producto p
-- ╔════════════════════╗
-- |    Ejercicio 4     |
-- ╚════════════════════╝
data Arbol a = Hoja | Rama (Arbol a) a (Arbol a)
arbol_busca :: Arbol (Int, String) -> Int -> Maybe String
arbol_busca Hoja _ = Nothing
arbol_busca (Rama aIzq (x, y) aDer) k
    | x == k = Just y
    | otherwise = case arbol_busca aIzq k of 
        Just y -> Just y
        Nothing -> arbol_busca aDer k