---
Materia: Algoritmos1
tags:
  - funciones
  - haskell
---
Para crear una función en haskell se sigue el siguiente esquema:
![[FuncionT.mp4]]
Luego seguido del tipado de la función con sus respectivos parámetros, se define como va a actuar la función con dichos parámetros, este tema se ve mas a fondo en [[11 - Pattern Matching]] 
Es decir, por ejemplo una función que sume dos números podría ser:
```haskell
suma :: Int -> Int -> Int
suma x y =  x+y
```
