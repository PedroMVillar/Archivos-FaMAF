## Programación Dinámica
El objetivo de la programación dinámica es hacer de los problemas de backtracking algo mas efectivo, es decir bajar el orden de complejidad, esto se obtiene llenando una tabla con valores e ir recurriendo a ellos sin necesidad de calcularlos mas de una vez.

### Ejercicios

![ej1](/Materias/Algoritmos%20y%20Estructuras%20de%20Datos%202/Práctico/Consignas/dp1.png)

Se tienen las denominaciones $d_1,\dots,d_n$ y hay que dar un cambio $k$
Voy a tener que llenar si o si la tabla de arriba hacia abajo ya que siempre mira la fila anterior
La tabla va a ser de tamaño $n+1 \times k+1$
```pascal
fun cambio(d: array[1..n] of nat, k : nat) ret r : nat
	var tabla : array[0..n, 0..k] of nat //creo la tabla para valores
	var aux : nat // auxiliar par calcular minimo
	{- casos base -}
	for i := 0 to n do tabla[i,0] := 0 od // lleno la primer columna con ceros 
	for i := 1 to k do tabla[0,i] := inf od // lleno la primer fila
	{- caso recursivo -}
	for i := 1 to n do // la fila 0 ya esta llena
		for j := 1 to k do // la columna 0 ya esta llena
			aux := inf 
			for q := 0 to (j / d[i]) do // tomo los q de la def recursiva
				aux := min(aux, q + tabla[i-1, j-q*d[i]]) // copio el caso recursivo
			od
			tabla[i,j] := aux
		do
	od
	{- resultado -}
	r := tabla[n,k] // tabla[i,j] = cambio(i,j) para todo i, j
end fun 
```

![ej2](/Materias/Algoritmos%20y%20Estructuras%20de%20Datos%202/Práctico/Consignas/dp2.png)

En el ejercicio anterior no es posible completar la tabla de abajo hacia arriba ya que en cada llamada recursiva accede al elemento en la posición $i-1$ es decir en la fila anterior, o sea que tendríamos que tener si o si llenas las celdas de arriba. Y si se podría de derecha a izquierda. El programa sería:

```pascal
fun cambio(d: array[1..n] of nat, k : nat) ret r : nat
	var tabla : array[0..n, 0..k] of nat 
	var aux : nat 
	for i := 0 to n do tabla[i,0] := 0 od  
	for i := 1 to k do tabla[0,i] := inf od 
	for i := 1 to n do 
		for j := k downto 1 do 
			aux := inf 
			for q := 0 to (j / d[i]) do 
				aux := min(aux, q + tabla[i-1, j-q*d[i]]) 
			od
			tabla[i,j] := aux
		do
	od
	r := tabla[n,k] 
end fun 
```

![ej3](/Materias/Algoritmos%20y%20Estructuras%20de%20Datos%202/Práctico/Consignas/dp3.png)

```pascal
fun cambioA(d : array[1..n] of nat, k : nat) ret r : nat
	var dp : array[0..n, 0..k] of nat // creo la tabla dp 
	var min : nat // variable auxiliar para calcular mínimo
	{- caso base -} 
	for i := 0 to n do dp[i, 0] := 0 od // lleno la primera columna con 0
	{- caso recursivo -}
	for i := 1 to n do 
		for j := 1 to k do
			min := inf
			i' := 1
			while d[i'] <= j then
				min := min(min, dp[i', j-d[i']])
				i' := i' + 1
			od
			dp[i][j] = 1 + min
		od
	od
	r := dp[n,k]
end fun
```

```pascal
fun cambioB(d : array[1..n] of nat, k : nat) ret r : nat
	var dp : array[0..n, 0..k] of nat // creo la tabla dp
	{- casos base -} 
	for i := 0 to n do dp[i, 0] := 0 od // lleno la primera columna con ceros
	for j := 1 to k do dp[n, j] := inf od // lleno la n-ésima fila con infinito
	{- casos recursivos -}
	for i:= n-1 downto 1 do // siempre se mira la siguiente fila por lo que hay que llenar al revés 
		for j:=1 to to k do
			if d[i] > j  then
				dp[i,j] := dp[i+1, j]
			else 
				dp[i,j] := min(dp[i+1, j], 1 + dp[i, j-d[i]])
			fi
		od
	od 
	{- respuesta, llamada principal -}
	r := dp[n,k]
end fun
```

![ej4](/Materias/Algoritmos%20y%20Estructuras%20de%20Datos%202/Práctico/Consignas/dp4.png)

$$
maxImporte(i, h) =
\begin{cases}
0 & h = 0 \\
-\infty & i = 0 \wedge h > 0 \\
maxImporte(i-1, h) & h_i >h>0 \wedge i>0 \\
max(maxImporte(i-1, h), m_i + maxImporte(i-1,h-h_i)) & 0 < h_i \leq h \wedge i > 0 
\end{cases}
$$

```pascal
type Pedido = tuple
				imp : nat
				har : nat
			end tupla

fun maxImporte(p : array[1..n] of Pedido, k : nat) ret r : nat
	var dp : array[0..n, 0..k] // creo la tabla
	{- casos base -}
	for i := 0 to n do dp[i, 0] := 0 od // lleno la primera columna con ceros
	for j := 1 to k do dp[0, j] := inf od // lleno la primera fila con inf
	{- casos recursivos -}
	for i := 1 to n do // la primera fila ya esta llena asi que empiezo por la segunda
		for j := 1 to k do // empiezo también por la segunda columna
			if p[i].har > j then
				dp[i,j] := dp[i-1, j]
			else 
				dp[i,j] := max(dp[i-1, j], p[i].imp + dp[i-1, j - p[i].har])  
		od
	od
	{- respuesta -}
	r := dp[n, k]
end fun
```