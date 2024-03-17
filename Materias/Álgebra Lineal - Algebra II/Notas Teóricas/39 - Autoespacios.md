---
Materia: Álgebra
tags:
  - autovalores/vectores/espacios
  - matrices
---
Sea $A\in K^{n\times n}$ y $\lambda\in K$ un autovalor de $A$. El *autoespacio* asociado a $\lambda$ es $$V_\lambda= \{v\in K^n\mid Av=\lambda v\}.$$ Es decir, $V_\lambda$ es el conjunto  formado por todos los autovectores asociados a $\lambda$ y el vector nulo.


### Teorema
Sea $A$ matriz $n \times n$ y $\lambda \in K$. Si $v,w$ pertenecen a $V_\lambda$, el autoespacio de $A$ asociado a $\lambda$, entonces $v+tw \in V_\lambda$ para cualquier $t \in K$. 

#### Demostración
$$A(v+tw)=Av+tAw=\lambda v+t\lambda w=\lambda(v+tw). $$


### Proposición
Sea $A$ matriz  $n \times n$ y $v,w \in K^n$ autovectores con autovalores $\lambda, \mu \in K$,  respectivamente. Entonces.  $\lambda \ne \mu$ implica que $v \ne w$. Es decir, autovectores con autovalores distintos son distintos.

#### Demostración
Supongamos que $v = w$,  entonces  $Av=\lambda v$ y $Av=\mu v$. Luego, $\lambda v=\mu v$ y por lo tanto $$ (\lambda-\mu) v=\left[ \begin{array}{c} (\lambda-\mu)v_1\\ \vdots\\(\lambda-\mu)v_n \end{array} \right] = \left[ \begin{array}{c} 0\\ \vdots\\0 \end{array} \right] $$

### Proposición
 $\lambda\in K$ es un autovalor de $A$ y $v\in K^n$ es un autovector asociado a $\lambda$ si y sólo si
 - $\det(\lambda Id-A)=0$
 - $v$ es solución del sistema homogéneo $(\lambda Id-A)X=0$


