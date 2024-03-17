---
Materia: Algoritmos1
tags:
  - expresiones_cuantificadas
---
## Estructura de una Expresión Cuantificada
$$
\langle \ \oplus : R : T \  \rangle 
$$
Donde:
- $\oplus$ designa un **operador asociativo y conmutativo**, por ejemplo $+,\bigvee, \bigwedge, Max, Min, etc.$
- $R$ es un predicado que se denomina **rango de especificación.**
- $T$ es una función denominada **término de cuantificación**, es aquella que será aplicada a cada elemento que pase el rango de especificación.

## ¿Qué es una expresión cuantificada y cómo se evalúa?
Una expresión cuantificada es una expresión lógica que involucra cuantificadores, como "para todo" (∀) o "existe" (∃), y variables que toman valores de un conjunto dado. Estas expresiones se utilizan en matemáticas, lógica y programación para expresar propiedades de conjuntos y estructuras de datos.

Para evaluar una expresión cuantificada, primero se debe determinar el universo de cuantificación, que es el conjunto de valores posibles que pueden tomar las variables. Luego, se debe especificar el rango, que es el subconjunto del universo de cuantificación que se está considerando. Finalmente, se debe aplicar el término, que es la función que se aplica a los elementos del rango para determinar si la expresión es verdadera o falsa.

Por ejemplo, la expresión cuantificada "para todo x en el conjunto A, existe un y en el conjunto B tal que x es menor que y" se evalúa determinando el universo de cuantificación (los conjuntos A y B), especificando el rango (todos los pares ordenados (x,y) donde x está en A y y está en B), y aplicando el término (verificar si x es menor que y para cada par ordenado en el rango). Si la expresión es verdadera para todos los pares ordenados en el rango, entonces la expresión cuantificada es verdadera.

## ¿Cómo se define el rango y el término en una expresión cuantificada?
En una expresión cuantificada, el rango y el término son componentes clave que definen la evaluación de la expresión. Aquí se explica cómo se definen y utilizan:

1. Rango:
   - El rango especifica el conjunto de elementos del universo de cuantificación que se están considerando en la expresión cuantificada.
   - En el contexto de la cuantificación con más de una variable, el rango puede ser un conjunto de pares ordenados que satisfacen ciertas condiciones, como se muestra en las expresiones cuantificadas 
   $$⟨ ∃ i, j : 2 ⩽ i < n ∧ 2 ⩽ j < n : i * j = n ⟩$$
   - El rango restringe el universo de cuantificación a un subconjunto específico de elementos que se están evaluando en la expresión cuantificada.

2. Término:
   - El término es la función o predicado que se aplica a los elementos del rango para determinar si la expresión cuantificada es verdadera o falsa.
   - En el contexto de las expresiones cuantificadas sobre listas de figuras, el término puede ser una condición que se aplica a cada elemento del rango, como en el ejemplo $$⟨ ∀ x : x ∈ ℓ xs : rojo. x ⟩.$$
   - El término define la propiedad que se evalúa para cada elemento del rango, y su resultado contribuye a la evaluación general de la expresión cuantificada.

En resumen, el rango y el término son componentes esenciales que delimitan el alcance de la cuantificación y especifican la condición que se aplica a los elementos del rango para determinar la verdad o falsedad de la expresión cuantificada.
## Ejemplos
1. Expresión cuantificada sobre conjuntos:
    $$⟨ ∀ x ∈ S : P(x) ⟩$$
   - Significado: "Para todo elemento x en el conjunto S, la propiedad P(x) es verdadera."
   - Ejemplo: $$⟨ ∀ n ∈ N : n > 0 ⟩,$$, que se lee como "Para todo número natural n, n es mayor que 0."

2. Expresión cuantificada sobre listas:
   - ⟨ ∃ x : x ∈ xs : Q(x) ⟩
   - Significado: "Existe al menos un elemento x en la lista xs para el cual la propiedad Q(x) es verdadera."
   - Ejemplo: ⟨ ∃ f : f ∈ figuras : rojo. f ⟩, que se lee como "Existe al menos una figura en la lista de figuras que es roja."

3. Expresión cuantificada con múltiples variables:
   - ⟨ ∀ i, j : i > 0 ∧ j > 0 : i * j > 0 ⟩
   - Significado: "Para todo par de números enteros positivos i y j, el producto i * j es mayor que 0."
   - Este tipo de expresión cuantificada involucra múltiples variables y condiciones que deben cumplirse simultáneamente.

Estos ejemplos ilustran cómo las expresiones cuantificadas se utilizan para expresar propiedades sobre conjuntos, listas y relaciones entre variables en diferentes contextos matemáticos y de programación.
