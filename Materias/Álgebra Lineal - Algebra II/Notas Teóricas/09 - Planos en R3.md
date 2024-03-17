---
Materia: Álgebra
tags:
  - planos
---
Sean $a,b, c,d \in R$ tal que $(a,b,c) \ne (0,0,0)$ y sea $$P = \{(x,y,z): ax +by +cz =d\}.$$ Entonces diremos que $P$  es  un plano con ecuación implícita $ax +by +cz =d$ y  que $(a,b,c)$ es un vector normal al plano $P$. A esta forma de describir el plano también suele llamársela la ecuación normal del plano. Puede ser descripta de la siguiente forma: $$\langle (x,y,z) - (x_0,y_0,z_0) , (a,b,c) \rangle=0$$ De esta ecuación se deduce la forma implícita $ax+by+cz=d$ y representa a diferencia de la forma anterior, al plano que pasa por el punto $(x_0,y_0,z_0)$, de esta forma podemos obtener el $d$ de nuestra forma implícita simplemente reemplazando $x=x_0, \ y=y_0 \ z=z_0$. 

### Observación:
si dos planos tienen sus vectores normales paralelos se dice que dichos planos son *paralelos*. Y si sus vectores normales son perpendiculares, los planos son *perpendiculares*.

## Ángulo entre planos
El ángulo entre dos planos se define como el ángulo entre sus vectores normales. Por tanto, para hallar el ángulo entre dos planos se calcula el ángulo que forman sus vectores normales.
Sean $a,b, c,d \in R$ tal que $(a,b,c) \ne (0,0,0)$ y sean $$P_1 = \{(x,y,z): a_1x +b_1y +c_1z =d\} \ \ , \ \ P_2 = \{(x,y,z): a_2x +b_2y +c_2z =d\}$$El ángulo entre $P_1$ y $P_2$ será en ángulo formado entre $(a_1,b_1,c_1)$ y $(a_2,b_2,c_2)$:
$$\theta = 	\operatorname{arcos}\left(\frac{\langle (a_1,b_1,c_1) , (a_2,b_2,c_2) \rangle}{||(a_1,b_1,c_1)|| \,  ||(a_2,b_2,c_2)|| }\right).$$


## Plano generado
Sean $v, w_1,w_2 \in R^3$ tal que  $w_1$,$w_2$ no  nulos y tal que $w_2$ no sea un múltiplo de $w_1$. Sea $$P = \{v + sw_1 + tw_2: s,t \in R \}. $$ Diremos entonces que $P$ es el  plano a través de $v$ paralelo a los vectores $w_1$ y $w_2$, es decir, generado por $w_1$ y $w_2$.

