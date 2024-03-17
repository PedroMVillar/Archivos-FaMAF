---
Materia: Álgebra
tags:
  - vectores
---
## Suma vectorial
Si $(x_1,\ldots,x_n), (y_1,\ldots,y_n) \in R^n$, definimos la suma de los dos vectores como:
$$(x_1,\ldots,x_n)+ (y_1,\ldots,y_n):=(x_1+y_1,\ldots,x_n+y_n),$$

Observemos que se satisfacen las siguientes propiedades: sean $v,w,u$ en $R^n$,  entonces:
- $v + w = w + v$ (*conmutatividad de la suma*),
- $(v+ w)+ u = v + (w+u)$ (*asociatividad de la suma*),

Si definimos $0 = (0,\dots,0)$ el punto cuyas coordenadas son todas $0$, el **vector cero**, entonces:
- $v +0 = 0 +v = v$ (*existencia de elemento neutro de la suma*)

Si $v = (x_1,\ldots,x_n)$,  definimos $-v = (-x_1,\ldots, -x_n)$. Entonces:
- $v + (-v) = (-v) + v = 0$ (*existencia de opuesto o inverso aditivo*)


## Multiplicación de un vector por un escalar
Sea $v = (x_1,\ldots,x_n) \in R^n$ y $\lambda \in R$, entonces $$\lambda.v = (\lambda x_1,\ldots,\lambda x_n).$$También denotamos a esta multiplicación por $\lambda v$.

 Observemos que se satisfacen las siguientes propiedades:
 - $1.v=v$,
 - $\lambda_1(\lambda_2v) = (\lambda_1\lambda_2)v$, para todo $\lambda_1,\lambda_2 \in R$,
 - $\lambda(v+w) = \lambda v +\lambda w$, para todo $\lambda \in R$  (*propiedad distributiva*),
 - $(\lambda_1+\lambda_2)v = \lambda_1v + \lambda_2 v$ para todo $\lambda_1,\lambda_2 \in R$  (*propiedad distributiva*)
 - $(-1)v = -v.$

## Producto Escalar
Sean  $v = (x_1, \ldots,x_n)$ y $w= (y_l, \ldots,y_n)$ vectores de $R^n$,  el producto escalar de $v$ y $w$ se define como: $$\langle v , w \rangle :=x_1y_1 + x_2y_2+\cdots+x_ny_n.$$
Esta operación devuelve un número real.

Observemos que se satisfacen las siguientes propiedades, sean $v$, $w$, $u$  tres vectores en $R^n$, entonces:
- $\langle v , w \rangle = \langle w , v \rangle$,
- $\langle v , w + u \rangle =\langle v , w \rangle + \langle v , u \rangle = \langle w +u , v \rangle$,
- Si $\lambda$ es un número, entonces, $\langle \lambda v , w \rangle = \lambda \langle v , w \rangle \quad \text{ y } \quad  \langle v , \lambda w \rangle = \lambda \langle v , w \rangle$,
- Si $v=0$ es el vector cero, entonces $\langle v , v \rangle =0$,  de lo contrario $\langle v , v \rangle >0$
#### Demostración
Expresemos los tres vectores en coordenadas:  $v = (x_1, \ldots,x_n)$, $w =  (y_1, \ldots, y_n)$, $u = (z_1, \ldots, z_n)$

#### Propiedad 1
$$x_1y_1 + x_2y_2+\cdots+x_ny_n = y_1x_1 + y_2x_2+\cdots+y_nx_n$$
porque para cualquiera de los dos números $x, y$, tenemos que $xy=yx$. Esto prueba la propiedad . 

#### Propiedad 2
Sea $u = (z_1, \ldots, z_n)$. Entonces: $$w + u = (y_1+z_1, \ldots, y_n+ z_n)$$ y 
$$
\begin{align*}
\langle v , w + u \rangle &= \langle (x_1, \ldots,x_n) , (y_1+z_1, \ldots, y_n+ z_n) \rangle \\
&= x_1(y_1+z_1) + \cdots x_n(y_n+z_n) \\
&= x_1y_1+x_1z_1 + \cdots x_ny_n+x_nz_n
\end{align*}
$$
Reordenando los términos obtenemos $$\langle v , w + u \rangle =  x_1y_1+\cdots +  x_ny_n +x_1z_1 + \cdots+x_nz_n,$$ que no es otra cosa que $\langle v , w \rangle + \langle v , u \rangle$.

#### Propiedad 3

$$
\langle \lambda v , w \rangle = (\lambda x_1)y_1 + (\lambda x_2 )y_2+\cdots+(\lambda x_n) y_n.
$$
Como son escalares, se cumple la asociatividad y se puede reescribir como:
$$
\langle \lambda v , w \rangle = \lambda (x_1y_1) + \lambda (x_2y_2)+\cdots+\lambda (x_n y_n).
$$
Sacando $\lambda$ de factor común
$$
\langle \lambda v , w \rangle = \lambda \cdot (x_1y_1+ x_2y_2+\cdots+x_n y_n).
$$
que no es otra cosa que:  $\langle \lambda v , w \rangle = \lambda \langle v, w \rangle$ . (*Análogamente se prueba que $\langle v , \lambda w \rangle = \lambda \langle v , w \rangle$)*

#### Propiedad 4
Observemos que $$\langle v , v \rangle = x_1^2 + x_2^2 + \cdots + x_n^2.$$
Como $x_i^2 \ge 0$ para todo $i$,  entonces $\langle v , v \rangle \ge 0$. Además, es claro que si $v$ tiene todas las coordenadas iguales a 0,  entonces  $\langle v , v \rangle =0$. En  el caso que $v\not=0$, entonces,  existe algún $i$  tal que  $x_i \ne 0$, por lo tanto $x_i^2>0$ y por la ecuación, tenemos que  $\langle v , v \rangle>0$.




