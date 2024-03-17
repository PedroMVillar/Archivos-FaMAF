---
Materia: Algoritmos1
tags:
  - haskell
---
La recursión es un concepto fundamental en programación y en Haskell, un lenguaje funcional, se utiliza de manera extensa. La recursión es la técnica mediante la cual una función se define en términos de sí misma. En lugar de utilizar un bucle iterativo, como en muchos lenguajes imperativos, Haskell fomenta el uso de la recursión para expresar patrones de computación de manera clara y concisa.
## Características
- **Definición de la función en términos de sí misma:**
```haskell
factorial :: Integer -> Integer
factorial 0 = 1
factorial n = n * factorial (n - 1)
```
En este ejemplo, `factorial` se define en términos de sí misma. El caso base (`factorial 0 = 1`) indica cuándo detener la recursión, y la otra rama (`factorial n = n * factorial (n - 1)`) indica cómo seguir reduciendo el problema.
- **Caso Base:** Todas las funciones recursivas deben tener un caso base que define el valor de la función cuando los argumentos alcanzan cierta condición. Sin un caso base, la recursión no terminaría y se produciría un bucle infinito.
- **Reducción del Problema:** En cada llamada recursiva, el problema se reduce de alguna manera. En el ejemplo del factorial, el problema se reduce al multiplicar el número actual (`n`) por el resultado de la llamada recursiva con un número menor (`n - 1`).
- **Convergencia:** La recursión debe converger hacia el caso base. En cada llamada recursiva, el problema debe acercarse al caso base para garantizar que la función termine de ejecutarse.

## Ejemplo detallado - Factorial
```haskell
factorial :: Integer -> Integer
factorial 0 = 1
factorial n = n * factorial (n - 1)
```
- **Caso Base:** `factorial 0 = 1`: Cuando `n` es igual a 0, el resultado es 1. Este es el caso base que detiene la recursión.
- **Caso Recursivo:** `factorial n = n * factorial (n - 1)`: Para cualquier otro número `n`, el factorial se calcula multiplicando `n` por el resultado de la llamada recursiva con un número menor (`n - 1`).
- **Evaluación de Ejemplos:** 
	- `factorial 3`:
		- Se evalúa como `3 * factorial 2`.
		- Luego, `factorial 2` se evalúa como `2 * factorial 1`.
		- A su vez, `factorial 1` se evalúa como `1 * factorial 0`.
		- Finalmente, `factorial 0` se evalúa como 1.
		- Substituyendo los resultados hacia atrás, obtenemos `3 * (2 * (1 * 1)) = 6`.
- **Visualización de Llamadas Recursivas:**
```haskell
factorial 3
=> 3 * factorial 2
=> 3 * (2 * factorial 1)
=> 3 * (2 * (1 * factorial 0))
=> 3 * (2 * (1 * 1))
=> 6
```
La recursión permite expresar patrones de manera elegante, pero es asegurarse de que converja hacia el caso base para evitar bucles infinitos. En Haskell, gracias a la evaluación perezosa, la recursión se maneja de manera eficiente, ya que solo se calculan los valores necesarios.