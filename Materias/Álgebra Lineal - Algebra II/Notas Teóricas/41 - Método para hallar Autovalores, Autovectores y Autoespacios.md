---
Materia: Álgebra
tags:
  - autovalores/vectores/espacios
  - matrices
  - métodos
---
Sea $A\in K^{n \times n}$, entonces podemos aplicar el siguiente método para encontrar autovalores y autovectores de $A$.
- **1.** Calcular $\chi_A(x) =\det(x Id-A)$,
- **2.** Encontrar las raíces $\lambda_1,\ldots,\lambda_k$ de $\chi_A(x)$.
- **3.** Para cada $i$ con $1 \le i \le k$ resolver el sistema de ecuaciones lineales: $$(\lambda_i Id-A)X = 0.$$
- **4.** Las soluciones no triviales  de este sistema son los autovectores con autovalor $\lambda_i$.

### Ejemplo
Encontrar autovalores y autovectores de la matriz $A=\begin{bmatrix} 3&-2 \\ 1&0 \end{bmatrix}.$
- **1.** $\chi_A(x)= \det\left[\begin{matrix} x-3& 2 \\ -1 & x \end{matrix} \right]= x^2 -3x +2   =(x -1)(x -2)$.
- **2.** Los autovalores de $A$ son las raíces de  $\chi_A(x)$: $1$ y $2$.
- **3.** Debemos resolver los sistemas de ecuaciones: $$(Id-A)X = 0,\qquad (2 Id-A)X = 0.$$
Es decir,  debemos resolver los sistemas
$$\begin{align*} \begin{bmatrix}  1- 3&2 \\ -1&1\end{bmatrix} \begin{bmatrix}	x_1\\x_2\end{bmatrix} = \begin{bmatrix}	0\\0\end{bmatrix} \quad &\text{o, equivalentemente,} \quad  \begin{bmatrix} -2&2 \\ -1&1 \end{bmatrix} \begin{bmatrix}	x_1\\x_2\end{bmatrix} = \begin{bmatrix}	0\\0\end{bmatrix} \tag{S1} \\ & \\ \begin{bmatrix}	2-3&2 \\ -1&2\end{bmatrix} \begin{bmatrix}	x_1\\x_2\end{bmatrix} = \begin{bmatrix}	0\\0\end{bmatrix} \quad &\text{o, equivalentemente,} \quad  \begin{bmatrix}-1&2 \\ -1&2\end{bmatrix} \begin{bmatrix}	x_1\\x_2\end{bmatrix} = \begin{bmatrix}	0\\0\end{bmatrix} \tag{S2} \end{align*}$$
**(S1)** $\begin{bmatrix} -2&2 \\ -1&1 \end{bmatrix} \stackrel{F_1 -2F_2}{\longrightarrow} \begin{bmatrix} 0&0 \\ -1&1 \end{bmatrix}$  $\Rightarrow$ $-x_1+x_2=0$ $\Rightarrow$ $(t,t)$ es solución. 
**(S2)** $\begin{bmatrix}-1&2 \\ -1&2\end{bmatrix} \stackrel{F_2 -F_1}{\longrightarrow} \begin{bmatrix}-1&2 \\ 0&0\end{bmatrix}$  $\Rightarrow$ $-x_1+2x_2=0$ $\Rightarrow$ $(2t,t)$ es solución.

De lo anterior concluimos:
- Los autovalores de $A$ son $1$ y $2$. - El auto espacio correspondiente al  autovalor $1$ es $$V_1 = \{t(1,1): t \in R\}.$$
 - El auto espacio correspondiente al  autovalor $2$ es $$V_2 = \{t(2,1): t \in R\}.$$

