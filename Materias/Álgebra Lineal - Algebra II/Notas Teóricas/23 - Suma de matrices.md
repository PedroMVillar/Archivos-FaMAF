---
Materia: Álgebra
tags:
  - matrices
---
Sean $A=[a_{ij}]$, $B=[b_{ij}]$ matrices  $m \times n$. La matriz $C= [a_{ij} + b_{ij}]$ de orden $m \times n$,  es decir la matriz cuyo valor en la posición $ij$ es  $a_{ij} + b_{ij}$, es llamada la *suma de las matrices* $A$ y $B$ y se denota $A+B$. En otras palabras, la suma de dos matrices es la matriz que resulta de sumar *coordenada a coordenada ambas matrices*. 

## Propiedades
- **1.** Conmutativa: $A + B = B + A$,
- **2.** Asociativa: $A + (B + C) = (A + B) + C$,
- **3.** Elemento neutro (la matriz nula): $A + 0 = 0 + A = A$,
- **4.** Elemento opuesto: existe una matriz $-A$ de orden $m \times n$ tal que $A + (-A) = (-A) + A = 0$.

### Demostración
- Conmutatividad:
$$
A + B = [a_{ij} + b_{ij}] = [b_{ij} + a_{ij}] = B + A
$$
La segunda igualdad se cumple ya que la matriz está contenida en un cuerpo $K$.

- Asociatividad:
$$
A + (B + C) = [a_{ij} + (b_{ij}+c_{ij})] = [(a_{ij} + b_{ij}) +c_{ij}] = (A+B)+C 
$$
La segunda igualdad se cumple ya que la matriz está contenida en un cuerpo $K$.
- Elemento neutro: 
$$
A + 0 = [ a_{ij}+0] = [a_{ij}] = A
$$
- Elemento opuesto
$$
A + (-A) = [ a_{ij} + (-a_{ij})] =[0] = 0
$$