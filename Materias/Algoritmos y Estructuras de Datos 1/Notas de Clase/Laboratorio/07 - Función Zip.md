---
Materia: Algoritmos1
tags:
  - listas
  - tuplas
  - haskell
---
Una función que *produce listas de duplas* es zip. Esta función **toma dos listas y las une en un lista uniendo sus elementos en una dupla.** Es una función realmente simple pero tiene montones de usos. Es especialmente útil cuando queremos combinar dos listas de alguna forma o recorrer dos listas simultáneamente. Por ejemplo:
```ghci
ghci> zip [1,2,3,4,5] [5,5,5,5,5]
[(1,5),(2,5),(3,5),(4,5),(5,5)]
ghci> zip [1 .. 5] ["uno","dos","tres","cuatro","cinco"]
[(1,"uno"),(2,"dos"),(3,"tres"),(4,"cuatro"),(5,"cinco")]
```
Se emparejan los elementos produciendo una nueva lista. El primer elemento va el primero, el segundo el segundo, etc. Como las duplas pueden tener diferentes tipos, zip puede tomar dos listas que contengan diferentes tipos y combinarlas. Simplemente se recorta la lista más larga para que coincida con el tamaño de la más corta.
```ghci
ghci> zip [5,3,2,6,2,7,2,5,4,6,6] ["soy","una","tortuga"]
[(5,"soy"),(3,"una"),(2,"tortuga")]
```
Como Haskell es perezoso, podemos usar zip usando listas finitas e infinitas:
```ghci
ghci> zip [1..] ["manzana", "naranja", "cereza", "mango"]
[(1,"manzana"),(2,"naranja"),(3,"cereza"),(4,"mango")]
```
