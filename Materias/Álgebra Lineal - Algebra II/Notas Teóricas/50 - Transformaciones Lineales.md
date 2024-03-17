---
Materia: Álgebra
tags:
  - transf_lineal
---
Sean $V$ y $W$ dos espacios vectoriales sobre el cuerpo $K$. Una *transformación lineal* de $V$ en $W$ es una función $T:V \to W$  tal que
- $T(v+v') = T(v)+ T(v')$, para $v,v' \in V$,
- $T(\lambda v) = \lambda T(v)$, para $v \in V$, $\lambda \in K$.

Para probar que algo es una transformación lineal, a veces usaremos lo siguiente $$T(\lambda v+v') = \lambda T(v)+ T(v')$, para $v,v' \in V$, $\lambda \in K.$$

### Proposición
Sea $T: K^n \to K^m$. En  general si $T(x_1,\ldots,x_n)$ en cada coordenada tiene una combinación lineal de los $x_1,\ldots,x_n$,  entonces $T$ es una transformación lineal. Mas precisamente, si $T$ está definida por $$\begin{align*} T(x_1,\ldots,x_n) &= (a_{11}x_1+\cdots + a_{1n}x_n,\, \ldots\,,a_{m1}x_1+\cdots + a_{mn}x_n )\\ &=(\sum_{j=1}^n a_{1j} x_j,\ldots,\sum_{j=1}^n a_{mj} x_j),\end{align*}$$



### Proposición
Sean $V$ y $W$ dos espacios vectoriales sobre el cuerpo $K$ y 	 $T:V \to W$			un transformación lineal. Entonces $T(0) =0$
$$\begin{align*} -T(0) + T(0) = -T(0) + T(0)+T(0) \;\Rightarrow\; 0 = 0 +T(0) \;\Rightarrow\; 0= T(0). \end{align*}$$

**Demostración** $T(0) = T(0+0) = T(0) + T(0)$, por lo tanto $$-T(0) + T(0) = -T(0) + T(0)+T(0) \;\Rightarrow\; 0 = 0 +T(0) \;\Rightarrow\; 0= T(0).$$


### Proposición
Las transformaciones lineales preservan  combinaciones lineales, es decir si $T:V \to W$ es una transformación lineal, $v_1,\ldots,v_k \in V$ y $\lambda_1, \ldots+ \lambda_k \in K$,  entonces $$ T(\lambda_1 v_1 + \cdots+ \lambda_k v_k) = \lambda_1 T(v_1) + \cdots+ \lambda_k T(v_k). $$

#### Demostración
Observar que el caso $k=2$ se demuestra de la siguiente manera $$ T(\lambda_1 v_1 +  \lambda_2 v_2) =T(\lambda_1 v_1) + T(\lambda_2 v_2) =\lambda_1 T(v_1) + \lambda_2T( v_2). $$El caso general se demuestra por inducción sobre $k$, el caso base es el anterior con $k=2$, para el paso inductivo, supongamos que la propiedad es verdadera para algún $k \geq 2$, es decir, supongamos que para cualquier transformación lineal $T:V \to W$, vectores $v_1,\ldots,v_k \in V$ y escalares $\lambda_1, \ldots, \lambda_k \in K$, tenemos que $$ T(\lambda_1 v_1 + \cdots+ \lambda_k v_k) = \lambda_1 T(v_1) + \cdots+ \lambda_k T(v_k). $$
Ahora, queremos demostrar que la propiedad es verdadera para $k+1$, es decir, queremos demostrar que para cualquier transformación lineal $T:V \to W$, vectores $v_1,\ldots,v_{k+1} \in V$ y escalares $\lambda_1, \ldots, \lambda_{k+1} \in K$, tenemos que $$ T(\lambda_1 v_1 + \cdots+ \lambda_{k+1} v_{k+1}) = \lambda_1 T(v_1) + \cdots+ \lambda_{k+1} T(v_{k+1}). $$
Consideremos $T(\lambda_1 v_1 + \cdots+ \lambda_{k+1} v_{k+1})$. Podemos reescribir esto como $T((\lambda_1 v_1 + \cdots+ \lambda_k v_k) + \lambda_{k+1} v_{k+1})$. Por la definición de una transformación lineal, sabemos que $T(u+v) = T(u) + T(v)$ para todos $u, v \in V$. Entonces, podemos escribir $$T((\lambda_1 v_1 + \cdots+ \lambda_k v_k) + \lambda_{k+1} v_{k+1}) = T(\lambda_1 v_1 + \cdots+ \lambda_k v_k) + T(\lambda_{k+1} v_{k+1}).$$
Por la hipótesis de inducción, sabemos que $T(\lambda_1 v_1 + \cdots+ \lambda_k v_k) = \lambda_1 T(v_1) + \cdots+ \lambda_k T(v_k)$. Entonces, podemos escribir $$T(\lambda_1 v_1 + \cdots+ \lambda_k v_k) + T(\lambda_{k+1} v_{k+1}) = \lambda_1 T(v_1) + \cdots+ \lambda_k T(v_k) + \lambda_{k+1} T(v_{k+1}).$$
Por lo tanto, hemos demostrado que la propiedad es verdadera para $k+1$ si es verdadera para $k$. Esto completa el paso de inducción. Por lo tanto, por el principio de inducción matemática, la propiedad es verdadera para todos los $k \geq 2$. Esto demuestra que las transformaciones lineales preservan las combinaciones lineales. 


