
## Algoritmos Voraces
Un algoritmo greedy es aquel que tomando exclusivamente la solución óptima local puede generar una solución óptima global. Usualmente este algoritmo se utiliza en problemas donde se busca encontrar el mínimo o el máximo de algo, no siempre es la estrategia correcta para resolver estos problemas, pero en muchos casos se puede utilizar directamente o ver el reto de alguna manera que nos permita aplicar la técnica.
```pascal
fun voraz(C:Set of "Candidato") ret S : "Solución a construir"
	S := "solución vacía"
	do S "no es solución" -> 
		c := "seleccionar" de C
		elim(C,c)
		if "agregar c a S es factible" then
			"agregar c a S"
		fi
	od
end fun
```

1. Inicialmente ningún candidato ha sido considerado, es decir, ni incorporado ni descartado.
2. En cada paso se utiliza la función de *selección* para elegir cuál candidato considerar.
3. Se chequea que el candidato considerado sea factible para incorporarlo a la solución y se lo agrega o no.
4. Se repiten los pasos anteriores hasta que la colección de candidatos elegidos sea una solución.


*¿Cómo resolver ejercicios de algoritmos greedy?*:
- Interpretar la consigna e identificar el problema: definir con que estructuras de datos se va a trabajar, los tipos de datos de entrada y salida. 
- Establecer un criterio de selección adecuado:
- Escribir el algoritmo.

### Ejercicios

![[Pasted image 20240604182710.png]]

```pascal
type Localidad = tuple
					name : String
					dist : Nat
				end tuple

fun menorCombustible(A: Nat, l1 : list of Localidad) ret res : List of Localidad
	var l2 : list of Localidad
	var distSum : Nat 
	distSum := 0 // variable auxiliar
	res := empty_list() // primero el conjunto de soluciones es vacío
	l2 := copy_list(l1) // copio la lista original para modificarla
	do !list_is_empty(l2) ->
		head := head(l2)
		tail(l2)
		if distSum + head.dist <= A then
			distSum := distSum + head.dist
			prevHead := head
		else 
			addr(res, prevHead)
			distSum := head.dist
		fi
	od
end fun
```

Evaluando a mano:
```
A := 10
l1 := [(“Localidad1”, 3), (“Localidad2”, 4), (“Localidad3”, 5), (“Localidad4”, 6), (“Localidad5”, 7)]
```

En este caso, el algoritmo funcionaría de la siguiente manera:

1. Comienza con `distSum = 0` y `res = []`.
2. En la primera iteración, `head = (“Localidad1”, 3)`. Como `distSum + head.dist = 3` es menor o igual que `A = 10`, `distSum` se actualiza a `3` y `prevHead` se actualiza a `head`.
3. En la segunda iteración, `head = (“Localidad2”, 4)`. Como `distSum + head.dist = 7` es menor o igual que `A = 10`, `distSum` se actualiza a `7` y `prevHead` se actualiza a `head`.
4. En la tercera iteración, `head = (“Localidad3”, 5)`. Como `distSum + head.dist = 12` es mayor que `A = 10`, `prevHead` se agrega a `res`, `distSum` se actualiza a `head.dist = 5` y `prevHead` se actualiza a `head`.
5. En la cuarta iteración, `head = (“Localidad4”, 6)`. Como `distSum + head.dist = 11` es mayor que `A = 10`, `prevHead` se agrega a `res`, `distSum` se actualiza a `head.dist = 6` y `prevHead` se actualiza a `head`.
6. En la quinta iteración, `head = (“Localidad5”, 7)`. Como `distSum + head.dist = 13` es mayor que `A = 10`, `prevHead` se agrega a `res`, `distSum` se actualiza a `head.dist = 7` y `prevHead` se actualiza a `head`.
7. Al final del algoritmo, `res = [(“Localidad2”, 4), (“Localidad3”, 5), (“Localidad4”, 6)]`.

