---
Materia: Algoritmos1
tags:
  - axiomas
---
$$
〈 ⊕ i , j : R.i ∧ S.i.j : T.i.j 〉= 〈 ⊕ i : R.i : 〈 ⊕ j : S.i.j : T.i.j 〉 〉
$$
Requisitos:  
- R.i no menciona a “j”, puede mencionar a “i” pero no obligatoriamente  
- S.i.j puede mencionar a “i” y “j”, pero no obligatoriamente.

### Ejemplo
〈 ∑ i , j : 7 ≤ i < 10 ∧ i mod j = 0 ∧ j > 0 : T.i.j 〉  
= { R.i es 7 ≤ i < 10 , S.i.j es i mod j = 0 ∧ j > 0, aplicamos anidado }  
〈 ∑ i : 7≤ i < 10 : 〈 ∑ j : i mod j = 0 ∧ j > 0 : T.i.j 〉 〉