#### Teorema. 
Sean $V$ un espacio vectorial de dimensión finita sobre el cuerpo $K$ y $\{v_1,\ldots,v_n\}$  una base ordenada de $V$. Sean $W$ un espacio vectorial sobre el mismo cuerpo y $\{w_1,\ldots,w_n\}$, vectores cualesquiera de $W$. Entonces existe una única transformación  lineal $T$ de $V$ en $W$ tal que
$$T(v_j) = w_j, \quad j=1,\ldots,n.$$

#### Demostración
Recordemos que si $v \in V$,  existen únicos $a_1,\ldots,a_n \in K$ (las coordenadas de $v$) tal que $$v = a_1v_1 + \cdots+a_n v_n.$$Luego para este vector $v$  definimos $$T(v) = a_1w_1 + \cdots+a_n w_n.$$Entonces, $T$ es una correspondencia bien definida que asocia a cada vector $v$ 
de $V$ un vector $T(v)$ de $W$. De la definición queda claro que $T(v_j) = w_j$ para cada $j$. Para ver que $T$ es lineal, sea $$w = b_1v_1 + \cdots+b_n v_n,$$ y sea  $\lambda \in K$. Ahora $$\begin{align*} \lambda v+w &= \lambda(a_1v_1 + \cdots+a_n v_n) + b_1v_1 + \cdots+b_n v_n \\ &= (\lambda a_1+b_1)v_1 + \cdots+(\lambda a_n+b_n)v_n \end{align*}$$con lo que, por definición $$T(\lambda v+w) =(\lambda a_1+b_1)w_1 + \cdots+(\lambda a_n+b_n)w_n. $$Por otra parte$$ \begin{align*} \lambda  T(v) + T(w) &= \lambda (a_1w_1 + \cdots+a_n w_n)+b_1w_1 + \cdots+b_n w_n	 \\ &=(\lambda a_1+b_1)w_1 + \cdots+(\lambda a_n+b_n)w_n ,		\end{align*}$$ y así $$T(\lambda v+w) = 	\lambda  T(v) + T(w).$$Finalmente,  debemos probar la unicidad de $T$. Sea $S: V \to W$ transformación lineal tal que $S(v_j) = w_j$ para $1 \le j \le n$. Entonces,  si $v \in V$ un vector arbitrario, $v = \sum_i a_i v_i$ y $$S(v) = S(\sum_i a_i v_i)\sum_i a_i S( v_i) = \sum_i a_iw_i = 
	                     \sum_i a_i T( v_i) =  T(\sum_i a_i v_i) = T(v)$$




