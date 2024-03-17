---
Materia: Algoritmos1
tags:
  - derivación
---
En general un problema complejo puede ser resuelto de manera mas fácil y eficiente si se divide en problemas mas pequeños y concentrándonos en cada etapa en la solución de ese subproblema.
Aplicado a esto, cuando en el medio de una derivación, aparece una expresión no programable (por ejemplo una expresión cuantificada) (y que no es la H.I. si es que estoy en el medio de una inducción). Lo que hacemos al modularizar es inventar una nueva función cuya especificación me indica que calcula esa expresión. Luego, puedo usar esa función en mi derivación para reemplazar la expresión no programable por una llamada a la función. Para terminar el programa, debo obtener aparte un programa para la función que modularicé (haciendo otra derivación).
Usualmente, la función modularizada lo que hace es resolver un problema accesorio del problema original que estoy resolviendo.

