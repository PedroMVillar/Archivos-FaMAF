-- ╔════════════════════╗
-- |    Ejercicio 1     |
-- ╚════════════════════╝
data Palo = Espada | Basto | Oro | Copa
mismo_palo :: Palo -> Palo -> Bool
mismo_palo Espada Espada = True
mismo_palo Espada _ = False
mismo_palo Basto Basto = True
mismo_palo Basto _ = False
mismo_palo Oro Oro = True
mismo_palo Oro _ = False
mismo_palo Copa Copa = True
mismo_palo Copa _ = False

data Figura = Uno | Dos | Tres | Cuatro | Cinco | Seis | Siete | Sota | Caballo | Rey
valor_figura :: Figura -> Int
valor_figura Uno = 1
valor_figura Dos = 2
valor_figura Tres = 3
valor_figura Cuatro = 4
valor_figura Cinco = 5
valor_figura Seis = 6
valor_figura Siete = 7
valor_figura Sota = 8
valor_figura Caballo = 9
valor_figura Rey = 10

data Carta = Naipe Figura Palo
figura_carta :: Carta -> Figura
figura_carta (Naipe f _) = f
palo_carta :: Carta -> Palo
palo_carta (Naipe _ p) = p
suma_cartas :: Carta -> Carta -> Maybe Int
suma_cartas c1 c2
    | mismo_palo p1 p2 = Just (valor_figura (figura_carta c1) + valor_figura (figura_carta c2))  
    | otherwise = Nothing
    where
        p1 = palo_carta c1
        p2 = palo_carta c2
-- ╔════════════════════╗
-- |    Ejercicio 2     |
-- ╚════════════════════╝
compatibles :: Carta -> [Carta] -> [Figura]
compatibles c (x:xs) 
    | mismo_palo pc px && (vc + vx) <= 15 = fx : compatibles c xs
    | otherwise = compatibles c xs
    where 
        vc = valor_figura (figura_carta c)
        vx = valor_figura (figura_carta x)
        pc = palo_carta c
        px = palo_carta x
        fx = figura_carta x
-- ╔════════════════════╗
-- |    Ejercicio 3     |
-- ╚════════════════════╝
type Duracion = Int
type Nombre = String
data Cancion = Tema Nombre Duracion
data Estado = Escuchando | NoEscuchando
data Playlist = EnLista Cancion Estado Playlist | Vacia
cancion_duracion :: Cancion -> Duracion
cancion_duracion (Tema _ d) = d
tiempo_reproduccion :: Playlist -> Int
tiempo_reproduccion Vacia = 0
tiempo_reproduccion (EnLista c e np) =
    case e of
        Escuchando -> dc + tiempo_reproduccion np
        NoEscuchando -> tiempo_reproduccion np
    where 
        dc = cancion_duracion c 
{-
ghci> tiempo_reproduccion (EnLista (Tema "a" 40) Escuchando (EnLista (Tema "a" 40) Escuchando (Vacia)))
80
-}
-- ╔════════════════════╗
-- |    Ejercicio 4     |
-- ╚════════════════════╝
data Arbol a = Hoja | Arbol (Arbol a) a (Arbol a) deriving Show
a_podar :: Arbol a -> Arbol a
a_podar Hoja = Hoja
a_podar (Arbol Hoja _ Hoja) = Hoja
a_podar (Arbol izq x der) = Arbol (a_podar izq) x (a_podar der)
-- El arbol definido como: (Arbol (Arbol Hoja 1 Hoja) 2 (Arbol Hoja 3 Hoja))
--          2
--        /   \
--       1     3
-- Al podarlo deberia quedar:
--           2 
-- El arbol definido debe quedar: Arbol Hoja 2 Hoja 
{-
ghci> a_podar (Arbol (Arbol Hoja 1 Hoja) 2 (Arbol Hoja 3 Hoja))
Arbol Hoja 2 Hoja
-}