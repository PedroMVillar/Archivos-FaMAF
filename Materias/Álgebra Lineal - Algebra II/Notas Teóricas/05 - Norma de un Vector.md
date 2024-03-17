---
Materia: Álgebra
tags:
  - vectores
---
Si $v$  es vector,  entonces $\langle v , v \rangle \ge 0$ y definimos como la norma de $v$ o longitud de $v$ al número $$||v|| = \sqrt{\langle v , v \rangle}.$$
En  general,  si $v =(x_1,x_2,\ldots,x_n) \in R^n$,  entonces $$||v|| = \sqrt{x_1^2+x_2^2+\cdots+x_n^2}$$

### Observación: 
Cuando $v$ pertenece al plano  y $v =(x,y)$,  entonces $||v|| = \sqrt{x^2 + y^2}$ y si graficamos el vector vemos que la noción de norma o longitud en $R^2$ se deduce del teorema de Pitágoras.

### Proposición
Sea $v \in R^n$ y $\lambda \in R$,  entonces $$||\lambda v|| = |\lambda|||v||.$$

**Demostración**: $||\lambda v||^2 = \langle \lambda v, \lambda v \rangle$, por la propiedad 3 del producto escalar, $$\langle\lambda v, \lambda v \rangle = \lambda\langle v, \lambda v \rangle = \lambda^2\langle v, v  \rangle.$$
Es decir 	$||\lambda v||^2 =  \lambda^2 ||v||^2$, por lo tanto (sacando raíz cuadrada), $||\lambda v|| = |\lambda|||v||$.

## Producto escalar
La norma de un vector nos permite definir nuevamente al producto escalar como: $$\langle v_1 , v_2 \rangle = ||v_1||\, ||v_2|| \cos(\theta),$$ o equivalentemente: $$\cos(\theta) = \frac{\langle v_1 , v_2 \rangle}{||v_1||\, ||v_2||} ,$$ donde  $\theta$ es el ángulo comprendido entre $v_1$ y $v_2$

## Ángulo entre vectores
Podemos definir entonces, al ángulo entre dos vectores como:
$$\theta = 	\operatorname{arcos}\left(\frac{\langle v_1 , v_2 \rangle}{||v_1|| \,  ||v_2|| }\right).$$

## Distancia entre dos vectores
Sea $v,w \in R^n$, entonces la distancia en $\mathbb R^n$ entre $v$ y $w$ es $||v-w||$
