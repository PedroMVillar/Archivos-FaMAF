---
Materia: Algoritmos1
tags:
  - ciclos
  - derivación
---
Se tiene la terna

   { P }    ← precondición dada

     S      ←  el programa que tengo que encontrar

   { Q }   ← postcondición dada

Una vez que nos damos cuenta de que necesitamos un ciclo, debemos proponerlo y proponer su invariante (y la guarda). La técnica que use me va a dar un invariante INV y una guarda B tal que se garantiza el requisito iii: INV ∧ ¬ B ⇒ Q. Una vez que tengo el invariante y la guarda, tengo que proponer cómo va a quedar mi programa S.
S va a ser una secuenciación:
1. una inicialización S1
2. ciclo de la forma: do B → S2 od.
Es decir, el programa quedará de la forma:

   { P }  

     S1    ;    // inicialización

   { INV }

     do B →

              { INV ∧ B } 

              S2                      // cuerpo del ciclo

              { INV }

     od

   { Q }

Ahora tengo planteadas dos ternas de Hoare nuevas (dos subproblemas nuevos a resolver):

1. Inicialización (garantiza requisito i):

   { P }  

         S1  

   { INV }

2. Cuerpo del ciclo (garantiza requisito ii):

    { INV ∧ B } 

        S2 

    { INV }

"*S2 seguro no va a ser skip porque si no tengo un ciclo que no termina.*"
