---
Materia: Algoritmos1
tags:
  - haskell
  - listas
---
- `head` toma una lista y devuelve su cabeza. La cabeza de una lista es básicamente el primer elemento.
```ghci
ghci> head [5,4,3,2,1]
5
```
- `tail` toma una lista y devuelve su cola. En otros palabras, corta la cabeza de la lista.
```ghci
ghci> tail [5,4,3,2,1]
[4,3,2,1]
```
- `last` toma una lista y devuelve su último elemento.
```ghci
ghci> last [5,4,3,2,1]
1
```
- `init` toma una lista y devuelve toda la lista excepto su último elemento.
```ghci
ghci> init [5,4,3,2,1]
[5,4,3,2]
```
- `length` toma una lista y obviamente devuelve su tamaño.
```ghci
ghci> length [5,4,3,2,1]
5
```
- `null` comprueba si una lista está vacía. Si lo está, devuelve True, en caso contrario devuelve False. Usa esta función en lugar de `xs == []` (si tienes una lista que se llame xs).
```ghci
ghci> null [1,2,3]
False
ghci> null []
True
```
- `reverse` pone del revés una lista.
```ghci
ghci> reverse [5,4,3,2,1]
[1,2,3,4,5]
```
- `take` toma un número y una lista y extrae dicho número de elementos de una lista. 
```ghci
ghci> take 3 [5,4,3,2,1]
[5,4,3]
ghci> take 1 [3,9,3]
[3]
ghci> take 5 [1,2]
[1,2]
ghci> take 0 [6,6,6]
[]
```
- `drop` funciona de forma similar, solo que quita un número de elementos del comienzo de la lista.
```ghci
ghci> drop 3 [8,4,2,1,5,6]
[1,5,6]
ghci> drop 0 [1,2,3,4]
[1,2,3,4]
ghci> drop 100 [1,2,3,4]
[]
```
- `maximum` toma una lista de cosas que se pueden poner en algún tipo de orden y devuelve el elemento más grande.
- `minimum` devuelve el más pequeño.
```ghci
ghci> minimum [8,4,2,1,5,6]
1
ghci> maximum [1,9,2,3,4]
9
```
- `sum` toma una lista de números y devuelve su suma.
- `product` toma una lista de números y devuelve su producto.
```ghci
ghci> sum [5,2,1,6,3,2,5,7]
31
ghci> product [6,2,1,2]
24
ghci> product [1,2,5,6,7,9,2,0]
0
```
