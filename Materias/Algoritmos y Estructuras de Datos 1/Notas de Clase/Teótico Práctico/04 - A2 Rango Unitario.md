---
Materia: Algoritmos1
tags:
  - axiomas
---
$$
〈⊕ \ i : i = C : T.i 〉= T.C
$$
El Axioma A2 establece que cuando la variable cuantificada tiene un solo valor posible, el rango es un conjunto de un solo elemento, lo que se conoce como "rango unitario".

### Ejemplo
〈 Max i : i mod 2 = 1 ∧ i = 11 : i \* 2 〉  
= { reemplazo de iguales por iguales en la conjunción (Leibniz) }  
〈 Max i : 11 mod 2 =1 ∧ i = 11 : i \* 2 〉  
= { 11 mod 2 es 1 }  
〈 Max i : 1 = 1 ∧ i = 11 : i \* 2 〉  
= { lógica }  
〈 Max i : True ∧ i = 11 : i \* 2 〉  
= { lógica (neutro de ∧ ) }  
〈 Max i : i = 11 : i * 2 〉  
= { rango unitario (A2) }
11 \* 2
