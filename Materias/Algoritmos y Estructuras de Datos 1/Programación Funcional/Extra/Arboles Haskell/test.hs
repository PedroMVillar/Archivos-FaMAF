-- ╔═══════════════════════━━━─── • ───━━━═════════════════════════╗
-- Defino el tipo de daro Árbol donde Nil es el arbol vacío, este 
-- tipo de árbol no almacenará nada en sus nodos
-- ╚═══════════════════════━━━─── • ───━━━═════════════════════════╝
data Arbol = Nil | Bin Arbol Arbol
    deriving Show

-- ╔═══════════════════════━━━─── • ───━━━═════════════════════════╗
-- Esquema de recursión para el tipo de datos Árbol
-- f :: Arbol -> .....
-- f Nil       = ...
-- f (Bin i d) = ...
-- ╚═══════════════════════━━━─── • ───━━━═════════════════════════╝

-- ╔═══════════════════════━━━─── • ───━━━═════════════════════════╗
-- Función esNil, recibe un árbol y devuelve True si el árbol es 
-- vacío y False si no lo es
esNil :: Arbol -> Bool
esNil Nil = True
esNil (Bin _ _ ) = False
-- ╚═══════════════════════━━━─── • ───━━━═════════════════════════╝

-- ╔═══════════════════════━━━─── • ───━━━═════════════════════════╗
-- Función hijoIzq, recibe un árbol, y devuelve el árbol izquierdo 
-- partiendo del nodo principal
hijoIzq :: Arbol -> Arbol
hijoIzq Nil = Nil
hijoIzq (Bin a1 a2) = a1 
-- ╚═══════════════════════━━━─── • ───━━━═════════════════════════╝

-- ╔═══════════════════════━━━─── • ───━━━═════════════════════════╗
-- Función hijoDer, recibe un árbol, y devuelve el árbol derecho 
-- partiendo del nodo principal
hijoDer :: Arbol -> Arbol
hijoDer Nil = Nil
hijoDer (Bin a1 a2) = a2
-- ╚═══════════════════════━━━─── • ───━━━═════════════════════════╝

-- ╔═══════════════════════━━━─── • ───━━━═════════════════════════╗
-- Función cantNodos, cuenta nodos en el árbol, cuenta Nil
cantNodos :: Arbol -> Int
cantNodos Nil = 0
cantNodos (Bin a1 a2) = 1 + cantNodos a1 + cantNodos a2
-- ╚═══════════════════════━━━─── • ───━━━═════════════════════════╝

-- ╔═══════════════════════━━━─── • ───━━━═════════════════════════╗
-- Funcion cantHojas, cuenta los nodos sin hijos del árbol
cantHojas :: Arbol -> Int
cantHojas Nil = 0
cantHojas (Bin a1 a2) =
    if esNil a1 && esNil a2
        then 1
            else cantHojas a1 + cantHojas a2
-- ╚═══════════════════════━━━─── • ───━━━═════════════════════════╝

-- ╔═══════════════════════━━━─── • ───━━━═════════════════════════╗
-- Función altura, dado un Árbol devuelve la longitud de la rama mas 
-- larga del árbol, una rama es un camino que va desde la raiz hasta 
-- una hoja
alturaArbol :: Arbol -> Int
alturaArbol Nil = 0
alturaArbol (Bin a1 a2) = 1 + max (alturaArbol a1) (alturaArbol a2)
-- ╚═══════════════════════━━━─── • ───━━━═════════════════════════╝
