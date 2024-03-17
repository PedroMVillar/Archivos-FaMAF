---
Materia: Algoritmos1
tags:
  - haskell
---
En Haskell, un tipo de dato recursivo es aquel que *se define en términos de sí mismo*. Esto permite crear estructuras de datos complejas y flexibles. Los tipos de datos recursivos son fundamentales para modelar problemas de manera elegante y expresiva en Haskell. Aquí hay algunos ejemplos comunes de tipos de datos recursivos en Haskell:
## Listas
La lista es un tipo de dato recursivo básico en Haskell. Puede ser vacía (`[]`) o consistir en un elemento seguido por otra lista. La definición de una lista es recursiva.
```haskell
data Lista a = Vacia | Cons a (Lista a)
```
Aquí, `Vacia` representa la lista vacía, y `Cons` representa un elemento seguido por otra lista.
## Árboles binarios:
Los árboles binarios son otra estructura de datos recursiva común. Cada nodo de un árbol binario tiene un valor y dos subárboles, que son a su vez árboles binarios.
```haskell
data ArbolBinario a = Nodo a (ArbolBinario a) (ArbolBinario a) | Hoja
```
Aquí, `Hoja` representa un nodo sin hijos, y `Nodo` representa un nodo con un valor y dos subárboles.

## Tipos de datos recursivos mutuos:
En algunos casos, dos o más tipos de datos pueden ser definidos de manera recursiva en términos unos de otros.
```haskell
data Lista a = Vacia | Cons a (Lista a)
data Arbol a = Hoja a | Nodo (Lista (Arbol a))
```
Aquí, `Arbol` tiene nodos que contienen listas de árboles y `Lista` tiene elementos que pueden ser árboles.
## Ejemplo - Mostrar una palabra
```haskell
-- Definición del tipo de dato recursivo Palabra
data Palabra = PVacia | Agregar Char Palabra deriving Show

-- Función para mostrar una Palabra como String
mostrar :: Palabra -> String
mostrar PVacia = ""
mostrar (Agregar l p) = l : mostrar p

-- Ejemplo de uso en GHCi
-- Crea una palabra
-- > let ejemploPalabra = Agregar 'H' (Agregar 'o' (Agregar 'l' (Agregar 'a' PVacia)))
-- Muestra la palabra
-- > mostrar ejemploPalabra
-- "Hola"
```
Donde:
- `Palabra` es un tipo de dato recursivo que representa una palabra como una lista de caracteres. Puede estar vacía (`PVacia`) o contener un carácter seguido por otra `Palabra` (`Agregar Char Palabra`).
    
- La función `mostrar` toma una `Palabra` como entrada y devuelve una cadena (`String`) que representa esa palabra. Si la palabra es vacía (`PVacia`), devuelve una cadena vacía. Si la palabra es de la forma `Agregar l p`, donde `l` es un carácter y `p` es el resto de la palabra, concatena `l` con el resultado de mostrar `p`.
    
- `ejemploPalabra` es un ejemplo de cómo crear una instancia de `Palabra` utilizando la construcción de la palabra "Hola".
    
- `resultadoEjemplo` llama a la función `mostrar` con `ejemploPalabra` para obtener la representación en cadena de la palabra.
    
- En `main`, se imprime el resultado utilizando `putStrLn`.
    

Al ejecutar este programa, verás que imprime la cadena "Hola", que es la representación de la palabra construida con el tipo de dato `Palabra`.
La prueba en ghci será:
```ghci
*Main> let ejemploPalabra = Agregar 'H' (Agregar 'o' (Agregar 'l' (Agregar 'a' PVacia)))
*Main> mostrar ejemploPalabra
"Hola"
```