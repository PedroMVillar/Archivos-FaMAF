---
Materia: Algoritmos1
tags:
---
Para que el programa S ([[36 - Especificación de un programa]]) resuelva el problema especificado, debe suceder lo siguiente: **Que cada vez que se ejecute el programa comenzando de un estado inicial que satisface la precondición P, la ejecución debe terminar en un estado final que satisface la postcondición Q.**

En general, si tenemos dos predicados P y Q dados, y tenemos una sentencia S dada, podemos 
preguntarnos si vale o no vale lo siguiente:
<center>Cada vez que empiezo de un estado inicial que cumple P,
la ejecución de S termina en un estado final que satisface Q.</center>

Al predicado { P } S { Q } se lo llama **Terna de Hoare** (se llama “Terna” porque tiene tres componentes: la pre, la sentencia y la post)


