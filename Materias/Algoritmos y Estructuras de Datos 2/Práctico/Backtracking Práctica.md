## Backtracking
Los algoritmos de Backtracking siempre encuentran solución cuando haya. Si no hay solución, el algoritmo termina sin encontrarla. En el caso de que haya más de una solución, el algoritmo encuentra una de ellas.
- Son algoritmos ineficientes, se basan en la fuerza bruta, probar todas las posibilidades hasta encontrar la mejor, sin tener un criterio de selección como un algoritmo voraz.

```pascal
fun backtracking(C:Set of "Candidato") ret S : "Solución a construir"
	if "caso base 1" then 0
	else if "caso base 2" then "inf/-inf"
	else if "no es factible la solucion actual" then "descarto opción"
	else "es factible, caso recursivo" S := min("mínimo entre usar o no la opción actual")
end fun
```

