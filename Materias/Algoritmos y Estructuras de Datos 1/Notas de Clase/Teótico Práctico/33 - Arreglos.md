---
Materia: Algoritmos1
tags:
---
**El arreglo define una colección de valores ordenada y de tamaño fijo.**
Se puede ver como una lista de programación funcional pero de largo fijo. No existe el concepto de agregar o quitar elementos en un arreglo (tampoco de concatenar arreglos).

## Declaración

<center>Const A: Array[N, M) of "tipo1" </center>
Esto quiere decir: "Tengo un arreglo de (M - N) elementos de tipo "tipo1, cuyos índices son N, N+1, N+2, …. , M-1."

- "tipo1" puede ser cualquier tipo válido, incluso otro arreglo (e.g. para definir matrices o arreglos multidimensionales).
- los arreglos son siempre “cerrado/abierto” (o sea “[“ / “)” ).
- por lo general usaremos letras mayúsculas para variables que contienen arreglos.
- por lo general usaremos N = 0.
- A.i es el valor que está en la posición i-ésima de A

## Ejemplo
Supongamos que tengo N > 0 y un arreglo de N elementos de tipo entero. Quiero calcular la suma de todos los elementos.
Con un ciclo, usamos una variable para recorrer las posiciones del arreglo, desde la primera hasta la última, y en otra variable vamos calculando la suma.

Const N : Int, A : Array[0, N) of Int;
Var pos, res : Int;
res, pos := 0, 0 ;
<u>**do**</u> pos < N → 

      res := res + A.pos ;

      pos := pos + 1
<u>**od**</u>
