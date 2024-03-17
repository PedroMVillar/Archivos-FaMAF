---
Materia: Álgebra
tags:
  - sist_ecuaciones
---
### Proposición
Sean $c_1,\ldots,c_m$ en $K$. Si $(x_1,\ldots,x_n) \in K^n$  es solución del sistema de ecuaciones $$\begin{align*}\begin{matrix} a_{11}x_1& + &a_{12}x_2& + &\cdots& + &a_{1n}x_n &= &y_1\\ \vdots&  &\vdots& &&  &\vdots \\ a_{m1}x_1& + &a_{m2}x_2& + &\cdots& + &a_{mn}x_n &=&y_m. \end{matrix} \end{align*}$$ entonces $(x_1,\ldots,x_n)$ también es solución de la ecuación $$\left(\sum_{i=1}^{m}c_{i}a_{i1}\right)x_1 + \cdots +  	\left(\sum_{i=1}^{m}c_{i}a_{in}\right)x_n = \sum_{i=1}^{m}	c_{i}y_{i},$$

#### Demostración 
Por hipótesis $$a_{i1}x_1 + a_{i2}x_2 + \cdots + a_{in}x_n = y_i,\; \text{ para } 1 \le i \le m.$$ Luego, $$\sum_{i=1}^m c_i(a_{i1}x_1 + a_{i2}x_2 + \cdots + a_{in}x_n) = \sum_i c_iy_i$$


## Sistemas equivalentes
Decimos que dos sistemas de ecuaciones lineales son equivalentes si cada ecuación de un sistema es combinación lineal del otro. 
### Teorema. 
Dos sistemas de ecuaciones lineales equivalentes tienen las mismas soluciones.
### Observación
La equivalencia de sistemas lineales es una relación de equivalencia,  en particular  vale la propiedad transitiva: si el sistema (A) es equivalente al sistema (B) y  el sistema (B)  es equivalente al sistema (C),  entonces (A) es equivalente a (C). Esto nos permite, ir paso a paso para eliminar las incógnitas. 