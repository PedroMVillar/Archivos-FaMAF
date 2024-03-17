---
Materia: Algoritmos1
tags:
  - haskell
---
En Haskell, la palabra clave `let` se utiliza para introducir **definiciones locales** en una expresión. Permite asignar nombres a valores intermedios dentro de una expresión y utilizarlos en otras partes de la misma. Es una forma de vincular variables dentro de un ámbito local.
## Sintaxis general
La sintaxis general de `let` es la siguiente:
```haskell
let nombreVariable = expresionEnlazada
    otraVariable  = expresionEnlazada
in
    expresionPrincipal
```
Aquí, `nombreVariable` y `otraVariable` son variables locales que se pueden utilizar en `expresionPrincipal`. El `in` marca el final de las definiciones locales y el comienzo de la expresión principal donde se pueden usar esas variables.
## Ejemplo 1 - Cálculo de la hipotenusa de un triángulo rectángulo
```haskell
calcularHipotenusa :: Double -> Double -> Double
calcularHipotenusa a b =
    let cuadrado x = x * x
    in sqrt (cuadrado a + cuadrado b)
```
En este ejemplo, se define localmente la función `cuadrado` usando `let` para calcular el cuadrado de un número. Luego, se utiliza esta función dentro de la expresión principal para calcular la hipotenusa de un triángulo rectángulo.
## Ejemplo 2 - Cálculo del área de un círculo
```haskell
calcularAreaCirculo :: Double -> Double
calcularAreaCirculo radio =
    let piAproximado = 3.14159
    in piAproximado * radio * radio
```
Aquí, se utiliza `let` para definir localmente una aproximación de π (`piAproximado`). Luego, se utiliza esta variable local en la expresión principal para calcular el área de un círculo.
## Ejemplo 3 - Concatenación de cadenas con patrón de guardas
```haskell
saludoPersonalizado :: String -> String
saludoPersonalizado nombre =
    let saludoFormal = "¡Hola, " ++ nombre ++ "!"
        saludoInformal
          | length nombre <= 3 = "Hola"
          | otherwise           = "Hola, " ++ nombre
    in if length nombre > 10
       then saludoFormal
       else saludoInformal
```
En este ejemplo, se utiliza `let` para definir localmente `saludoFormal` y `saludoInformal` antes de la expresión principal. La expresión condicional en `if` elige entre el saludo formal y el informal basándose en la longitud del nombre.

*En resumen, `let` en Haskell proporciona una manera de introducir variables locales en una expresión, lo que puede mejorar la legibilidad y modularidad del código al dividir el problema en partes más pequeñas y manejables.*