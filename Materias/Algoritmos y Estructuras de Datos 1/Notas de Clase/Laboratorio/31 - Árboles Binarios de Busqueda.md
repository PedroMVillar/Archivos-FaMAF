---
Materia: Algoritmos1
tags:
  - haskell
  - arboles
  - tipos
---
Un Árbol Binario de Búsqueda (BST, por sus siglas en inglés Binary Search Tree) es una estructura de datos en la que c*ada nodo de un árbol tiene como máximo dos hijos, y para cada nodo, todos los nodos en su subárbol izquierdo tienen valores menores que el valor del nodo, y todos los nodos en su subárbol derecho tienen valores mayores.* Esta propiedad asegura que se pueda realizar una búsqueda eficiente en el árbol.

En Haskell, un árbol binario de búsqueda se puede implementar como un tipo de dato algebraico recursivo:
```haskell
data ABB a = RamaABB (ABB a) a (ABB a) | VacioABB deriving Show
```
Donde:
- `RamaABB` representa un nodo en el árbol que contiene un valor (`a`) y dos subárboles (`ABB a`): el subárbol izquierdo y el subárbol derecho.
- `VacioABB` representa un árbol binario de búsqueda vacío.

Ahora, con esta definición, vamos a reescribir las funciones básicas para trabajar con un Árbol Binario de Búsqueda en Haskell:
```haskell
data ABB a = RamaABB (ABB a) a (ABB a) | VacioABB deriving Show

-- Función de inserción en un Árbol Binario de Búsqueda
insertarABB :: Ord a => a -> ABB a -> ABB a
insertarABB valor VacioABB = RamaABB VacioABB valor VacioABB
insertarABB valor (RamaABB izquierda raiz derecha)
  | valor < raiz = RamaABB (insertarABB valor izquierda) raiz derecha
  | valor > raiz = RamaABB izquierda raiz (insertarABB valor derecha)
  | otherwise = RamaABB izquierda raiz derecha  -- Valor ya presente, no hacer nada

-- Función de búsqueda en un Árbol Binario de Búsqueda
buscarABB :: Ord a => a -> ABB a -> Bool
buscarABB _ VacioABB = False
buscarABB valor (RamaABB izquierda raiz derecha)
  | valor < raiz = buscarABB valor izquierda
  | valor > raiz = buscarABB valor derecha
  | otherwise = True  -- Encontrado

-- Función de eliminación en un Árbol Binario de Búsqueda
eliminarABB :: Ord a => a -> ABB a -> ABB a
eliminarABB _ VacioABB = VacioABB
eliminarABB valor (RamaABB izquierda raiz derecha)
  | valor < raiz = RamaABB (eliminarABB valor izquierda) raiz derecha
  | valor > raiz = RamaABB izquierda raiz (eliminarABB valor derecha)
  | otherwise = combinarArbolesABB izquierda derecha

-- Función auxiliar para combinar dos subárboles al eliminar un nodo en un Árbol Binario de Búsqueda
combinarArbolesABB :: Ord a => ABB a -> ABB a -> ABB a
combinarArbolesABB VacioABB derecha = derecha
combinarArbolesABB izquierda VacioABB = izquierda
combinarArbolesABB izquierda derecha =
  let sucesor = encontrarSucesorABB derecha
  in RamaABB sucesor izquierda (eliminarABB sucesor derecha)

-- Función auxiliar para encontrar el sucesor de un nodo en un Árbol Binario de Búsqueda
encontrarSucesorABB :: Ord a => ABB a -> ABB a
encontrarSucesorABB (RamaABB VacioABB valor _) = RamaABB VacioABB valor VacioABB
encontrarSucesorABB (RamaABB izquierda _ _) = encontrarSucesorABB izquierda
```

- `insertarABB` añade un nuevo valor al árbol, manteniendo la propiedad de búsqueda.
- `buscarABB` verifica si un valor está presente en el árbol.
- `eliminarABB` elimina un valor del árbol, manteniendo la propiedad de búsqueda.