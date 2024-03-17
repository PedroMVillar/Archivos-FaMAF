---
Materia: Algoritmos1
tags:
  - haskell
  - listas
---
- Las listas por comprensión nos dan funcionalidades similares a las del map y filter, entonces es probable que en muchas situaciones se presenten como soluciones alternativas a un mismo problema.
- Las listas por comprensión permiten aprovechar mejor el pattern matching, entonces en los casos donde pueda usar esa característica probablemente sea más piola usar listas por comprensión en lugar de map y filter.
- Con listas por comprensión yo siempre defino una lista, mientras que combinando map y filter con aplicación parcial yo puedo definir funciones, eso los hace más aptos para la composición, por lo tanto en los casos en que yo necesite componer (o trabajar al nivel de función por cualquier otro motivo, puede resultar más adecuado usar map, filter, aplicación parcial, composición, etc.

Por ejemplo si queremos representar el siguiente conjunto 
$$
S = \{ 2x \ | \ x\in N, x\leq 10 \}
$$
Podemos escribirlo como
```ghci
ghci> [x*2 | x <- [1..10]]
[2,4,6,8,10,12,14,16,18,20]
```
Como podemos ver, obtenemos el resultado deseado. Ahora vamos a añadir una condición (o un predicado) a esta lista intensional. Los predicados van después de la parte donde enlazamos las variables, separado por una coma. Digamos que solo queremos los elementos que su doble sea mayor o igual a doce:
```ghci
ghci> [x*2 | x <- [1..10], x*2 >= 12]
[12,14,16,18,20]
```
Otro ejemplo puede ser si quisiéramos todos los números del 50 al 100 cuyo resto al dividir por 7 fuera 3:
```ghci
ghci> [ x | x <- [50..100], x `mod` 7 == 3]
[52,59,66,73,80,87,94]
```