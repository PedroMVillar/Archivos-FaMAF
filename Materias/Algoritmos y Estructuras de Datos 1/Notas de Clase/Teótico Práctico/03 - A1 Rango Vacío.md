---
Materia: Algoritmos1
tags:
  - axiomas
---
$$
〈⊕ \ i : False : T.i 〉= e
$$
- donde $e$ es el neutro de $⊕$ $(e ⊕ X = X)$

El axioma *A1: Rango Vacío* establece que cuando no hay ningún valor posible para las variables cuantificadas que satisfaga el rango, el resultado es un conjunto vacío. 
### Ejemplo:  
〈 Max i : i mod 2 = 0 ∧ i > 10 ∧ i < 12 : i \* 2 〉  
= { propiedad de los enteros que me dice que i > 10 ∧ i < 12 es lo mismo que i = 11 }  
〈 Max i : i mod 2 = 0 ∧ i = 11 : i \* 2 〉  
= { reemplazo de iguales por iguales en la conjunción (Leibniz 2) }  
〈 Max i : 11 mod 2 = 0 ∧ i = 11 : i \* 2 〉  
= { 11 mod 2 es 1 }  
〈 Max i : 1 = 0 ∧ i = 11 : i \* 2 〉  
= { lógica }  
〈 Max i : False ∧ i = 11 : i \* 2 〉  
= { lógica (absorvente de ∧ ) }  
〈 Max i : False : i \* 2 〉  
= { rango vacío (A1), ya que - infinito es el neutro de max }
$-\infty$