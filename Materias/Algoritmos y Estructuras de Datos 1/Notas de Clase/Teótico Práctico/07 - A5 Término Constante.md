---
Materia: Algoritmos1
tags:
  - axiomas
---
$$
〈 ⊕ i : R.i : C 〉= C
$$
Sólo vale cuando el operador ⊕ es idempotente en el valor C, además, el rango debe ser no vacío.
El Axioma A5: Término Constante establece que **"el término de la expresión cuantificada no menciona las variables cuantificadas"**. Esto significa que cuando se aplica este axioma, el operador debe ser idempotente en el valor dado y el rango debe ser no vacío. Si el rango es vacío, entonces se obtiene el elemento neutro.

### Ejemplo
〈 ∀ xs : \#xs = 2 ∧ (xs!0) \* (xs!1) = 1 : xs = [ ] ∨ xs ≠ [ ] 〉  
= { tercero excluido }  
〈 ∀ xs : \#xs = 2 ∧ (xs!0) \* (xs!1) = 1 : True 〉
= { término constante }  
True