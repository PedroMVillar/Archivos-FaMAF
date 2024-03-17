---
Materia: Algoritmos1
tags:
---
$$
〈 ⊕ i : R.i ∨ S.i : T.i 〉= 〈 ⊕ i : R.i : T.i 〉⊕ 〈 ⊕ i : S.i : T.i 〉
$$
siempre que suceda la menos una de estas dos cosas:  
- $⊕$ es idempotente,  
- $R$ y $S$ son disjuntos.

El Axioma A3, conocido como "Partición de Rango", establece que cuando tenemos variables cuantificadas en una expresión, podemos dividir el rango en subconjuntos más pequeños y aplicar el término correspondiente a cada uno de ellos.

### Ejemplo
〈 ∀ i : ( -1 ≤ i < 1 ) ∨ ( 8 ≤ i < 11 ) : T.i 〉   
= { partición de rango }
〈 ∀ i : ( -1 ≤ i < 1 ) : T.i 〉 ∧ 〈 ∀ i : ( 8 ≤ i < 11 ) : T.i 〉