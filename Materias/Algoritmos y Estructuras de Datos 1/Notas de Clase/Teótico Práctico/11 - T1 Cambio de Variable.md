---
Materia: Algoritmos1
tags:
  - axiomas
---
$$
〈 ⊕ i : R.i : T.i 〉= 〈 ⊕ j : R.(f.j) : T.(f.j) 〉
$$
Requisitos:  
- f es una función biyectiva cuya imagen es el conjunto definido por el rango R.i.  
- j no aparece mencionada en R ni en T.

El axioma T1 Cambio de Variable establece que "podemos aplicar cambio de variable Ejercicio aplicarlo verificar que da lo mismo usando la lectura operacional de ambas versiones". Es decir, se puede sustituir una variable por otra siempre y cuando se verifique que el resultado es el mismo utilizando la lectura operacional de ambas versiones. Además, se debe tener cuidado de no mezclar dos variables distintas y evitar pisar nombres de variables.

### Ejemplo
〈 ∑ i : 24 < i ≤ 29 : i * 2 - 10 〉
= { propongo usar cambio de variable con la función f.j = j - 11 }  
〈 ∑ j : 24 < (f.j) ≤ 29 : (f.j) * 2 - 10 〉  
= { sustituyo f por lo que es }  
〈 ∑ j : 24 < j - 11 ≤ 29 : (j - 11) * 2 - 10 〉  
= { aritmética }  
〈 ∑ j : 35 < j ≤ 40 : (j - 11) * 2 - 10 〉