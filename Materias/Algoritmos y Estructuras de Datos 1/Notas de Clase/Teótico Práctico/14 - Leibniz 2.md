---
Materia: Algoritmos1
tags:
  - axiomas
---
$$
e = f ∧ E(z := e) ≡ e = f ∧ E(z := f)
$$
El axioma T11 Leibniz establece que si tengo una conjunción entre una igualdad y una segunda expresión, en la segunda expresión puedo hacer reemplazo de iguales por iguales según indica la igualdad.
### Ejemplo
i = 37 ∧ x mod i = 2 ≡ i = 37 ∧ x mod 37 = 2
- “e” es i  
- “f” es 37  
- “E(z := e)” es x mod i = 2  
- Para que esto suceda, E debe ser (x mod z = 2).