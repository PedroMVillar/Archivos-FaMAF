---
Materia: Algoritmos1
tags:
  - haskell
  - tipos
---
En Haskell, un tipo de datos algebraico sin parámetros se define utilizando la palabra clave `data`. Este tipo de datos representa un conjunto finito de valores distintos y no toma ningún parámetro para su construcción. La forma más simple es un tipo enumerado.
## Sintaxis general
```haskell
data NombreTipo = Valor1 | Valor2 | ... | ValorN
```
- `NombreTipo`: Es el nombre del tipo de datos algebraicos.
- `Valor1, Valor2, ..., ValorN`: Son los distintos valores que puede tomar el tipo.
### Ejemplo de tipo de datos algebraicos sin parámetros:
```haskell
data Direccion = Norte | Sur | Este | Oeste
```
En este ejemplo, `Direccion` es un tipo de datos algebraicos sin parámetros que puede tomar uno de los cuatro valores: `Norte`, `Sur`, `Este`, u `Oeste`.

## Patrones y Construcción de Valores:
Una vez definido un tipo de datos algebraicos, puedes utilizar patrones para trabajar con los valores de ese tipo. Un patrón es una expresión que coincide con un valor específico del tipo. Puedes utilizar patrones en funciones, expresiones `case`, entre otros.
```haskell
girarDerecha :: Direccion -> Direccion
girarDerecha Norte = Este
girarDerecha Sur   = Oeste
girarDerecha Este  = Sur
girarDerecha Oeste = Norte
```
Esta función `girarDerecha` toma una dirección como argumento y devuelve la dirección resultante después de girar a la derecha.
## Uso de Tipos de Datos Algebraicos Sin Parámetros:
```haskell
-- Uso de la dirección original
direccionOriginal :: Direccion
direccionOriginal = Norte

-- Uso de la función para girar a la derecha
nuevaDireccion :: Direccion
nuevaDireccion = girarDerecha direccionOriginal
```
En este ejemplo, `direccionOriginal` es un valor del tipo `Direccion` (puede ser `Norte`). Luego, `nuevaDireccion` se obtiene al aplicar la función `girarDerecha` al valor `direccionOriginal`.

*En resumen, los tipos de datos algebraicos sin parámetros en Haskell son una forma de representar conjuntos finitos de valores distintos. Son útiles para modelar situaciones en las que los valores posibles son conocidos y no requieren parámetros adicionales. Estos tipos proporcionan una manera elegante y segura de trabajar con datos en Haskell.*