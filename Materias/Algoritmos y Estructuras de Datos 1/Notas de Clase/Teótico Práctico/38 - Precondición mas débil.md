---
Materia: Algoritmos1
tags:
  - wp
---
Para cada comando S se puede definir la función
<center>wp.S : Predicados → Predicados</center>
tal que si Q es un predicado, wp.S.Q representa el predicado más débil P para el cual vale {P} S {Q}. Para cada Q, wp.S.Q se denomina precondición más débil de S con respecto a Q (en ingles, weakest precondition).
La definición de wp.S permite relacionar las expresiones {P} S {Q} y wp.S.Q:
<center>{P} S {Q} ≡ [P ⇒ wp.S.Q]</center>
## WP de la asignación
Supongamos que tenemos la siguiente asignación S:

v1, v2, …, vn := E1, E2, …, En

y una postcondición Q. Luego, la weakest precondition para S y Q es el siguiente predicado:

wp.S.Q  ≡  Q(v1 ← E1, v2 ← E2, ...., vn ← En)

Esto es, tomar la postcondición, y reemplazar cada variable asignada por la expresión que lleva asignada.

## WP del skip
{ P } skip { Q } si y sólo sí P ⇒ Q
Luego. la weakest precondition para S y Q es:

wp.skip.Q = Q

## WP del condicional
{ P } if b1 → c1 [] b2 → c2 fi { Q } si y sólo
1. P ⇒ b1 ∨ b2
2. { P ∧ b1 } c1 { Q} y { P ∧ b2 } c2 { Q}


wp.(if b1 → c1 [] b2 → c2 fi).Q = (b1 ∨ b2) ∧ (b1 ⇒ wp.c1.Q) ∧ (b2 ⇒ wp.c2.Q)


