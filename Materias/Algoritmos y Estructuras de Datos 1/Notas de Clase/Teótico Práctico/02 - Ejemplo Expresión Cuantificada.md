---
Materia: Algoritmos1
tags:
  - ejercicios
  - expresiones_cuantificadas
---
$$
⟨ ∃ x : x ∈ xs ∧ ∃ y : y ∈ ys : color(x) = color(y) ∧ tamaño(y) > tamaño(x) ⟩
$$

Esta expresión cuantificada se lee como **"Existe al menos un elemento x en la lista xs y un elemento y en la lista ys tal que el color de x es igual al color de y y el tamaño de y es mayor que el tamaño de x."**

Para entender cómo se evalúa esta expresión cuantificada, podemos desglosarla en sus componentes:
1. Rango:
   - El rango de esta expresión cuantificada es el conjunto de pares ordenados `(x,y)` donde `x` está en la lista `xs` y `y` está en la lista `ys`.
2. Término:
   - El término de esta expresión cuantificada es la condición que se aplica a cada par ordenado `(x,y)` en el rango.
   - La condición es que el color de `x` debe ser igual al color de `y` y el tamaño de `y` debe ser mayor que el tamaño de `x`.

Para evaluar esta expresión cuantificada, se debe buscar al menos un par ordenado `(x,y)` en el rango que satisfaga la condición del término. Si se encuentra al menos un par ordenado que cumpla con la condición, entonces la expresión cuantificada es verdadera. De lo contrario, si no se encuentra ningún par ordenado que cumpla con la condición, entonces la expresión cuantificada es falsa.

Por ejemplo, si tenemos las siguientes listas de figuras:

- xs = `[(Trian,Rojo,5), (Cuad,Rojo,10), (Circ,Rojo,2)]`
- ys = `[(Cuad,Azul,15), (Circ,Rojo,15), (Trian,Azul,2)]`

Podemos evaluar la expresión cuantificada de la siguiente manera:

- El rango es el conjunto de pares ordenados (x,y) donde x está en la lista xs y y está en la lista ys. En este caso, el rango es:
  {(Trian,Rojo,5),(Cuad,Rojo,10),(Circ,Rojo,2),(Cuad,Azul,15),(Circ,Rojo,15),(Trian,Azul,2)}

- El término es la condición que se aplica a cada par ordenado (x,y) en el rango. En este caso, la condición es que el color de x debe ser igual al color de y y el tamaño de y debe ser mayor que el tamaño de x.

- Evaluando la expresión cuantificada, podemos ver que el par ordenado `(Circ,Rojo,2)`,`(Circ,Rojo,15)` cumple con la condición del término, ya que ambos tienen el mismo color (Rojo) y el tamaño de `y` (15) es mayor que el tamaño de `x` (2). Por lo tanto, la expresión cuantificada es verdadera.

En resumen, esta expresión cuantificada se utiliza para buscar pares de figuras en dos listas diferentes que cumplan con ciertas condiciones de color y tamaño. Si se encuentra al menos un par que cumpla con las condiciones, entonces la expresión cuantificada es verdadera.