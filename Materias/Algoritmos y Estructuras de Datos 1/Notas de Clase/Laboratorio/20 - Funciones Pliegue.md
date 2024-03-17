---
Materia: Algoritmos1
tags:
  - haskell
---
Las funciones de pliegue (o "folds") en Haskell son herramientas poderosas para procesar listas de manera recursiva y resumir o acumular información. Las dos funciones de pliegue más comunes en Haskell son `foldl` (pliegue hacia la izquierda) y `foldr` (pliegue hacia la derecha). Ambas funciones siguen un patrón común, permitiendo la aplicación de una función binaria (de dos argumentos) a los elementos de una lista, reduciendo la lista a un valor acumulado.
## foldl (Pliegue hacia la Izquierda)
```haskell
foldl :: (b -> a -> b) -> b -> [a] -> b
```
- **Parámetros:**
	- `(b -> a -> b)`: Una función binaria que toma un acumulador (`b`) y un elemento de la lista (`a`) y produce un nuevo acumulador.
	- `b`: El valor inicial del acumulador.
	- `[a]`: La lista que se va a plegar.
- **Ejemplo: Suma de elementos de una lista con `foldl`**
```haskell
-- Suma de elementos de una lista con foldl
suma :: [Int] -> Int
suma lista = foldl sumar 0 lista
  where
    sumar acc x = acc + x
```
- Uso: `suma [1, 2, 3, 4]` devuelve `10`.

## foldr (Pliegue hacia la Derecha)
```haskell
-- Concatenación de elementos de una lista con foldr
concatenar :: [String] -> String
concatenar lista = foldr concatenarElem "" lista
  where
    concatenarElem x acc = x ++ acc
```
- Uso: `concatenar ["H", "e", "l", "l", "o"]` devuelve `"Hello"`.

En estos ejemplos, `sumar` y `concatenarElem` son funciones con nombre que toman dos argumentos: un acumulador (`acc`) y un elemento de la lista (`x`). Estas funciones son utilizadas como argumentos en `foldl` y `foldr`, respectivamente, para realizar el pliegue de la lista.

**Los pliegues se pueden utilizar para implementar cualquier función que recorra una lista, elemento a elemento, y luego devuelvan un valor. Siempre que quieras recorrer una lista y devolver un valor, hay posibilidades de utilizar un pliegue**. Esta es la razón por la que los pliegues, junto a los mapeos y los filtros, son unas de las funciones más útiles de la programación funcional.
## foldl1 y foldr1

Las funciones `foldl1` y `foldr1` son muy parecidas a `foldl` y `foldr`, solo que en lugar que no necesitas indicar un valor de inicio. *Asumen que el primer (o el último) elemento de la lista es valor de inicio*, luego empiezan a plegar la lista por el elemento siguiente. Esto me recuerda que la función sum puede ser implementada como: `sum = foldl1 (+)`. Ya que estas funciones dependen de que la listas que van a plegar tengan al menos un elemento, pueden causar errores en tiempo de ejecución si son llamadas con listas vacías. Por otra parte, tanto `foldl` como `foldr` funcionan bien con listas vacías. Cuando hagas un pliegue piensa bien en como actuar ante una lista vacía. Si la función no tiene sentido al ser llamada con listas vacías probablemente puedas utilizar `foldl1` y `foldr1` para implementarla.

### Ejemplo con foldl1
```haskell
-- Producto de elementos de una lista no vacía con foldl1
producto :: [Int] -> Int
producto lista = foldl1 (*) lista
```
Uso: `producto [1, 2, 3, 4]` devuelve `24`.

En este ejemplo, `foldl1 (*)` toma una lista no vacía y realiza un pliegue hacia la izquierda usando la función de multiplicación `(*)`. Como no se proporciona un valor inicial, `foldl1` asume que la lista no está vacía y toma el primer elemento como valor inicial.

### Ejemplo con foldr1
```haskell
-- Máximo elemento de una lista no vacía con foldr1
maximo :: [Int] -> Int
maximo lista = foldr1 max lista
```
Uso: `maximo [3, 7, 1, 9, 4]` devuelve `9`.

En este ejemplo, `foldr1 max` toma una lista no vacía y realiza un pliegue hacia la derecha usando la función `max` para obtener el máximo elemento de la lista.

Ambos ejemplos ilustran cómo `foldl1` y `foldr1` son utilizados en situaciones en las que puedes asumir que la lista de entrada no es vacía. Estas funciones pueden simplificar la escritura de código cuando trabajas con listas no vacías y evitan la necesidad de proporcionar un valor inicial explícito.
