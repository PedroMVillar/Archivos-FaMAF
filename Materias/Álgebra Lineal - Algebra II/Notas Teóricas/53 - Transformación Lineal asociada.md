---
Materia: Álgebra
tags:
  - transf_lineal
---
Sea $A\in R^{m\times n}$ y sea $T$ la transformación lineal $$\begin{align*}\begin{array}{rccc} T : & R^n &\to &R^m \\ &v &\mapsto &Av. \end{array} \end{align*}$$ Diremos que $T$  es la *transformación lineal asociada a $A$*. Muchas veces denotaremos a esta transformación lineal con el mismo símbolo que la matriz, es decir, en este caso con $A$.  

### Observación
Sea $T: K^n \to K^m$ definida por $$\begin{align*} T(x_1,\ldots,x_n) &= (a_{11}x_1+\cdots + a_{1n}x_n,\, \ldots\,,a_{m1}x_1+\cdots + a_{mn}x_n ) \end{align*}$$
con $a_{ij} \in K$, entonces 
$$T(x) = \begin{bmatrix*}
            a_{11}& a_{12} & \cdots &a_{1n} \\
            a_{21}& a_{22} & \cdots &a_{2n} \\
            \vdots&\vdots&\ddots&\vdots \\
            a_{m1}& a_{m2} & \cdots &a_{mn}
        \end{bmatrix*}\begin{bmatrix}
            x_1 \\ x_2 \\ \vdots \\ x_n
        \end{bmatrix}$$
 Es decir,  $T$ es la transformación lineal inducida por la matriz $A = [a_{ij}]$. 


### Proposición
Sea $A\in R^{m\times n}$ y $T: R^n\longrightarrow R^m$ la transformación lineal asociada. Entonces
- El núcleo de $T$ es el conjunto de soluciones del sistema homogéneo $AX=0$
- La imagen de $T$ es el conjunto de los $b\in R^m$ para los cuales el sistema $AX=b$ tiene solución

#### Demostración
- $$\begin{align*} v\in\nu T\Leftrightarrow Av=0\Leftrightarrow v\,\mbox{ es solución de $AX=0$.} \end{align*}$$
- $$\begin{align*}
    b\in Im T&\Leftrightarrow\exists v\in R^n\,\mbox{ tal que } Av=b 
    \Leftrightarrow\,\mbox{$AX=b$ tienen solución}.
    \end{align*}$$

---




