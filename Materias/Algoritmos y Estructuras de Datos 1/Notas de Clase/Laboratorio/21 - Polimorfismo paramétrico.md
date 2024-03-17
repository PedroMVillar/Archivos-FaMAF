---
Materia: Algoritmos1
tags:
  - haskell
---
El polimorfismo en Haskell es un concepto fundamental que se refiere a la capacidad de una función o un tipo de datos para trabajar con distintos tipos. Haskell es un lenguaje de programación fuertemente tipado y utiliza el polimorfismo para expresar la generalidad y flexibilidad en la escritura de programas.
El polimorfismo de tipo o paramétrico implica la definición de funciones o tipos que pueden trabajar con varios tipos de datos sin especificar exactamente qué tipo de datos están siendo utilizados. Se parametriza la función o el tipo con uno o más tipos genéricos.

### Ejemplo
```haskell
longitud :: [a] -> Int
longitud lista = case lista of
  []     -> 0
  (_:xs) -> 1 + longitud xs
```
En este caso, `a` es un tipo de variable que representa cualquier tipo. La función `longitud` puede trabajar con listas de cualquier tipo, lo que la hace polimórfica en el tipo de elementos de la lista.