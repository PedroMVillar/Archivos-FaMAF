---
Materia: Algoritmos1
tags:
  - haskell
---
En Haskell, `where` es otra forma de introducir definiciones locales en una función. Al igual que `let`, `where` permite vincular variables en un ámbito local, pero su sintaxis es un poco diferente.
## Sintaxis general
```haskell
nombreFuncion :: TipoArgumento1 -> TipoArgumento2 -> ... -> TipoResultado
nombreFuncion argumento1 argumento2 ... =
    expresionPrincipal
  where
    nombreVariable1 = expresionEnlazada1
    nombreVariable2 = expresionEnlazada2
    -- más definiciones locales si es necesario
```
Aquí, `nombreVariable1`, `nombreVariable2`, etc., son variables locales que se pueden utilizar en `expresionPrincipal`. La sección `where` aparece después de la expresión principal y contiene las definiciones locales.
## Ejemplo 1 - Cálculo de la hipotenusa de un triángulo rectángulo
```haskell
calcularHipotenusa :: Double -> Double -> Double
calcularHipotenusa a b = sqrt (cuadrado a + cuadrado b)
  where
    cuadrado x = x * x
```
En este ejemplo, `cuadrado` es una función local definida con `where` y se utiliza en la expresión principal para calcular la hipotenusa de un triángulo rectángulo.
## Ejemplo 2 - Cálculo del IMC con información adicional
```haskell
calcularIMC :: Double -> Double -> String
calcularIMC peso altura
    | imc <= 18.5 = "Bajo peso"
    | imc <= 24.9 = "Normal"
    | imc <= 29.9 = "Sobrepeso"
    | otherwise   = "Obesidad"
  where
    imc = peso / altura ^ 2
```
En este ejemplo, `imc` es una variable local definida con `where` y se utiliza en las guardas para determinar la categoría del índice de masa corporal (IMC).
## Ejemplo 3 - Generación de números aleatorios con System.Random
```haskell
import System.Random

generarNumeroAleatorio :: IO Int
generarNumeroAleatorio = do
    gen <- getStdGen
    let (numero, nuevoGen) = randomR (1, 10) gen
    setStdGen nuevoGen
    return numero
```
En este ejemplo, `numero` y `nuevoGen` son variables locales definidas con `where`. Estas variables se utilizan en la expresión principal para extraer y actualizar el generador de números aleatorios.

*En resumen, `where` en Haskell es una forma de introducir definiciones locales al final de una función para mejorar la legibilidad y modularidad del código. Puedes elegir entre `let` ([[13 - Let]]) y `where` según tus preferencias personales o la situación específica en la que estés trabajando. Ambos cumplen funciones similares, pero `where` tiene una ubicación diferente en la sintaxis.*