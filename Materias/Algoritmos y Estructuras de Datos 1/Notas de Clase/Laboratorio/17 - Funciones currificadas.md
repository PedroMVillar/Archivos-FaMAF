---
Materia: Algoritmos1
tags:
  - haskell
---
La currificación es el proceso de transformar una función que toma múltiples argumentos en una secuencia de funciones que toman un solo argumento. En Haskell, todas las funciones son, por defecto, currificadas.
## Principios clave de la currificación en Haskell:
- **Funciones que Toman Múltiples Argumentos:** En Haskell, una función que aparentemente toma múltiples argumentos en realidad toma un solo argumento y devuelve otra función que también toma un solo argumento, y así sucesivamente hasta que se obtiene el resultado final.
- **Curry y Uncurry:** La currificación se llama así en honor a Haskell Curry, un lógico y matemático que hizo contribuciones significativas al campo de la lógica matemática y la teoría de la computación. La función `curry` en Haskell convierte una función que toma una tupla en una función currificada, mientras que `uncurry` hace lo contrario.
```haskell
-- curry convierte una función que toma una tupla en una función currificada
curry :: ((a, b) -> c) -> a -> b -> c

-- uncurry convierte una función currificada en una función que toma una tupla
uncurry :: (a -> b -> c) -> (a, b) -> c
```

## Ejemplo detallado
Consideremos una función que suma dos números:
```haskell
suma :: Int -> Int -> Int
suma x y = x + y
```
Aunque esta función parece tomar dos argumentos, en realidad es currificada. Puedes pensar en ella como una función que toma un número (`x`) y devuelve otra función que toma otro número (`y`) y finalmente devuelve la suma de `x` e `y`.
**1.** Usando ambos argumentos a la vez:
```haskell
resultado = suma 3 4  -- Devuelve 7
```
**2.** Usando parcialmente la función:
```haskell
sumaTres = suma 3  -- sumaTres es ahora una función que toma un número y suma 3 a ese número
resultado = sumaTres 4  -- Devuelve 7
```
**3.** Usando `curry` para currificar explícitamente:
```haskell
sumaCurrificada = curry suma
resultado = sumaCurrificada 3 4  -- Devuelve 7
```
**4.** Entendiendo la Currificación Implícita: La función `suma` realmente toma un solo argumento y devuelve otra función que toma un solo argumento. Este comportamiento es inherente a todas las funciones en Haskell.

*La currificación facilita la composición de funciones, el uso parcial de funciones y la construcción de funciones más genéricas. Además, es esencial para muchas técnicas avanzadas en programación funcional, como el uso de funciones de orden superior y la programación monádica. En Haskell, la currificación es una parte integral de la programación funcional y contribuye a la expresividad y elegancia del código.*
