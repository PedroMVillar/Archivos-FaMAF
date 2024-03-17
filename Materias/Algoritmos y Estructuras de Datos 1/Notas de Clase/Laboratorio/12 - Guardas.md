---
Materia: Algoritmos1
tags:
  - haskell
  - guardas
---
Las *guardas* en Haskell son expresiones booleanas que se utilizan para **especificar condiciones** adicionales en las definiciones de funciones. Permiten seleccionar diferentes implementaciones de una función basándose en condiciones específicas. Las guardas son una forma de extender la expresividad de las definiciones de funciones en Haskell más allá de lo que se puede lograr mediante el "pattern matching" convencional.
## Sintaxis general
La sintaxis general de una función con guardas es la siguiente:
```haskell
nombreFuncion :: TipoArgumento1 -> TipoArgumento2 -> ... -> TipoResultado
nombreFuncion argumento1 argumento2 ...
  | condicion1 = resultado1
  | condicion2 = resultado2
  | condicion3 = resultado3
  | otherwise  = resultadoPorDefecto
```
Donde:
- `nombreFuncion` es el nombre de la función.
- `TipoArgumento1`, `TipoArgumento2`, etc., son los tipos de los argumentos de la función.
- `condicion1`, `condicion2`, etc., son expresiones booleanas que se evalúan para decidir qué rama de la función ejecutar.
- `resultado1`, `resultado2`, etc., son los resultados correspondientes a las condiciones que se cumplen.
- `otherwise` es una palabra clave que se utiliza como una especie de "else" para indicar la rama por defecto si ninguna de las condiciones es verdadera.
- `resultadoPorDefecto` es el resultado que se devuelve si ninguna de las condiciones es verdadera.

## Ejemplo 1 - Función para determinar si un número es positivo, negativo o cero
```haskell
tipoNumero :: Int -> String
tipoNumero n
  | n > 0     = "Positivo"
  | n < 0     = "Negativo"
  | otherwise = "Cero"
```
En este ejemplo, la función `tipoNumero` utiliza guardas para verificar si un número es positivo, negativo o cero. Dependiendo de la condición que se cumpla, se devuelve una cadena indicando el tipo de número.
## Ejemplo 2 - Función para calcular el índice de masa corporal (IMC) y dar una clasificación
```haskell
calcularIMC :: Double -> Double -> String
calcularIMC peso altura
  | imc <= 18.5 = "Bajo peso"
  | imc <= 24.9 = "Normal"
  | imc <= 29.9 = "Sobrepeso"
  | otherwise   = "Obesidad"
  where
    imc = peso / (altura ^ 2)
```
En este ejemplo, la función `calcularIMC` utiliza guardas para clasificar a una persona según su índice de masa corporal. La condición de cada guarda se basa en rangos específicos de IMC, y la clasificación correspondiente se devuelve.
## Ejemplo 3 - Función para determinar el día de la semana
```haskell
diaSemana :: Int -> String
diaSemana n
  | n >= 1 && n <= 5 = "Día laboral"
  | n == 6 || n == 7 = "Fin de semana"
  | otherwise        = "Número de día inválido"
```
En este ejemplo, la función `diaSemana` toma un número entero `n` que representa un día de la semana (1 para lunes, 2 para martes, etc.). Las guardas se utilizan para clasificar el día como laboral, de fin de semana o inválido según el rango en el que caiga.
## Ejemplo 4 - Función para determinar la categoría de edad
```haskell
categoriaEdad :: Int -> String
categoriaEdad edad
  | edad < 0            = "Edad inválida"
  | edad < 12           = "Niño"
  | edad < 18           = "Adolescente"
  | edad < 65           = "Adulto"
  | otherwise           = "Adulto mayor"
```
En este ejemplo, la función `categoriaEdad` utiliza guardas para asignar una categoría de edad en función del valor de la variable `edad`.
## Ejemplo 5 - Función para convertir una calificación numérica en una letra
```haskell
calificacionLetra :: Double -> String
calificacionLetra calificacion
  | calificacion < 0 || calificacion > 100 = "Calificación inválida"
  | calificacion >= 90                     = "A"
  | calificacion >= 80                     = "B"
  | calificacion >= 70                     = "C"
  | calificacion >= 60                     = "D"
  | otherwise                              = "F"
```
En este ejemplo, la función `calificacionLetra` utiliza guardas para convertir una calificación numérica en una letra según el sistema de calificación tradicional.