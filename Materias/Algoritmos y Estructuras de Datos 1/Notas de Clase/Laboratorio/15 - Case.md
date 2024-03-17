---
Materia: Algoritmos1
tags:
  - haskell
---
El `case` en Haskell es una construcción que permite realizar *coincidencia de patrones de manera más extensa* que el `if` o las ecuaciones de definición de funciones. Se utiliza para examinar el valor de una expresión y seleccionar diferentes ramas de ejecución basadas en los patrones coincidentes. 
## Sintaxis general
La sintaxis general del `case` es la siguiente:
```haskell
case expresion of
  patron1 -> resultado1
  patron2 -> resultado2
  ...
  patronN -> resultadoN
```
Aquí, `expresion` es la expresión cuyo valor queremos examinar, y cada `patron` está asociado a un resultado específico. El `case` se evalúa coincidiendo el valor de la expresión con cada patrón en orden. La primera coincidencia encontrada activa la ejecución de la rama correspondiente.
## Ejemplo 1 - Función para determinar el día de la semana
```haskell
nombreDia :: Int -> String
nombreDia n =
  case n of
    1 -> "Lunes"
    2 -> "Martes"
    3 -> "Miércoles"
    4 -> "Jueves"
    5 -> "Viernes"
    6 -> "Sábado"
    7 -> "Domingo"
    _ -> "Número de día inválido"
```
En este ejemplo, la función `nombreDia` utiliza `case` para asignar nombres a los días de la semana según el número proporcionado. El guion bajo (`_`) es un comodín que coincide con cualquier valor y se utiliza como una especie de "otherwise" para el caso en que el número no sea un día de la semana válido.
## Ejemplo 2 - Función para clasificar triángulos según sus lados
```haskell
clasificarTriangulo :: Int -> Int -> Int -> String
clasificarTriangulo a b c =
  case (a == b, b == c, a == c) of
    (True, True, True)  -> "Equilátero"
    (False, False, False) -> "Escaleno"
    _                   -> "Isósceles"
```
En este ejemplo, la función `clasificarTriangulo` utiliza `case` para comparar las longitudes de los lados de un triángulo y clasificarlo como equilátero, escaleno o isósceles.
## Ejemplo 3 - Función para obtener el tipo de dato de una lista
```haskell
tipoLista :: [a] -> String
tipoLista lista =
  case lista of
    []  -> "Lista vacía"
    [x] -> "Lista con un elemento"
    xs  -> "Lista con varios elementos"
```
## Ejemplo 4 - Patrones mas complejos
```haskell
describirPar :: (Int, Int) -> String
describirPar par =
  case par of
    (0, 0)   -> "El par es el origen"
    (0, _)   -> "El primer componente es cero"
    (_, 0)   -> "El segundo componente es cero"
    (x, y)   -> "El par tiene componentes no nulos: " ++ show x ++ ", " ++ show y
```
En este ejemplo, la función `describirPar` utiliza `case` con patrones más complejos para describir un par de números de manera específica.

*En resumen, `case` en Haskell es una construcción muy flexible y poderosa que permite realizar coincidencia de patrones en expresiones y tomar decisiones basadas en diferentes casos. Puede ser utilizado en diversas situaciones para escribir código más expresivo y conciso.*