---
Materia: Álgebra
tags:
  - subespacios
---
Sea $V$ un espacio vectorial sobre $K$. diremos que $W \subset V$ es *subespacio* de $V$ si $W \not= \emptyset$ y
- si para cualesquiera $w_1,w_2 \in W$, se cumple que $w_1+w_2 \in W$ y
- si $\lambda \in K$ y  $w \in W$, entonces $\lambda w \in W$.


### Teorema
Sea $V$ un espacio vectorial sobre $K$ y $W$ subespacio de $V$. Entonces $W$ con las operaciones suma y producto por escalares de $V$ es un espacio vectorial.


### Ejemplo
Decidir si los siguientes subconjuntos de $R^n$ son subespacios vectoriales.
- $\{ (x_1,\ldots,x_n) \in R^n : x_1=x_n\}$
- $\{ (x_1,\ldots,x_n) \in R^n : x_n=1 \}$
- $\{ (x_1,\ldots,x_n) \in R^n : x_n=0 \}$

Respuesta:
- Hay que probar que la adición y el producto esten contenidos en el subespacio de $R^n$:
Sea $x=(x_1,\ldots,x_1)\in R^n$ e $y=(y_1,\ldots,y_1)\in R^n$, pruebo la suma y el producto: $$x + \lambda\cdot y = (x_1,\ldots,x_1) + \lambda \cdot (y_1,\ldots,y_1) = (x_1,\ldots,x_1) + (\lambda y_1 + \ldots + \lambda y_1)$$ $$= (x_1+\lambda y_1 ,\ldots, x_1 + \lambda y_1)$$ Sigue perteneciendo al espacio vectorial, por lo tanto, $\{ (x_1,\ldots,x_n) \in  R^n : x_1=x_n\}$ es un subespacio de de $R^n$.
- Hay que probar que la adición y el producto esten contenidos en el subespacio de $R^n$:
Sea $x=(x_1,x_2,\ldots,1)$ e $y=(y_1,y_2,\ldots,1)$, la suma de los vectores: $$x + y = (x_1,x_2,...,1) + (y_1,y_2,...,1) = (x_1+y_1,x_2+y_2,...,2)$$ da como resultado un vector cuyo último componente es distinto de $1$, por lo tanto no pertenece al supuesto subespacio, por lo tanto, $\{ (x_1,\ldots,x_n) \in R^n : x_n=1 \}$ **no es un subespacio** de $R^n$.
- Hay que probar que la adición y el producto esten contenidos en el subespacio de $R^n$:
Sea $x=(x_1,x_2,\ldots,0)$ e $y=(y_1,y_2,\ldots,0)$ la suma y el producto por escalar de dichos vectores: $$x + \lambda y = (x_1,x_2,\ldots,0) + \lambda (y_1,y_2,\ldots,0)$$ $$= (x_1,x_2,\ldots,0) + (\lambda y_1, \lambda y_2,\ldots,0) = (x_1 + \lambda y_1, x_2 + \lambda y_2,\ldots,0)$$ Da como resultado un vector cuyo ultimo componente sigue siendo $0$, entonces $\{ (x_1,\ldots,x_n) \in R^n : x_n=0 \}$ **es un subespacio** de $R^n$.


### Teorema
Sea $V$ un espacio vectorial sobre $K$. Entonces la intersección de subespacios vectoriales es un subespacio vectorial.




