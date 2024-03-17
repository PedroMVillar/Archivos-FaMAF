---
Materia: Algoritmos1
tags:
  - haskell
  - tipos
---
- `Int` representa enteros. Se utiliza para representar *número entero*s, por lo que 7 puede ser un `Int` pero 7.2 no puede. `Int` está acotado, lo que significa que tiene un valor máximo y un valor mínimo. Normalmente en máquinas de 32bits el valor máximo de `Int` es 2147483647 y el mínimo -2147483648.
- `Integer` representa enteros también. La diferencia es que no están acotados así que pueden representar números muy grandes. Sin embargo, `Int` es más eficiente.
Por ejemplo un uso puede ser el siguiente:
```haskell
factorial :: Integer -> Integer
factorial n = product [1..n]
```
```ghci
ghci> factorial 50
30414093201713378043612608166064768844377641568960512000000000000
```
- `Float` es un número real en coma flotante de simple precisión.
```haskell
circumference :: Float -> Float
circumference r = 2 * pi * r
```
```ghci
ghci> circumference 4.0
25.132742
```
- `Double` es un número real en coma flotante de doble precisión.
```haskell
circumference' :: Double -> Double
circumference' r = 2 * pi * r
```
```ghci
ghci> circumference' 4.0
25.132741228718345
```
- `Bool` es el tipo booleano. Solo puede tener dos valores: `True` o `False`.
- `Char` representa un carácter. Se define rodeado por comillas simples. Una lista de caracteres es una cadenao o string.