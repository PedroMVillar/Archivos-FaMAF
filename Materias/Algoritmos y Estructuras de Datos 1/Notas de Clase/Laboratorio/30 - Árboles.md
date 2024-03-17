---
Materia: Algoritmos1
tags:
  - haskell
  - arboles
  - tipos
---
Un árbol es una *estructura de datos jerárquica compuesta por nodos conectados mediante ramas*. Los árboles son ampliamente utilizados para representar y organizar datos de manera eficiente. En términos generales, un árbol consta de:
1. **Nodos:**
    - Cada nodo en un árbol contiene algún tipo de información o valor.
    - En Haskell, los nodos pueden contener cualquier tipo de dato. En el ejemplo de abajo, se utilizó `String`, pero podría ser cualquier otro tipo.
2. **Ramas (o bordes):**
    - Las ramas conectan los nodos y definen la relación entre ellos.
    - En un árbol, cada nodo (excepto el nodo superior) tiene un nodo padre al que está conectado mediante una rama, y puede tener cero o más nodos hijos.
3. **Raíz:**
    - El nodo superior en un árbol se llama la raíz. Es el punto de partida para recorrer el árbol.
4. **Hojas:**
    - Las hojas son los nodos que no tienen hijos. Son los extremos del árbol y representan la parte final de la estructura.
5. **Altura:**
    - La altura de un árbol es la longitud máxima de cualquier camino desde la raíz hasta una hoja. En otras palabras, es la distancia más larga desde la raíz hasta el nodo más profundo.
6. **Profundidad:**
    - La profundidad de un nodo es la longitud del camino desde la raíz hasta ese nodo. La profundidad de la raíz es 0.
7. **Subárbol:**
    - Un subárbol es un árbol que se forma tomando un nodo y todos sus descendientes (nodos hijos, nodos nietos, y así sucesivamente).

## Ejemplo
En este ejemplo se define un tipo de árbol llamado `Arbol` que puede ser utilizado para representar estructuras de árboles en Haskell. Además, se define un tipo específico de árbol llamado `Prefijos` que utiliza el tipo `String` como elemento en cada nodo del árbol:
```haskell
data Arbol a = Hoja | Rama (Arbol a) a (Arbol a)

type Prefijos = Arbol String

can, cana, canario, canas, cant, cantar, canto :: Prefijos
can = Rama cana "can" cant
cana = Rama canario "a" canas
canario = Rama Hoja "rio" Hoja
canas = Rama Hoja "s" Hoja
cant = Rama cantar "t" canto
cantar = Rama Hoja "ar" Hoja
canto = Rama Hoja "o" Hoja
```
1. **Definición del tipo `Arbol`:**
    - `Arbol` es un tipo de dato que puede ser un árbol con una `Hoja` (sin hijos) o una `Rama` que tiene un subárbol izquierdo, un valor en el nodo y un subárbol derecho.
2. **Definición del tipo `Prefijos`:**
    
    - `Prefijos` es un tipo específico de árbol (`Arbol String`) que utiliza cadenas de texto como elementos en cada nodo.
3. **Instancias de árboles `Prefijos` con cadenas de texto:**
    
    - `can`, `cana`, `canario`, `canas`, `cant`, `cantar`, y `canto` son instancias específicas del árbol `Prefijos` que representan palabras y prefijos.
    - Cada instancia utiliza el constructor `Rama` para construir un árbol. Por ejemplo, `can` es una rama con `cana` como subárbol izquierdo, la cadena "can" como valor en el nodo y `cant` como subárbol derecho.

Entonces, el árbol que se forma con estas instancias se verá así:
```haskell
                 can
                /   \
            cana     cant
            /  \      /   \
      canario  canas  cantar canto
        |        |        |      |
      "rio"     "s"     "ar"    "o"
```

## Funciones sobre árboles
Supongamos que se tiene la siguiente definición de árbol en Haskell:
```haskell
data Arbol a = Hoja | Rama (Arbol a) a (Arbol a) deriving Show
```
### `a_long :: Arbol a -> Int` que dado un árbol devuelve la cantidad de datos almacenados.
```haskell
-- La longitud de un árbol es la cantidad de datos almacenados en él,
-- contando tanto hojas como ramas.
a_long :: Arbol a -> Int
a_long Hoja = 0
a_long (Rama izquierda _ derecha) = 1 + a_long izquierda + a_long derecha
```
Esta función utiliza recursión para contar la cantidad de nodos (datos) en el árbol. Cuando se encuentra con una hoja (`Hoja`), devuelve 0, y cuando se encuentra con una rama (`Rama`), cuenta 1 por ese nodo y luego suma la cantidad de nodos en los subárboles izquierdo y derecho.
### `a_hojas :: Arbol a -> Int` que dado un árbol devuelve la cantidad de hojas.
```haskell
-- Función auxiliar que verifica si un árbol es vacío (Hoja)
a_vacio :: Arbol a -> Bool
a_vacio Hoja = True
a_vacio (Rama _ _ _) = False

-- Función que cuenta la cantidad de hojas en un árbol
a_hojas :: Arbol a -> Int
a_hojas Hoja = 0
a_hojas (Rama aIzq _ aDer) =
  if a_vacio aIzq && a_vacio aDer
    then 1
    else a_hojas aIzq + a_hojas aDer
```
Esta implementación verifica si ambos subárboles izquierdo y derecho son hojas antes de contarlos. La función `a_vacio` se encarga de verificar si un árbol es vacío (en este caso, una hoja).
### `a_inc :: Num a => Arbol a -> Arbol a` que dado un árbol que contiene números, los incrementa en uno.
```haskell
-- Incrementa en uno cada número almacenado en los nodos del árbol.
a_inc :: Num a => Arbol a -> Arbol a
a_inc Hoja = Hoja
a_inc (Rama izquierda valor derecha) = Rama (a_inc izquierda) (valor + 1) (a_inc derecha)
```
Esta función utiliza recursión para recorrer el árbol y, cuando encuentra un nodo (`Rama`), incrementa en uno el valor almacenado en ese nodo.

### `a_map :: (a -> b) -> Arbol a -> Arbol b` que dada una función y un árbol, devuelve el árbol con la misma estructura, que resulta de aplicar la función a cada uno de los elementos del árbol.
```haskell
-- Aplica la función f a cada elemento almacenado en los nodos del árbol,
-- manteniendo la misma estructura del árbol original.
a_map :: (a -> b) -> Arbol a -> Arbol b
a_map _ Hoja = Hoja
a_map f (Rama izquierda valor derecha) = Rama (a_map f izquierda) (f valor) (a_map f derecha)
```
Esta función utiliza recursión para recorrer el árbol y, cuando encuentra un nodo (`Rama`), aplica la función `f` al valor almacenado en ese nodo. La estructura del árbol se mantiene, pero los valores almacenados son transformados por la función `f`.