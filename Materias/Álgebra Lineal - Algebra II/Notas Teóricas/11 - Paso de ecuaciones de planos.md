---
Materia: Álgebra
tags:
  - métodos
  - planos
---
## Ejemplo 1
Nos dan un plano definido como: $$P = \{(x,y,z): x -8y + 3z =1\}.$$ Y se quiere encontrar las demas formas:
- Para encontrar la forma paramétrica, podemos despejar por ejemplo x: $x = 8y-3z+1$, luego representamos un vector $(x,y,z)$ reemplazando $x$ de la forma: $$(8y-3z+1, y, z)$$ Pero sabemos que ese vector se puede parametrizar reescribiéndolo como: $$(8y-3z+1, y, z) = (1,0,0)+y\cdot(8,1,0)+z\cdot(-3,0,1).$$ De aquí se obtiene la forma paramétrica donde $y$ y $z$ serán los vectores que generan al plano y $(1,0,0)$ es un punto por el que pasa: $$P=\{ (1,0,0) + s\cdot(8,1,0) + t\cdot(-3,0,1) \}$$
- Para encontrar la ecuación normal, debemos encontrar un punto por el que pase, es decir un punto que cumpla la ecuación implícita, a simple vista se ve que el punto $(8,1,\frac{1}{3})$ cumple, luego por definición, el vector $(1,-8,3)$ es normal al plano, de aquí sale entonces que el plano P queda definido como: $$\langle (x,y,z)-(8,1,1/3) , (1,-8,3) \rangle = 0$$


## Ejemplo 2
Sea $P$ el plano definido en forma paramétrica por $$P = \{ (1,1,0) + s(-1,0,-1) + t(0,1,-2): s,t \in R\}.$$ En este caso, tenemos los dos vectores que generan al plano y tenemos un punto por el que pasa. Entonces, si hacemos el producto cruz entre los dos vectores generadores, se obtendría un vector normal al plano y de ahí sacar la ecuación normal y luego la implícita: $$(-1,0,-1)\times(0,1,-2) = (0\cdot(-2)-(-1)\cdot 1, (-1)\cdot 0 - (-1)\cdot(-2), (-1)\cdot(-1) - 0\cdot 0 )$$ Esto es igual a: $$ (-1,0,-1)\times(0,1,-2) = (1,-2,-1)$$ Por lo tanto, la ecuación normal del plano es: $$\langle (x,y,z)-(1,1,0) , (1,-2,-1) \rangle = 0$$ Y la implícita: $$P = \{ (x,y,x)\in R^3 : x -2y -z = d \}$$ para hallar el d simplemente reemplazamos el punto por el que pasa en la ecuación: $$P = \{ (x,y,x)\in R^3 : x -2y -z = -1 \}$$