![[Pasted image 20240605155433.png]]
```pascal
type ballena = tuple
				id: Nat
				timeLeft: Nat
			end tuple

fun salvarBallenas(b1 : Set of Ballena) ret res : Queue of Ballena
	var bV : Set of Ballena // conjunto de ballenas vivas
	bV := copy_set(b1)
	var time : Nat // Tiempo
	time := 0
	res := empty_queue() // primero la solución es vacía
	do !set_is_empty(bV) ->
		salvada := selectBallena(bV) 
		enqueue(res, salvada)
		set_elim(bV, salvada)
		tmp := time + salvada.timeLeft
		limpiar(bV, tmp)
	od
end fun

fun selectBallena(b : Set of Ballena) ret res : Ballena
	var temp : Set of Ballena
	temp := copy_set(b) // copia temporar para modificarla
	var head : Ballena
	res := set_get(temp)
	set_elim(temp, res)
	do !set_is_empty(temp) ->
		head := get(temp)
		set_elim(temp, head)
		if head.timeLeft < res.timeLeft then
			res := head
		fi
	od
end fun

proc limpiar(in/out b : Set of Ballena, in time : Nat) 
	var tmp : Set of Ballena
	tmp := copy_set(Ballena)
	var head : Ballena
	do !set_is_empty(tmp) ->
		head := set_get(tmp)
		set_elim(tmp, head)
		if head.timeLeft < time then
			set_elim(b, head)
		fi
	od
end proc
```

![[Pasted image 20240605161810.png]]

```pascal
type Amigo = tuple
				partida : Nat
				regreso : Nat
			end tuple 

fun prestar(a : Set of Amigo) ret res : Queue of Amigo
	var amigosPendientes : Set of Amigos
	amigosPendientes := copy_set(a)
	var select: Amigo
	var dia: Nat
	res := empty_queue()
	amigosPendientes := set_copy(a)
	do !set_is_empty(amigosPendientes) ->
		select := seleccionarAmigo(amigosPendientes)
		set_elim(amigosPendientes, select)
		dia := select.regreso
		enqueue(res, select)
		eliminarAmigos(amigosPendientes, dia)
	od
end fun

fun seleccionarAmigo(a : Set of Amigo) ret res : Amigo
	var temp : Set of Amigo
	temp := copy_set(a)
	var head : Amigo
	res := set_get(temp)
	do !is_empty_set(temp) ->
		head := set_get(temp)
		elim(temp, head)
		if head.regreso < res.regreso then
			res := head
		fi
	od
end fun

proc eliminarAmigos(in/out a : Set of Amigo, in dia : Nat)
	var temp : Set of Amigo
	temp := copy_set(a)
	var head : Amigo
	do !is_empty_set(temp) ->
		head := set_get(temp)
		set_elim(temp, head)
		if head.partida <= dia then
			set_elim(a, head)
		fi
	od
end proc
```

![[Pasted image 20240605171152.png]]

```pascal
type Factura = tuple
				tMin : Nat
				tMax : Nat
			end tuple

fun sacarFacturas(f : Set of Factura) ret res : Queue of Nat
	var f2 : Set of Factura
	f2 := copy_set(f)
	var select : Factura
	var t : Nat
	res := empty_queue()
	do !set_is_empty(f2) ->
		select := seleccionarFactura(f2)
		set_elim(f2, select)
		t := select.tMax
		enqueue(res, t)
		eliminarFacturas(f2, t)
	od
end fun

fun seleccionarFactura(f : Set of Factura) ret res : Factura
	var f2 : Set of Factura
	f2 = copy_set(f)
	res = set_get(f2)
	set_elim(f2, res)
	var head : Factura
	do !not_is_empty(f2) ->
		head := set_get(f2)
		set_elim(f2)
		if head.tMax < res.tMax then
			res := head
		fi
	od
end fun

proc eliminarFacturas(in/out f : Set of Factura, t : Nat)
	var f2 : Set of Factura
	f2 = copy_set(f)
	var head : Factura
	do !is_empty_set(f2) ->
		head := set_get(f2)
		set_elim(f2, head)
		if head.tMin <= t then
			set_elim(f, head)
		fi
	od 
end fun
``` 

![[Pasted image 20240606181916.png]]



## Algoritmos Voraces sobre grafos (Prim y Djisktra)
```
```

## Backtracking
```
```

## Programación Dinámica
```
```

## BFS y DFS
```
```

