---
Materia: Álgebra
tags:
  - espacios
---
Sea $K$ cuerpo. Un *espacio vectorial* sobre $K$ o un *$K$-espacio vectorial*, consiste de  un  conjunto $V$ no vacío, cuyos elementos son llamados *vectores*, junto a  '$+$' y '$\cdot$' tal que
- $+ \ \colon \  V\times V\to V$ es una operación, llamada adición de vectores, tal que a dos vectores $v,w \in V$ les asigna otro vector $v+w \in V$,
- $\cdot \ \colon \ K\times V\to V$ es una operación tal que a $\lambda \in K$ y $v \in V$ le asigna el vector $\lambda\cdot v$ (o simplemente $\lambda v$).  La operación '$\cdot$' es llamada el producto por escalares.

Además, estas operaciones deben satisfacer 
- $[\textbf{S1.}]$ $v + w = w + v$, para $v,w \in V$ (**conmutatividad de la suma**),
- $[\textbf{S2.}]$ $(v+ w)+ u = v + (w+u)$, para $v,w,u \in V$ (**asociatividad de la suma**),
- $[\textbf{S3.}]$ existe un único vector $0$, llamado vector cero, tal que $0+ v = v + 0 =v$, para todo $v \in V$ (**existencia de elemento neutro de la suma**).
- $[\textbf{S4.}]$ Para cada $v \in V$, existe un  único vector $-v$ tal que  $v + (-v) = (-v)+ v =0$ (**existencia de opuesto o  inverso aditivo**).
- $[\textbf{P1.}]$ $1\cdot v=v$ para todo $v \in V$.
- $[\textbf{P2.}]$ $\lambda_1(\lambda_2v) = (\lambda_1\lambda_2)v$, para todo $\lambda_1,\lambda_2 \in K$ y todo $v \in V$.
- $[\textbf{D1.}]$ $\lambda(v+w) = \lambda v +\lambda w$, para todo $\lambda \in K$ y todo $v,w \in V$ (**propiedad distributiva**).
- $[\textbf{D2.}]$ $(\lambda_1+\lambda_2)v = \lambda_1v + \lambda_2 v$ para todo $\lambda_1,\lambda_2 \in K$ y todo $v \in V$ (**propiedad distributiva**).


### Proposición
Sea $V$ un espacio vectorial sobre el cuerpo $K$. Entonces,
- **1.** $\lambda\cdot 0=0$, para todo $\lambda \in K$;
- **2.** $0.v = 0$, para todo $v \in V$;
- **3.** si $\lambda \in K$, $v \in V, v\ne 0$ y $\lambda\cdot v=0$,  entonces $\lambda =0$;

#### Demostración
- Tenemos $0\cdot x = (0+0)\cdot x = 0\cdot x + 0\cdot x$, por lo tanto al restar de cada lado: $0\cdot x = 0 \cdot x + (-0 \cdot x) = 0$.
- Tenemos $\lambda 0 = \lambda (0+0) = \lambda 0 + \lambda 0$, por lo tanto al restar de cada lado: $\lambda 0 = \lambda 0 + (-\lambda 0) = 0$. 
- Si $\lambda \neq 0$, existe el inverso $\lambda^{-1}\in K$, entonces: $$ \lambda \cdot x = 0 \Rightarrow \lambda^{-1}(\lambda \cdot x) = \lambda^{-1}0 \Rightarrow (\lambda^{-1}\lambda) \cdot x = 0 \Rightarrow 1 \cdot x = 0 \Rightarrow x = 0.$$

