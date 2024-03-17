---
Materia: Algoritmos1
tags:
  - tuplas
  - haskell
---
De alguna forma, las tuplas son parecidas a las listas. Ambas son una forma de almacenar varios valores en un solo valor. Sin embargo, hay unas cuantas diferencias fundamentales. Una lista de números es una lista de números. Ese es su tipo y no importa si tiene un sólo elemento o una cantidad infinita de ellos. Las tuplas sin embargo, *son utilizadas cuando sabes exactamente cuantos valores tienen que ser combinados y su tipo depende de cuantos componentes tengan y del tipo de estos componentes*. Las tuplas **se denotan con paréntesis y sus valores se separan con comas**.
## Uso
Utilizamos la tuplas *cuando sabemos de antemano cuantos componentes* de algún dato debemos tener. Las tuplas son mucho más rígidas que las listas ya que para cada tamaño tienen su propio tipo, así que no podemos escribir una función general que añada un elemento a una tupla: tenemos que escribir una función para añadir duplas, otra función para añadir triplas, otra función para añadir cuádruplas, etc.

## Funciones
Como las listas, las tuplas pueden ser comparadas si sus elementos pueden ser comparados. Solo que no podemos comparar dos tuplas de diferentes tamaños mientras que si podemos comparar dos listas de diferentes tamaños. Dos funciones útiles para operar con duplas son:
- `fst` toma una dupla y devuelve su primer componente.
```ghci
ghci> fst (8,11)
8
ghci> fst ("Wow", False)
"Wow"
```
- `snd` toma una dupla y devuelve su segundo componente. 
```ghci
ghci> snd (8,11)
11
ghci> snd ("Wow", False)
False
```