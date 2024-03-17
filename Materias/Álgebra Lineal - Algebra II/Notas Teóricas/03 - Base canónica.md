---
Materia: Álgebra
tags:
  - canonica
  - vectores
---
Dado, $n \in \mathbb N$, para cada $i\in\{1, ..., n\}$, se denota ${e_i}\in R^n$ al vector cuyas coordenadas son todas $0$ excepto la coordenada $i$ que es un $1$:
$$e_i:=(0, ..., 1, ..., 0)$$
El conjunto $\{e_1, ..., e_n\}$ se llama **base canónica** de $R^n$

## Proposición
Todo vector de $R^n$ se escribe como combinación lineal de la base canónica. Explícitamente, si $(x_1, ..., x_n)\in R^n$ entonces $$(x_1, ..., x_n)=x_1e_1+x_2e_2+\cdots+x_ne_n.$$

#### Demostración
Por definición de suma de dos vectores, si se tiene el vector $(x_1, ..., x_n)$, se puede reescribir como:
$$ (x_1, ..., x_n) = (x_1, ... , 0)+(0,x_2,...,0)+(0,0,x_3,...,0)+...+(0,...,x_n)$$ Luego por definición del producto de un vector por un número, se puede expresar la expresión anterior como:
$$ (x_1, ..., x_n) = x_1(1, ... , 0)+x_2(0,1,...,0)+x_3(0,0,1,...,0)+...+x_n(0,...,1)$$
Luego, como se denota ${e_i}\in R^n$ al vector cuyas coordenadas son todas $0$ excepto la coordenada $i$ que es un $1$, esto equivale a:
$$ (x_1, ..., x_n) = x_1e_1+x_2e_2+x_3e_3+...+x_ne_n$$