---
Materia: Álgebra
tags:
  - matrices
  - cambio_de_base
---
> [!Prop] Colorario
> Sea $V$ un espacio vectorial de dimensión finita sobre el cuerpo $K$, sean $\mathcal{B}$, $\mathcal{B}'$  bases ordenadas de $V$. Entonces $$[v]_{\mathcal{B}} = [Id]_{\mathcal{B}' \mathcal{B}}\, [v]_{\mathcal{B}'}, \quad \forall v \in V.$$

---
> [!Def] Matriz Cambio de Base
> Sea $V$ un espacio vectorial de dimensión finita sobre el cuerpo $K$ y sean $\mathcal{B}$ y $\mathcal{B}'$ bases ordenadas de $V$. La matriz $P =[Id]_{\mathcal{B}' \mathcal{B}}$  es llamada la *matriz de cambio de base* de la base $\mathcal{B}'$  a la base $\mathcal{B}$.

---
> [!Prop] Colorario
> Sean $V$ espacio vectorial de dimensión finita, $\mathcal{B} = \{v_1,\ldots,v_n\}$ base ordenada de $V$ y 
> $T,U: V \to V$ operadores lineales. Entonces
> - $[UT]_{\mathcal{B}} = [U]_{\mathcal{B}} [T]_{\mathcal{B}}$.
> - Si $Id: V \to V$  es el operador identidad, entonces $[Id]_{\mathcal{B}} =Id$,  donde $Id$  es la matriz identidad $n \times n$.
> - Si $T$  es invertible,  entonces $[T]_{\mathcal{B}}$  es una matriz invertible y  $$[T^{-1}]_{\mathcal{B}} = [T]_{\mathcal{B}}^{-1}.$$

