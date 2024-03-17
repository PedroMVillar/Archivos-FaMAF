---
Materia: Álgebra
tags:
  - matrices
---
Una matriz $m \times m$  se dice elemental si fue obtenida por medio de una única operación elemental a partir de la matriz identidad $Id_m$. Sea $E$ una matriz elemental tal que $E= e(Id)$ con $e$ una operación elemental. Diremos que $E$ es de tipo E1 si $e$ es de tipo 1, de tipo E2 si $e$ es de tipo 2 y de tipo E3 si $e$ es de tipo 3.
- Si $c \not=0$, multiplicar por  $c$ la fila $k$ de la matriz identidad, resulta en la matriz elemental que tiene todos 1's en la diagonal, excepto en la posición $k,k$ donde vale $c$,  es decir si $e(Id_m) = [a_{ij}]$,  entonces $$\begin{align*} &\begin{matrix} {}^{}&{}^{}&{}^{}&{}^{}&{}^{}&\overset{k}{\downarrow}&{}^{}&{}^{}&{}^{} \end{matrix} \\ \begin{matrix} {}^{}\\ {}^{}\\ \overset{k}{\to}\\ {}^{}\\ {}^{} \end{matrix} &\begin{bmatrix} 1 & 0 &  &\cdots & 0  \\ \vdots  & \ddots  & & & \vdots \\ 0 & \cdots &c &\cdots &0 \\ \vdots  &   & &\ddots & \vdots \\ 0  & \cdots  & &\cdots & 1 \end{bmatrix} \end{align*}$$
- si  $c \in K$, sumar a la fila $r$  la fila $s$ multiplicada por $c$, resulta en la matriz elemental que tiene todos 1's en la diagonal, y todos los demás coeficientes son 0,  excepto en la fila  $r$ y columna $s$ donde  vale $c$,  es decir si $e(Id_m) = [a_{ij}]$,  entonces $$\begin{align*}&\begin{matrix} {}^{}&{}^{}&{}^{}&{}^{}&{}^{}&\overset{r}{\downarrow}&{}^{}&{}^{}&{}^{}{}^{}\overset{s}{\downarrow}&{}^{} \end{matrix} \\ \begin{matrix} {}^{}\\{}^{}\\ \overset{r}{\to}\\ {}^{}\\ {}^{}\\ {}^{} \end{matrix} &\begin{bmatrix} 1 & 0 &  &\cdots &&& 0  \\ \vdots  & \ddots  & & &&& \vdots \\ 0 & \cdots &1 &\cdots&c&\cdots &0 \\ \vdots  &   & &\ddots &&& \vdots \\ \vdots  &   & & &\ddots&& \vdots \\ 0  & \cdots  & &\cdots &&& 1 \end{bmatrix} \end{align*}$$
- intercambiar la fila $r$ por la fila $s$ resulta ser $$\begin{align*} &\begin{matrix} {}^{}&{}^{}&{}^{}&{}^{}&{}^{}&\overset{r}{\downarrow}&{}^{}&{}^{}&{}^{}{}^{}\overset{s}{\downarrow}&{}^{} \end{matrix} \\ \begin{matrix} {}^{}\\{}^{}\\ \overset{r}{\to}\\ {}^{}\\ \overset{s}{\to}\\{}^{}\\ {}^{} \end{matrix} &\begin{bmatrix} 1 & \cdots &  &\cdots &&\cdots& 0  \\ \vdots  & \ddots  & & &&& \vdots \\ 0 & \cdots &0 &\cdots&1&\cdots &0 \\ \vdots  &   & &\ddots &&& \vdots \\ 0  & \cdots  &1 &\cdots &0& \cdots& 0 \\ \vdots  &   & & &&\ddots& \vdots \\ 0  & \cdots  & &\cdots &&\cdots& 1 \end{bmatrix} \end{align*}$$


### Teorema. 
Sea $e$ una operación elemental por fila y sea $E$ la matriz elemental $E=e(Id)$. Entonces $e(A) = EA$.

### Colorario. 
Sean $A$ y $B$ matrices $m \times n$. Entonces $B$ equivalente por filas a $A$ si y sólo si $B=PA$ donde $P$ es  producto de matrices elementales. Más aún, si $B = e_k(e_{k-1}(\cdots(e_1(A))\cdots))$ con $e_1,e_2,\ldots,e_k$ operaciones elementales de fila y $E_i=e_i(Id)$ para $i=1,\ldots,k$,  entonces $B =  E_kE_{k-1}\cdots E_1A$.

#### Demostración
($\Rightarrow$) Si $B$ equivalente por filas a $A$  existen operaciones elementales $e_1,\ldots,e_k$ tal que $B = e_k(e_{k-1}(\cdots(e_1(A))\cdots))$, más formalmente $$\text{si } A_1 = e_1(A)\text{ y } A_i = e_i(A_{i-1})\text{ para }i=2,\ldots,k\text{, entonces } e_k(A_{k-1})= B.$$ Sea $E_i = e_i(Id_m)$, entonces, por el teorema anterior $A_1= E_1A$ y $A_i = E_iA_{i-1}$ ($i=2,\ldots,k$). Por  lo tanto $B=E_kA_{k-1}$, en otras palabras $B =  E_kE_{k-1}\cdots E_1A$, luego $P = E_kE_{k-1}\cdots E_1$.
                
($\Leftarrow$) Si $B= PA$, con  $P = E_kE_{k-1}\cdots E_1$ donde $E_i=e_i(Id_m)$ es una matriz elemental,  entonces
$$ B = PA = E_kE_{k-1}\cdots E_1A \stackrel{\text{Teorema}}=  e_k(e_{k-1}(\cdots(e_1(A))\cdots)). $$
Por lo tanto, $B$ es equivalente por filas a $A$.