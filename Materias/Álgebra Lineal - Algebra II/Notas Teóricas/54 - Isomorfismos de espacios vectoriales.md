---
Materia: Álgebra
tags:
  - espacios
  - transf_lineal
  - isomorfismo
---
Sean $V$, $W$ espacios vectoriales sobre un cuerpo $K$ y sea $T:V \to W$ una transformación lineal.
- $T$  es **epimorfismo** si $T$ es suryectiva, es decir si $Im(T) = W$.
- $T$ es **monomorfismo** si $T$ es inyectiva,  es decir si dados $v_1,v_2 \in V$ tales que $T(v_1) = T(v_2)$,  entonces $v_1 = v_2$. 
- $T$ es **isomorfismo** si $T$ es suryectiva e inyectiva.

### Observación
$T$  es epimorfismo si y sólo si 
$$ \text{$T$ es lineal y }\forall\, w \in W, \; \exists v \in V \text{ tal que }T(v)=w. $$
Esto se deduce inmediatamente de la definiciones de función suryectiva y de $Im(T)$. $T$ es monomorfismo si y sólo si $$
                \text{$T$ es lineal y }\forall\, v_1,v_2  \in V: \; v_1 \ne v_2 \Rightarrow T(v_1) \not= T(v_2).
            $$ Esto se obtiene aplicando el contrarrecíproco a la definición de función inyectiva.


### Proposición
Sea $T:V \to W$ una transformación lineal. Entonces $T$ es monomorfismo si y sólo si $Nu(T) =0$.

#### Demostración
($\Rightarrow$) Debemos ver que  $Nu(T)=0$,  es decir que si $T(v)=0$,  entonces  $v=0$. Ahora bien,  si $T(v) = 0$, como  $T(0)=0$, tenemos que $T(v)  = T(0)$, y como $T$ es inyectiva, implica que $v =0$.
($\Leftarrow$) Sean  $v_1,v_2 \in V$ tal que $T(v_1)=T(v_2)$. Entonces $$
            0 = T(v_1)- T(v_2) = T(v_1 -v_2).
            $$
Por  lo tanto, $v_1 -v_2 \in Nu(T)$. Por hipótesis, tenemos que $v_1 -v_2 =0$,  es decir $v_1 = v_2$.


### Observación
Sea $T: V \to W$ transformación lineal,
- $T$  es *epimorfismo* si y sólo  si $Im(T) = W$ si  y solo si $rango(T) = \dim W$.
- $T$ es *monomorfismo* si y sólo  si $Nu(T) = 0$ si y sólo si $nulidad(T) =0$.


### Proposición
Sea $T:V \to W$ transformación lineal. Entonces,
- $T$ es monomorfismo si y sólo si $T$ de un conjunto LI  es  LI.
- $T$ es epimorfismo si y sólo si $T$ de un conjunto de generadores de $V$ es un conjunto de generadores de $W$.


### Teorema
Sea $T:V \to W$ un isomorfismo. Entonces $T^{-1}: W \to V$ es lineal y, por lo tanto, también es un isomorfismo.


### Teorema
Sean $V,W$ espacios vectoriales de dimensión  finita sobre $K$ tal que $\dim V = \dim W$. Sea $T: V \to W$ transformación lineal. Entonces,  son equivalentes:
- $T$ es un  isomorfismo.
- $T$ es monomorfismo.
- $T$ es epimorfismo.
- Si $\{v_1,\ldots,v_n \}$ es una base de $V$,  entonces $\{T(v_1),\ldots,T(v_n) \}$ es una base de $W$.


### Colorario
> Sean $V,W$ espacios vectoriales de dimensión  finita sobre $K$ tal que $\dim V = \dim W$. Entonces $V$ y $W$ son  isomorfos. 
