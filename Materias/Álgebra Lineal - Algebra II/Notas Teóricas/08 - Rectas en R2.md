---
Materia: Álgebra
tags:
  - rectas
---
Sean  $a,b,c \in R$ y tal que $a,b$ no son simultáneamente $0$. La recta con ecuación implícita es: $$ax +by =c,$$ es el conjunto de puntos $(x,y)$ en $R^2$ que satisfacen la ecuación implícita de la recta.  Es decir, si denotamos $L$  a la recta, $$L = \{ (x,y)\in R^2: ax +by =c\}.$$


### Observación:  
Observar  que si $b\ne0$, entonces la recta es \, $y= -\displaystyle\frac{a}{b}x + \displaystyle\frac{c}{b}$ \, y que si $b=0$,  entonces $a\ne 0$ y la recta es \, $x =\displaystyle\frac{c}{a}$

Si  consideramos  el vector $(a,b)$ en $R^2$, $c \in R$ y $L$ la recta definida por los puntos $(x,y)$ tal que $ax +by =c$,  entonces $L$ es la recta formada por el conjunto de puntos $(x,y)$ en $R^2$ que satisfacen $$\langle (x,y), (a,b) \rangle = c.$$


## Recta perpendicular
La ecuación implícita de la recta $L$ perpendicular a $(a,b)$ y que pasa por $(x_0,y_0)$ es $$ax +by = \langle (x_0,y_0), (a,b) \rangle.$$ Otra forma de obtener el c de una forma mas sencilla, es evaluar $ax+by$ en $x=x_0, \ y=y_0$. 



## Recta paralela
Sean $v, w \in R^2$ tal que  $w \not=0$. Sea $$L = \{v + tw: t \in R\}$$ Diremos entonces que $L$ es la recta que pasa por $v$ paralela a $w$. En este caso llamaremos **vector director** a $w$. Mas adelante nos servirá para definir paralelismo entre rectas. 
La ecuación $v+tw$ es llamada forma o representación paramétrica de la recta L.


### Proposición
Sean $(a,b),(x_0,y_0)\in R^2$ con $(a,b)\neq0$.  La recta perpendicular a $(a,b)$ que pasa por $(x_0,y_0)$ es $$L=\left\{(x_0,y_0)+t(b,-a)\mid t\in R\right\}.$$ Esto sucede ya que el vector $(b,-a)$  es perpendicular a a $(a,b)$  y por lo tanto tiene la dirección de la recta. Luego  la ecuación paramétrica de la recta es $v_0+t(b,-a)$ para algún $v_0$  en la recta.

