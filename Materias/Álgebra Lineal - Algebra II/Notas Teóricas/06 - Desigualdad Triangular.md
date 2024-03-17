---
Materia: Álgebra
tags:
  - vectores
---
### Proposición
Sean $v, w \in R^n$, entonces $$ ||v+w|| \le ||v||+||w||,$$ y la igualdad se cumple sólo cuando $w$ es múltiplo de $v$.
#### Demostración
Podemos probar  este resultado en base a una demostración *geométrica* basada en el hecho de que $|\cos\theta \ | \le 1$ y luego utilizando la ecuación $\theta = 	\operatorname{arcos}\left(\frac{\langle v_1 , v_2 \rangle}{||v_1|| \,  ||v_2|| }\right).$ Se verá que $$
\langle v_1,v_2 \rangle  \le   ||v_1|| \,  ||v_2|| $$
Se tiene que: $$\begin{align*}
||v_1+v_2||^2 &= \langle v_1+v_2, v_1+v_2\rangle = \langle v_1, v_1+v_2\rangle+\langle v_2, v_1+v_2\rangle \\
&= \langle v_1, v_1\rangle+\langle v_1, v_2\rangle+\langle v_2, v_1\rangle+\langle v_2, v_2\rangle. = \langle v_1, v_1 \rangle + 2\cdot\langle v_1,v_2\rangle + \langle v_2,v_2 \rangle \\ &= || v_1 ||^2+ 2\cdot ||v_1||\cdot||v_2|| + ||v_2|| = (||v_1||+||v_2||)^2
\end{align*} 
$$ Luego utilizando la [[07 - Desigualdad de Cauchy-Schwarz]], resulta que $$||v_1+v_2||^2 \le (||v_1||+||v_2||)^2.$$ Tomando raíz cuadrada de ambos lados: $$||v_1+v_2|| \le ||v_1||+||v_2||.$$
