---
Materia: Algoritmos1
tags:
  - skip
---
La sentencia skip no tiene ningún efecto sobre el estado válido antes de su ejecución (no lo modifica). La utilidad de una instrucción que “no hace nada” se entenderá más adelante, pero podemos adelantar que será tan útil como lo es el 0 en el ´algebra.
Claramente, el predicado más débil P tal que {P} skip {Q} es Q, pues lo mínimo necesario para asegurar el estado final Q cuando “no se hace nada” es tener Q como estado inicial. Por lo tanto, la precondición más débil del comando skip con respecto a un predicado es dicho predicado:
<center>wp.skip.Q ≡ Q</center>
Esto podría inducirnos a caracterizar skip usando la terna {Q} skip {Q} como axioma, pero como ya hemos visto que es posible reforzar la precondición, daremos una caracterización más general en términos de una equivalencia:
<center>{P} skip {Q} ≡ [P ⇒ Q]</center>

## Ejemplo
El programa:

var x : Int 
{x ≥ 1} 
skip 
{x ≥ 0} 

es correcto, puesto que [x ≥ 1 ⇒ x ≥ 0].