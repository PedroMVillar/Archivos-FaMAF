---
Materia: Álgebra
tags:
  - autovalores/vectores/espacios
  - matrices
---
Sea $A\in K^{n\times n}$. El **polinomio característico** de $A$ es $$\chi_A(x)=\det(x Id-A)$$
### Ejemplos
- Encontrar el polinomio característico de $Id_n$.
El polinomio  característico de $Id_n$ es $$\chi_{Id_n}(x)=(x-1)^n $$ $xId- Id=(x-1)Id$ es una matriz diagonal con $x-1$ en todas las entradas de la diagonal. Entonces el determinante es el producto de los valores de la diagonal.
En general,  si $A = [a_{ij}]$ matriz $n \times n$, tenemos que $$\chi_A(x) = det(x\,Id-A) = \det \begin{bmatrix} x-a_{11}&-a_{12}&\cdots&-a_{1n}\\ -a_{21}&x-a_{22}&\cdots&-a_{2n}\\ \vdots&\vdots&\ddots&\vdots\\ -a_{n1}&-a_{n2}&\cdots&x-a_{nn}\\ \end{bmatrix}$$ y el polinomio característico de $A$ es un polinomio  de grado $n$,  más precisamente $$\chi_A(x) =x^n + a_{n-1}x^{n-1}+ \cdots + a_1x + a_0.$$
- El polinomio  característico de  $A=\begin{bmatrix} 0&1\\0&0 \end{bmatrix}$ es  $\chi_{A}(x)=x^2$.

- Si $A=\begin{bmatrix}a&b\\c&d \end{bmatrix}$, entonces $\chi_{A}(x)=(x-a)(x-d) - bc$.

### Proposición
Sea $A\in K^{n \times n}$.  Entonces $\lambda\in K$ es autovalor si y sólo si $\lambda$ es raíz del polinomio característico de $A$. 
