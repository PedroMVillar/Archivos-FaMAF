---
Materia: Algoritmos1
tags:
  - derivación
  - invariante
---
El método usado para construir un ciclo consiste en plantear la forma de este dejando algunas expresiones sin resolver, lo cual puede pensarse como ecuaciones con estas (meta)variables formales como incógnitas. Luego calculamos para “despejar” las incógnitas. Este proceso puede dar lugar a nuevas expresiones las cuales no admitan una expresión simple en términos de las variables de programa. Una forma de resolver esta situación es introducir nuevas variables que se mantengan invariantemente igual a algunas de estas subexpresiones. Esto resuelve el problema a costa de introducir la necesidad de mantener el nuevo invariante. La técnica de fortalecimiento de invariantes es en algunos casos análoga a la aplicación en funcional de la técnica de modularización (junto con la técnica de tuplas para mejorar la eficiencia) y en otros a una forma particular de aplicación de la técnica de generalización.
Es decir se acude a esto cuando derivando el cuerpo del ciclo me trabo porque hay una parte no programable, entonces, necesito una nueva variable y una hipótesis que me diga que la variable vale esa parte no programable y tengo dos opciones:
- Replantear S2 para que tenga un ciclo anidado. Funciona siempre.
- Fortalecer el invariante y replantear el ciclo principal. Funciona a veces pero da un programa más eficiente.
