---
Materia: Algoritmos1
tags:
  - haskell
  - listas
---
En Haskell, las listas son una estructura de datos **homogénea**. Almacena varios elementos del mismo tipo. Esto significa que podemos crear una lista de enteros o una lista de caracteres, pero no podemos crear una lista que tenga unos cuantos enteros y otros cuantos caracteres. Por ejemplo:
```ghci
ghci> let lostNumbers = [4,8,15,16,23,42]
ghci> lostNumbers 
[4,8,15,16,23,42]
```

*Podemos usar la palabra reservada let para definir algo dentro de GHCi. Hacer let a = 1 dentro de GHCi es equivalente ha escribir a = 1 en un archivo y luego cargarlo.*
==Las listas se definen mediante corchetes y sus valores se separan por comas.==
## Concatenación de Listas
Una tarea común es concatenar dos listas. Se hace con el operador ++.
```ghci
ghci> [1,2,3,4] ++ [9,10,11,12]
[1,2,3,4,9,10,11,12]
ghci> "hello" ++ " " ++ "world"
"hello world"
ghci> ['w','o'] ++ ['o','t']
"woot"
```
## Operador "cons"
Cuando concatenamos dos listas (incluso si añadimos una lista de un elemento a otra lista, por ejemplo [1,2,3] ++ [4], internamente, Haskell tiene que recorrer la lista entera desde la parte izquierda del operador ++. Esto no supone ningún problema cuando trabajamos con listas que no son demasiado grandes. En caso de necesitarlo, concatenar algo al principio de una lista utilizando el operador : (también llamado operador *cons*) es instantáneo.
```ghci
ghci> 'U':"n gato negro"
"Un gato negro"
ghci> 5:[1,2,3,4,5]
[5,1,2,3,4,5]
```
La diferencia con respecto al operador `++` es que : toma un número y una lista de números o un carácter y una lista de caracteres, mientras que ++ toma dos listas. Incluso si añades un elemento al final de las lista con ++, hay que rodearlo con corchetes para que se convierte en una lista de un solo elemento.
```ghci
ghci> [1,2] ++ 3
<interactive>:1:10:
    No instance for (Num [a0])
      arising from the literal `3'
      [...]

ghci> [1,2] ++ [3]
[1,2,3]
```
Con esto se podría decir que: *[1,2,3] es una alternativa sintáctica de 1:2:3:[]. [] es una lista vacía. Si anteponemos 3 a ella con :, obtenemos [3], y si anteponemos 2 a esto obtenemos [2,3].*

## Indexación
Si queremos obtener un elemento de la lista sabiendo su índice, utilizamos `!!`. Los índices empiezan por 0.
```ghci
ghci> "Steve Buscemi" !! 6
'B'
ghci> [9.4,33.2,96.2,11.2,23.25] !! 1
33.2
```
