---
Materia: Algoritmos1
tags:
  - axiomas
---
$$
〈 ⊕ i : R.i : T.i \ ⓧ \ C 〉= 〈 ⊕ i : R.i : T.i 〉\ ⓧ \ C
$$
Requisitos:  
- C es constante (las variables cuantificadas no aparecen mencionadas en C)  
- ⊕ y ⓧ son dos operaciones de tipo A → A → A.  
- ⓧ distribuye con ⊕ a derecha: ( x ⓧ y ) ⊕ ( z ⓧ y ) = ( x ⊕ z ) ⓧ y
- R es no vacío, o bien el neutro de ⊕ es absorbente para ⓧ.

| ( ⊕ ) Cuantificador | (⊗) distribuye con (⊕) |
| ---- | ---- |
| ∀ | ∨ |
| ∃ | ∧ |
| $\sum$ | × |
| $\Pi$ |  |
| Max | + |
| Min | + |
### Ejemplo
⟨Max i : 0 ≤ i < \#xs : k + xs!i ⟩  
= { conmutatividad }  
⟨Max i : 0 ≤ i < \#xs : xs!i + k ⟩
= { distributividad a derecha }
⟨Max i : 0 ≤ i < \#xs : xs!i ⟩ + k


