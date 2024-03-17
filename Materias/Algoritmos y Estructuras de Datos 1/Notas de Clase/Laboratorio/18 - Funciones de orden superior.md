---
Materia: Algoritmos1
tags:
---
Las funciones de orden superior en Haskell son funciones que **pueden recibir otras funciones como argumentos y/o devolver funciones como resultados**. Este concepto es fundamental en programación funcional y permite construir abstracciones poderosas y expresivas. Hay varias formas de trabajar con funciones de orden superior en Haskell, incluyendo funciones de map, filter, y fold, así como funciones anónimas (lambda).
## Funciones de Orden Superior Básicas:

### 1. Funciones que toman funciones como argumentos:
**Ejemplo: Función `map`**
```haskell
-- La función map toma una función y una lista, y aplica la función a cada elemento de la lista
mapCuadrado :: (a -> b) -> [a] -> [b]
mapCuadrado f lista = map f lista

-- Uso de la función mapCuadrado
cuadrados :: [Int]
cuadrados = mapCuadrado (\x -> x * x) [1, 2, 3, 4]  -- Devuelve [1, 4, 9, 16]
```
### 2. Funciones que devuelven funciones como resultados:
**Ejemplo: Función `compose`**
```haskell
-- La función compose toma dos funciones y devuelve su composición
compose :: (b -> c) -> (a -> b) -> a -> c
compose f g x = f (g x)

-- Uso de la función compose
dobleCuadrado :: Int -> Int
dobleCuadrado = compose (\x -> x * 2) (\y -> y * y)

-- Uso de la función dobleCuadrado
resultado :: Int
resultado = dobleCuadrado 3  -- Devuelve 18
```

## Funciones Anónimas (Lambda):
En Haskell, puedes definir funciones anónimas (lambda) utilizando la palabra clave `\`. Estas funciones son útiles cuando solo necesitas una pequeña función temporalmente.
**Ejemplo: Uso de Lambda en `map`**
```haskell
-- Uso de lambda con la función map
cuadrados :: [Int]
cuadrados = map (\x -> x * x) [1, 2, 3, 4]  -- Devuelve [1, 4, 9, 16]
```
## Aplicación Parcial y Currying:
En Haskell, debido a la currificación ([[17 - Funciones currificadas]]), puedes aplicar parcialmente funciones, lo que significa proporcionar solo algunos de los argumentos y obtener una nueva función que espera los argumentos restantes.
**Ejemplo: Aplicación parcial con `map`**
```haskell
-- Aplicación parcial de map
cuadrados :: [Int]
cuadrados = map (* 2) [1, 2, 3, 4]  -- Devuelve [2, 4, 6, 8]
```

## Uso de Funciones de Orden Superior en Funciones Propias:
**Ejemplo: Función de Orden Superior para Filtrar Números Pares**
```haskell
filtrarPares :: (Int -> Bool) -> [Int] -> [Int]
filtrarPares condicion lista = filter condicion lista

-- Uso de la función filtrarPares
pares :: [Int]
pares = filtrarPares (\x -> x `mod` 2 == 0) [1, 2, 3, 4, 5, 6]  -- Devuelve [2, 4, 6]
```

*En resumen, las funciones de orden superior en Haskell proporcionan una poderosa abstracción para trabajar con funciones como ciudadanos de primera clase. Esto facilita la construcción de código más modular, expresivo y reutilizable.*