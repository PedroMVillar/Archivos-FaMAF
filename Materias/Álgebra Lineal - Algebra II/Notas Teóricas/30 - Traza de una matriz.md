---
Materia: Álgebra
tags:
  - matrices
  - traza
---
Sea $A=[a_{ij}]\in M_n(K)$. Se llama traza de $A$ y se representa por $tr A$, a la suma de los elementos de la diagonal principal de $A$, es decir: $$tr A = a_{11}+a_{22}+...+a_{nm} = \sum_{i=1}^{n}a_{ii}$$


## Propiedades
- $tr (A+B) = tr A + tr B,$
- $tr(\lambda A) = \lambda tr A,$
- $tr(AB)=tr(BA)$
- $AB-BA\neq I$

### Demostración
- $tr (A+B) = tr A + tr B,$
$$
tr (A+B) = \sum_{i=1}^{n}(a_{ii} + b_{ii}) = \sum_{i=1}^{n}a_{ii} + \sum_{i=1}^{n}b_{ii} = tr A + tr B
$$
- $tr(\lambda A) = \lambda tr A,$
$$
tr(\lambda A) = \sum_{i=1}^{n}\lambda a_{ii} = \lambda \sum_{i=1}^{n}a_{ii} = \lambda tr A
$$
- $tr(AB)=tr(BA)$
$$
tr(AB)= \sum_{i=1}^{n} \left ( \sum_{k=1}^{n} a_{ik}b_{kj}\right) = \sum_{i=1}^{n} \sum_{k=1}^{n} a_{ik}b_{kj} 
$$
$$
tr(BA)= \sum_{i=1}^{n} \left ( \sum_{k=1}^{n} b_{ik}a_{kj}\right) = \sum_{i=1}^{n} \sum_{k=1}^{n} b_{ik}a_{kj} 
$$
Es claro que en ambas expresiones aparecen exactamente los mismos sumandos, por ejemplo $a_{23}b_{32}$ de la primera expresión que corresponde a $i=2$ $k=3$ es el sumando de la segunda que corresponde a $i=3$ $k=2$. Y por lo tanto, se concluye que $tr(AB)=tr(BA)$.
- $AB-BA\neq I$
Supongamos que $AB-BA = I$, tomando trazas en la igualdad,
$$
	tr(AB-BA) = tr I = n
$$
Pero desarrollando el lado izquierdo
$$
tr(AB-BA) = tr (AB + (-1)BA) = tr(AB) + (-1)tr(BA) = tr(AB)-tr(BA) = tr(AB)-tr(AB) = 0
$$
Es decir, llegamos a un absurdo ya que $n=0$ no tiene sentido.