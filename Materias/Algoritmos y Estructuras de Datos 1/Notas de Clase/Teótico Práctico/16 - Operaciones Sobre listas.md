---
Materia: Algoritmos1
tags:
  - listas
---
Hay cinco operaciones fundamentales sobre listas, que son las siguientes:
- **Concatenar**  $++ : [A] → [A] → [A]$
	El operador ++ toma dos listas del mismo tipo y devuelve una lista del mismo tipo, que consiste en las dos anteriores, puestas una inmediatamente después de la otra. Si xs e ys son listas del mismo tipo, la concatenación de ambas se denota xs ++ ys.
- **Longitud** : $\# : [A] → A$
	El operador # devuelve la longitud de una lista, es decir, la cantidad de elementos que la misma contiene. Si xs es una lista, su longitud se denota \#xs.
- **Tomar** n: $↑ \ : [A] → Num → [A]$
	El operador ↑ toma una lista y un número natural n, y devuelve la lista de los primeros n elementos de la lista original. Cuando n es mayor que la longitud de la lista, ↑ devuelve la lista completa. Si xs es una lista, la lista de sus primeros n elementos se denota xs↑n.
- **Tirar** n: $↓ \ : [A] → Num → [A]$
	El operador ↓ toma una lista y un número natural n, y devuelve la lista que resulta al eliminar de la lista original los primeros n elementos. Si xs es una lista, la lista sin sus primeros n elementos se denota xs↓n.
- **Indexar**: $! : [A] → Num → A$
	El operador ! toma una lista y un número natural, y devuelve el elemento de la lista que se encuentra en la posición indicada por el número natural. Si xs es una lista, el elemento que ocupa el lugar i se denota xs!i. Tener en cuenta que el primer elemento de la lista ocupa la posición 0 y que xs!i no está definido cuando i > \#xs − 1.

## Propiedades:

![[concat.JPG]]
![[long1.JPG]]
![[long2.JPG]]
![[tomartirar.JPG]]
![[index.JPG]]