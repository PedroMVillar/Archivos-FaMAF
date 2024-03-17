---
Materia: Algoritmos1
tags:
  - especificacion
---
En programación imperativa, una especificación es una descripción formal del problema que se quiere resolver a través de una precondición y una postcondición.
Debe incluirse también la declaración de las constantes y variables que definen el problema.

## Notación
        Var …

        {  P  }   ← precondición (predicado explícito)

          S        ← programa incógnita (letra S)

         { Q }    ← postcondición (predicado explícito)**
## Ejemplos
<u>“Dado un número entero N > 0, queremos contar cuántos números entre 0 y N son múltiplos de 6.”</u>

Const N : Int;
Var resultado : Int;
{  N > 0 }
S
{  resultado = 〈 N i : 0 ≤ i ≤ N : i mod 6 = 0 〉 }


<u>"Dado N ≥ 0, calcular el factorial de N."</u>

Const N : Int ;
Var factorial : Int ; 
{  P:  N ≥ 0 }
       S        
{ Q: factorial = 〈 ∏ i : 1 ≤ i ≤ N : i 〉}
        
