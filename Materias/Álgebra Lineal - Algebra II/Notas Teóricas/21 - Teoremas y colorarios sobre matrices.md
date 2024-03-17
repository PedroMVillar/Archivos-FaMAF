---
Materia: Álgebra
tags:
  - matrices
---
### Teorema. 
Sea $AX=Y$ un sistema de $m$ ecuaciones lineales y $n$ incógnitas con coeficientes en $K$. Entonces:
- El sistema homogéneo $AX=0$ o bien tiene a $0$ como única solución,  o bien tiene infinitas soluciones. 
- Si $Y \ne 0$,  entonces el sistema  o bien no tiene solución, o bien tiene una solución, o bien tiene infinitas soluciones. 

#### Demostración
Un  sistema homogéneo siempre tiene a $X=0$ como solución, pues $A0 =0$. Si  no hay varables libres, entonces $x_1=x_2= \cdots =x_n =0$ es la única solución. Si hay variables libres,  entonces hay infinitas soluciones (variando las variables libres). Si el  sistema tiene solución, las soluciones son de la forma dada por la ecuación 
$$
\begin{align*}\begin{matrix} x_{k_1} &= z_1-\sum_{j \not= k_1,\ldots, k_r} b_{1j}\,x_j\\ x_{k_2} &= z_2-\sum_{j \not= k_1,\ldots, k_r} b_{2j}\,x_j\\ \vdots& \vdots \\
x_{k_r}  &= z_r-\textstyle\sum_{j \not= k_1,\ldots, k_r} b_{rj}\,x_j \end{matrix}\end{align*}.
	$$
Si  no hay variables libres la solución es única ($x_1=z_1,\ldots,x_n =z_n$). Si hay variables libres,  entonces hay infinitas soluciones (variando las variables libres).     

### Colorario
Sea $A$ matriz $n \times n$ con coeficientes en $K$. Si $A$ es equivalente por filas a  $B$ una  MERF y $B$ tiene filas nulas, entonces:
- El sistema homogéneo $AX=0$ tiene  infinitas soluciones.
- Si $Y \ne 0$,  entonces el sistema  $AX =Y$ o bien no tiene solución, o bien tiene infinitas soluciones.

### Demostración
Sea $r$  el número de filas no nulas de $B$, como $B$ tiene filas nulas,  entonces $r<n$ y  hay al menos una variable libre. Esto nos garantiza que de haber solución, hay infinitas soluciones. Por el teorema se deduce el resultado.

### Colorario
Sea $A$ una matriz $m \times n$ con  $m < n$ e $Y$ matriz $m \times 1$ . Entonces, si el sistema de ecuaciones lineales $AX=Y$ tiene solución, tiene infinitas soluciones.

#### Demostración
El hecho de que $m < n$  nos garantiza que hay variable libres. Luego en caso de haber solución, hay infinitas soluciones. 


### Lema.
Sea $R$ una matriz $n \times n$ escalón reducida por fila tal que no tiene filas nulas. Entonces     $R=Id_n$. 

#### Demostración
Como  $R$ es reducida por fila y no tiene filas nulas, cada fila tiene  un $1$ en alguna entrada y en la columna donde está el $1$ todos las otras entradas son nulas, por  lo tanto hay $n$ $1$'s principales distribuidos en $n$ columnas. Concluyendo: hay un $1$ por columna y en esa columna todas las demás entradas son nulas. Ahora bien como $R$ es una MERF, la primera fila contiene el $1$ que está más a la izquierda, que no puede estar en otra ubicación que no sea la primera (pues si no la primera columna sería nula). Con el mismo razonamiento vemos que en la segunda fila hay un $1$ en la columna $2$ y en general en la fila $k$-ésima hay un 1 en la columna $k$. Luego $R=Id_n$.

### Teorema
Sea $A$ una matriz $n \times n$. Entonces, $A$ es equivalente por filas a la matriz $Id_n$  si y sólo si el sistema $AX = Y$ tiene un única solución. 

#### Demostración
($\Rightarrow$) Como $A$ es equivalente por filas a la matriz $Id_n$, las soluciones de $AX =Y$ son las mismas que las de $Id_nX=Z$, para algún $Z$. Ahora bien,  en la fila $i$ de la matriz $Id_n$ tenemos $[Id_n]_{ii} =1$ y las otras entradas son cero, luego la ecuación correspondiente a esa fila es $x _i =0$, y esto ocurre en todas las filas, luego el sistema de ecuaciones es $$\begin{align*} x_1 &=z_1 \\ x_2 &= z_2 \\ \vdots \\ x_n &= z_n \end{align*}$$ cuya única solución es la solución trivial.
($\Leftarrow$) Sea $R$ la matriz escalón reducida por filas asociada a $A$. Por hipótesis, $AX=Y$ tiene una sola solución y  por lo tanto $RX=Z$, para algún $Z$, tiene una sola solución. Luego, no hay variables libres, es decir hay $n$ filas no nulas en $R$, como $R$ tiene $n$ filas, lo anterior implica que $R$ no tiene filas nulas. Entonces, por el lema anterior, $R=Id_n$.