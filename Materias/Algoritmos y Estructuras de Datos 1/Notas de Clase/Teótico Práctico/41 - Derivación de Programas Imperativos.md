---
Materia: Algoritmos1
tags:
  - derivación
---
La derivación consiste en encontrar el programa de la siguiente terna:

{ P }          ← precondición dada

   S   ???   ←  el programa que tengo que encontrar

{ Q }         ← postcondición dada

Hay dos formas de obtener el S:
- directamente con un predicado asociado a la Terna
- usando la wp y demostrando el predicado: “P ⇒ wp.S.Q”.