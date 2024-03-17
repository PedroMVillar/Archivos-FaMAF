---
Materia: Álgebra
tags:
  - matrices
  - inversa
---
Sea $A$ una  matriz $n \times n$ con coeficientes en $K$. Una matriz $B \in M_{n\times n}(K)$  es *inversa  de $A$* si $BA=AB=Id_n$. En  ese caso,  diremos que  $A$ es invertible.

### Proposición
Sea $A  \in M_{n\times n}(K)$, 
- sean $B, C \in M_{n \times n}(K)$ tales que $BA =Id_n$ y $AC = Id_n$, entonces $B=C$;
- si $A$ invertible la inversa es única.

#### Demostración
$$ B = BId_n = B(AC) = (BA)C = Id_nC = C.$$Sean $B$ y $C$ inversas de $A$, es decir $BA=AB=Id_n$ y  $CA=AC=Id_n$. En particular, $BA=Id_n$ y $AC= Id_n$, luego $B=C$.


## Matriz Inversa
Sea $A\in M_{n\times n}(K)$ invertible. A la única matriz inversa de $A$ la llamamos \textit{la matriz inversa de $A$} y la denotamos $A^{-1}$.


### Teorema
Sean $A$ y $B$ matrices $n \times n$ con coeficientes en $K$. Entonces
- si $A$ invertible,  entonces $A^{-1}$  es invertible y su inversa es $A$,  es decir $(A^{-1})^{-1}=A$;
- si $A$ y $B$ son invertibles, entonces $AB$ es invertible y $(AB)^{-1} = B^{-1}A^{-1}$.

### Teorema 
Una matriz elemental es invertible.


### Teorema
Sea $A$ matriz $n \times n$ con coeficientes en $K$. Las siguientes afirmaciones son equivalentes
- $A$ es invertible,
- $A$  es equivalente por filas a $Id_n$, 
- $A$ es producto de matrices elementales.

### Colorario
Sean $A$ y $B$ matrices $m \times n$. Entonces,   $B$ es equivalente por filas a $A$ si y sólo si existe matriz invertible $P$ de orden $m \times m$ tal que $B =PA$ . 

#### Demostración
($\Rightarrow$) $B$ es equivalente por filas a $A$,  luego existe $P$ matriz producto de matrices elementales tal que $B =PA$. Como cada matriz elemental es invertible y el producto de matrices invertibles es invertible, se deduce que $P$ es invertible. 
($\Leftarrow$) Sea  $P$  matriz invertible tal que $B =PA$. Como $P$ es invertible, por el teorema anterior, $P$ es producto de matrices elementales, luego $B =PA$ es equivalente por filas a $A$.

### Colorario
Sea $A$ matriz $n \times n$. Sean $e_1,\ldots,e_k$ las operaciones elementales por filas que reducen a $A$  a una MERF y esta MERF es la identidad,  es decir $e_1(e_{2}(\cdots(e_k(A))\cdots)) =Id_n$. Entonces, $A$ invertible y  las mismas operaciones elementales aplicadas a $Id_n$ nos llevan a $A^{-1}$,  es decir $e_1(e_{2}(\cdots(e_k(Id_n))\cdots)) =A^{-1}$.

### Teorema
Sea $A$ matriz $n \times n$ con coeficientes en $K$. Entonces,  las siguientes afirmaciones son equivalentes. 
- $A$ es invertible.
- El sistema $AX=Y$ tiene una única solución para toda matriz $Y$ de orden $n \times 1$. 
- El sistema homogéneo $AX=0$ tiene una única solución trivial.

#### Demostración 
Sea $X_0$ solución del sistema $AX=Y$, luego $$AX_0=Y  \quad \Rightarrow \quad  A^{-1}AX_0 = A^{-1}Y  \quad \Rightarrow \quad  X_0 = A^{-1}Y.$$ Es decir, $X_0$ es único (siempre igual  a $A^{-1}Y$). 
$(\Rightarrow)$  \ref{equiv-inv-3} Es trivial, tomando $Y =0$.
$(\Rightarrow)$  Sea $R$ la matriz escalón reducida por filas equivalente a $A$, es decir $R=PA$ con $P$ invertible y $R$ es MERF. Si $R$ tiene una fila nula, entonces por corolario, el sistema $AX =0$ tiene más de una solución, lo cual es absurdo.  Por lo tanto, $R$ no tiene filas nulas. Como es una matriz cuadrada y es MERF, tenemos que $R=Id_n$. Luego $A$ es equivalente por filas a $Id_n$ y por teorema se deduce que $A$ es invertible. 			

### Colorario
Sea $A$ una matriz $n \times n$ con coeficientes  en $K$. Si $A$ tiene inversa a izquierda,  es decir si existe $B$ matriz $n \times n$ tal que $BA=Id_n$,   entonces $A$ es invertible.  Lo mismo vale si $A$ tiene inversa a derecha. 

#### Demostración
Supongamos que  $A$ tiene inversa a izquierda y  que $B$ sea la inversa a izquierda,  es decir $BA=Id_n$. El sistema $AX=0$ tiene una única solución, pues $AX_0=0 \Rightarrow BAX_0=B0 \Rightarrow X_0=0$. Luego, $A$  es invertible (y su inversa es $B$). 
Supongamos que  $A$ tiene inversa a derecha y  que $C$ sea la inversa a derecha, es decir $AC=Id$. Por lo demostrado más arriba, $C$ es invertible y su inversa es $A$, es decir $AC=Id$ y $CA=Id$, luego $A$  es invertible. 


