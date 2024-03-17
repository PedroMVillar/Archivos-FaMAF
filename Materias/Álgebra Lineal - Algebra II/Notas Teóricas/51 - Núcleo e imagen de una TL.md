---
Materia: Álgebra
tags:
  - transf_lineal
  - nucleo_imagen
---
Sean $V$, $W$ espacios vectoriales sobre un cuerpo $K$ y sea $T:V \to W$ una transformación lineal.  Definimos $$\begin{align*} Im(T) &:= \{w \in W:\text{existe $v \in V$, tal que } T(v)=w\} = \{T(v): v \in V \}, \\ Nu(T) &:= \{v \in V: T(v)=0 \}. \end{align*}$$ A $Im(T)$ lo llamamos la *imagen de $T$* y a $Nu(T)$ el *núcleo de $T$*. 


### Teorema
> Sean $V$, $W$ espacios vectoriales sobre un cuerpo $K$ y sea $T:V \to W$ una transformación lineal; entonces $Im(T) \subset W$ y $Nu(T) \subset V$ son subespacios vectoriales.

#### Demostración
- $Im(T) \ne \emptyset$, pues $0 = T(0) \in Im(T)$. 
Si $T(v_1),T(v_2) \in Im(T)$ y $\lambda \in K$,  entonces $T(v_1) + T(v_2) = T(v_1+v_2) \in Im(T)$ y $\lambda T(v_1) = T(\lambda v_1) \in Im(T)$.
- $Nu(T) \ne \emptyset$ pues $T(0) =0$ y por lo tanto $0 \in Nu(T)$.
Si $v,w \in V$ tales que $T(v) =0$ y $T(w)=0$,  entonces, $T(v+w)= T(v)+T(w) =0$. por lo tanto $v+w \in Nu(T)$. Si  $\lambda \in K$,  entonces $T(\lambda v) = \lambda T(v) = \lambda.0 =0$, luego  $\lambda v \in Nu(T)$.

---

