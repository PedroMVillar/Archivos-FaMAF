---
Materia: Álgebra
tags:
  - inversa
  - métodos
  - matrices
---
Primero,  encontramos $R = Id_n$ la MERF  equivalente por filas a $A$, luego, aplicando la mismas operaciones elementales a $Id_n$, obtenemos la inversa de $A$. Para facilitar el cálculo es  conveniente comenzar con $A$ e $Id_n$ e ir aplicando paralelamente las operaciones elementales por fila. Veamos un ejemplo.
Calculemos la inversa (si tiene) de $$A=\begin{bmatrix}2&-1\\1&3 \end{bmatrix}.$$
 $$\begin{align*} [A|Id] &= \left[\begin{array}{cc|cc}2&-1 &  1&0\\1&3& 0&1\end{array}\right] \stackrel{F_1\leftrightarrow F_2}{\longrightarrow}  \left[\begin{array}{cc|cc}1&3& 0&1\\2&-1 &  1&0 \end{array}\right]\stackrel{F_2-2 F_1}{\longrightarrow}\\ &\left[\begin{array}{cc|cc}1&3& 0&1\\0&-7 &  1&-2 \end{array}\right]\stackrel{F_2/(-7)}{\longrightarrow} \left[\begin{array}{cc|cc}1&3& 0&1\\0&1 &\frac17&\frac27\end{array}\right] \stackrel{F_1-3 F_2}{\longrightarrow}\left[\begin{array}{cc|cc}1&0&  \frac37&\frac17\\0&1 &  -\frac17&\frac27 \end{array}\right]. \end{align*}$$ Luego, como $A$ se reduce por filas a la identidad, $A$ es invertible y su inversa es $$A^{-1}=\begin{bmatrix}\frac37&\frac17\\-\frac17&\frac27 \end{bmatrix}.$$

