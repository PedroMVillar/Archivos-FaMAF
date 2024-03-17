---
Materia: Álgebra
tags:
  - matrices
---
## Matriz Cuadrada
Es aquella que tiene igual número de filas que de columnas, es decir si es una matriz $n \times n$ para algún $n \in\mathbb N$. En ese caso, se dice que la matriz es de orden $n$. Por ejemplo, la matriz $$A= \begin{bmatrix} 1&3&0\\-1&4&7\\-2&0&1 \end{bmatrix}$$ es cuadrada de orden 3.
Denotaremos el conjunto de todas las matrices cuadradas de orden $n$ con entradas en $K$ por $M_n(K)$ o simplemente $M_n$ si $K$  está sobreentendido. Así, en el 	ejemplo anterior $A \in M_3$.

## Matriz Diagonal
Una matriz cuadrada, $A=[a_{ij}]$ de orden $n$, es diagonal si $a_{ij}  =0$ , para $i \not= j$ . Es decir, si todos los elementos situados fuera de la diagonal principal son cero. Por ejemplo, la siguiente matriz es diagonal: $$\begin{bmatrix} 2&0&0&0\\0&-1&0&0\\0&0&5&0\\0&0&0&3 \end{bmatrix}$$

## Matriz Escalar
Un matriz $n \times n$  es escalar si  es diagonal y todos los elementos de la diagonal son iguales, por ejemplo, en el caso $4 \times 4$ las matrices escalares son $$\begin{bmatrix} c&0&0&0\\0&c&0&0\\0&0&c&0\\0&0&0&c \end{bmatrix}$$ con $c \in K$.

## Matriz Identidad
Es una matriz diagonal cuya diagonal principal está compuesta de $1$'s, es decir $a_{ij}  =0$ , para $i \not= j$ y $a_{ij}  =1$, para $i=j$, en el caso de $4\times 4$ la matriz identidad es: $$\begin{bmatrix} 1&0&0&0\\0&1&0&0\\0&0&1&0\\0&0&0&1 \end{bmatrix}$$

## Matriz Nula
La matriz nula de orden $m\times n$, denotada $0_{m \times n}$ o simplemente $0$ si $m$ y $n$ están sobreentendidos,  es la  matriz $m \times n$ cuyas entradas son todas nulas ($=0$). 

## Matriz triangular
Una matriz cuadrada es triangular superior si todos los elementos situados por debajo de la diagonal principal son cero, es decir $a_{ij}  =0$ , para $i > j$ . Por ejemplo, la siguiente matriz es triangular superior: $$ \begin{bmatrix} 2&-1&3&1\\0&-1&0&2\\0&0&5&1\\0&0&0&3 \end{bmatrix}.$$ Análogamente, una matriz cuadrada es triangular inferior si todos los elementos situados por encima de la diagonal principal son cero, $a_{ij}  =0$ , para $i < j$.  Un matriz triangular (superior o inferior) se dice *estricta* si la diagonal principal es 0.
  



