---
Materia: Algoritmos1
tags:
  - axiomas
---
$$
〈 ⊕ i : R.i : T.i ⊕ U.i 〉= 〈 ⊕ i : R.i : T.i 〉⊕〈 ⊕ i : R.i : U.i 〉
$$
La Regla del Término, también conocida como Axioma A4, establece que dos expresiones son equivalentes si se trata de un reacomodo de los términos utilizando la asociatividad y conmutatividad.
### Ejemplo 
〈 ∏ i : i mod 2 = 1 ∧ | i - 10 | ≤ 3 : i \* (10 - i) 〉  
= { regla del término (A4) con T.i = i , U.i = 10 - i }  
〈 ∏ i : i mod 2 = 1 ∧ | i - 10 | ≤ 3 : i 〉\* 〈 ∏ i : i mod 2 = 1 ∧ | i - 10 | ≤ 3 : (10 - i) 〉