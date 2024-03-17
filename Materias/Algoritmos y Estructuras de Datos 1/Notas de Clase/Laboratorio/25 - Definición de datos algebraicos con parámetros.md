---
Materia: Algoritmos1
tags:
  - haskell
  - tipos
---
En Haskell, los tipos de datos algebraicos con parámetros permiten crear estructuras de datos más flexibles y parametrizadas. Estos tipos pueden tomar uno o más parámetros, lo que los hace más generalizados y adaptables a una variedad de situaciones. Hay dos tipos principales de tipos de datos algebraicos con parámetros: **tipos de datos algebraicos con un solo parámetro** y **tipos de datos algebraicos con múltiples parámetros**.

## Tipos de Datos Algebraicos con un Solo Parámetro:
La forma más simple de un tipo de datos algebraico con parámetros es aquel que toma un solo parámetro. Estos tipos se conocen comúnmente como _tipos de datos genéricos_ y se pueden aplicar a diferentes tipos de datos.
### Sintaxis
```haskell
data NombreTipo parametro = Constructor parametro
```
- `NombreTipo`: Es el nombre del tipo de datos algebraicos con parámetros.
- `parametro`: Es el parámetro que toma el tipo de datos.
- `Constructor`: Es el constructor que toma como argumento el parámetro.

#### Ejemplo de tipo de datos algebraicos con un solo parámetro:
```haskell
data Maybe a = Just a | Nothing
```
En este ejemplo, `Maybe` es un tipo de datos algebraicos con un solo parámetro `a`. Puede contener un valor de tipo `a` (`Just a`) o no contener nada (`Nothing`).

## Tipos de Datos Algebraicos con Múltiples Parámetros:
Los tipos de datos algebraicos con múltiples parámetros pueden tomar más de un parámetro, lo que permite una mayor flexibilidad y expresividad.
### Sintaxis
```haskell
data NombreTipo parametro1 parametro2 ... = Constructor parametro1 parametro2 ...
```
- `NombreTipo`: Es el nombre del tipo de datos algebraicos con parámetros.
- `parametro1`, `parametro2`, ...: Son los parámetros que toma el tipo de datos.
- `Constructor`: Es el constructor que toma como argumentos los parámetros.
#### Ejemplo de tipo de datos algebraicos con múltiples parámetros:
```haskell
data Pair a b = Pair a b
```
En este ejemplo, `Pair` es un tipo de datos algebraicos con dos parámetros, `a` y `b`. Representa un par de valores de tipo `a` y `b`.

## Ejemplo concreto
Este ejemplo define un tipo de datos algebraico llamado `Figura` que puede representar círculos o rectángulos en un plano bidimensional. Luego, se define una función llamada `area` que calcula el área de una figura específica, ya sea un círculo o un rectángulo, utilizando patrones para hacer coincidir la figura y aplicar la fórmula correspondiente.
```haskell
data Figura = Circulo (Float, Float) Float
            | Rectangulo (Float, Float) (Float, Float)
```
- `Figura` es el nombre del tipo de datos algebraico.
- `Circulo` y `Rectangulo` son los constructores de datos que representan círculos y rectángulos, respectivamente.
- `(Float, Float)` y `Float` son los tipos de los parámetros que toman los constructores. En el caso de `Circulo`, toma un par ordenado de coordenadas `(Float, Float)` y un radio `Float`. En el caso de `Rectangulo`, toma dos pares ordenados de coordenadas que representan los extremos opuestos del rectángulo.
### Definición de la Función `area`:
```haskell
area :: Figura -> Float
area (Circulo (x, y) r) = 3.1416 * r * r
area (Rectangulo (x, y) (w, z)) = base * altura
  where
    base = w - x
    altura = z - y
```
- `area` es una función que toma un valor del tipo `Figura` como argumento y devuelve un valor de tipo `Float`, que representa el área de la figura.
- La función utiliza coincidencia de patrones para manejar los dos casos posibles: círculos y rectángulos.
- Para el caso de un `Circulo`, la fórmula del área de un círculo (π * r^2) se aplica, donde `r` es el radio.
- Para el caso de un `Rectangulo`, se utiliza la fórmula del área de un rectángulo (base * altura), donde `base` es la diferencia entre las coordenadas `w` y `x`, y `altura` es la diferencia entre las coordenadas `z` y `y`.
- La palabra clave `where` se utiliza para definir variables locales (`base` y `altura`) que se utilizan en la segunda ecuación de la función.
### Ejemplo de Uso:
```haskell
-- Crear instancias de Figura (un círculo y un rectángulo)
miCirculo :: Figura
miCirculo = Circulo (0, 0) 5.0

miRectangulo :: Figura
miRectangulo = Rectangulo (1, 1) (4, 3)

-- Calcular el área de las figuras
areaCirculo :: Float
areaCirculo = area miCirculo  -- Devuelve el área del círculo

areaRectangulo :: Float
areaRectangulo = area miRectangulo  -- Devuelve el área del rectángulo
```
En este ejemplo, `miCirculo` es una instancia de `Figura` que representa un círculo con centro en `(0, 0)` y radio `5.0`, y `miRectangulo` es una instancia que representa un rectángulo con esquinas en `(1, 1)` y `(4, 3)`. Se utiliza la función `area` para calcular el área de cada figura.
En resumen, este código ilustra cómo definir un tipo de datos algebraico (`Figura`) que puede representar diferentes formas geométricas y cómo usar patrones y fórmulas específicas para calcular el área de cada tipo de figura. Este enfoque es representativo de la forma en que Haskell permite modelar datos de manera declarativa y expresiva.