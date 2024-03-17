---
Materia: Algoritmos1
tags:
  - haskell
  - tipos
---
Podemos ver el tipo de una función ejecutando el comando `:t` en la consola, por ejemplo:
```ghci
ghci> :t head
head :: [a] -> a
```
En este caso `a` es una **variable de tipo**. Esto significa que a puede ser cualquier tipo. Estos datos son mucho más potentes ya que nos permite definir fácilmente funciones muy generales siempre que no hagamos ningún uso especifico del tipo en cuestión. Las funciones que tienen variables de tipos son llamadas **funciones polimórficas**. La declaración de tipo head representa una función que toma una lista de cualquier tipo y devuelve un elemento de ese mismo tipo.