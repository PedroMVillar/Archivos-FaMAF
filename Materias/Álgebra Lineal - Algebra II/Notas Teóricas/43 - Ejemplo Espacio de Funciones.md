---
Materia: Álgebra
tags:
  - espacios
  - ejercicios
---
Sea $\mathbb{K}$ un cuerpo. Si $(V,\oplus, \odot)$ es un $\mathbb{K}$-espacio vectorial y $S$ un conjunto cualquiera entonces: $$V^S=\{ f: S \rightarrow V : f\text{ es una función}\},$$
denota al conjunto de todas las funciones de $S$ en $V$. Definimos en $V^S$ la suma y el producto por escalares de la siguiente manera: Si $f,g \in V^S$ y $c\in \mathbb{K}$ entonces $f+g:S \rightarrow V$ y $c \cdot f : S \rightarrowtail V$ están dadas por: $$(f+g)(x)=f(x) \oplus g(x), \ \ \ \ \ \ \ (c \cdot f)(x) = c \odot f(x), \ \ \ \ \forall x \in S.$$
Probar que $(V^S, +, \cdot)$ es un $\mathbb{K}$-espacio vectorial. En el caso de que $V=\mathbb{K}$, este espacio vectorial se denotará $\operatorname{F}(S)$.
**Hay que probar que cumple con las propiedades de un espacio vectorial:**
- **S1.** $(f+g)(x)=f(x)\oplus g(x)=g(x) \oplus f(x) = (g+f)(x)$, (Se cumple por conmutatividad de $V$ por ser un espacio vectorial)
- **S2.** $(f+(g+h))(x) = f(x) \oplus (g + h)(x) = f(x) \oplus (g(x) \oplus h(x)) = (f(x) \oplus g(x)) \oplus h(x)$ $= (f+g) (x) \oplus h(x) = ((f+g)+h)(x)$, (Se cumple por asociatividad de $V$ por ser un espacio vectorial)
- **S3.** El único vector nulo es la función cero, que asigna a cada elemento de $S$ el escalar 0 de $F$. $(0 + f) (x) = 0(x) \oplus f(x) = 0 \oplus f(x) = f(x)$
- **S4.** Dada $f \in V^S$, sea $-f(x)$ el opuesto de $f(x)$, que existe debido a que $V$ es un espacio vectorial, entonces: $$(-f+f)(x) = -f(x) \oplus f(x) = 0(x).$$
- **P1.** Existe un neutro $1$ ya que existe neutro para $\odot$ en $V$, tal que: $(1 \cdot f)(x) = 1 \odot f(x) = f(x)$
- **P2.** $(\lambda_1 \cdot ( \lambda_2 \cdot f ))(x) = \lambda_1 \odot (\lambda_2 \cdot f)(x) = \lambda_1 \odot (\lambda_2 \odot f(x))$ $= (\lambda_1 \cdot \lambda_2) \odot f(x) = ((\lambda_1 \cdot \lambda_2) \cdot f)(x)$
- **D1.** $(\lambda \cdot (f + g))(x) = \lambda \odot (f + g)(x) = (\lambda \odot f(x)) \oplus (\lambda \odot g(x))$ $= (\lambda \cdot f)(x) \oplus (\lambda \cdot g)(x) = (\lambda \cdot f + \lambda \cdot g)(x)$
- **D2.** $((\lambda_1 + \lambda_2)\cdot f)(x) = (\lambda_1 + \lambda_2) \odot f(x) = (\lambda_1 \odot f(x)) \oplus (\lambda_2 \odot f(x))= (\lambda_1 \cdot f + \lambda_2 \cdot f)(x)$

Como cumple con las 8 propiedades del espacio vectorial, entonces $(V^S, +, \cdot)$ **es un $\mathbb{K}$-espacio vectorial.**