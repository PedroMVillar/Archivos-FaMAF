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

Lo único que se resuelve en los ejercicios de backtracking es la expresión recursiva de un problema a resolver, suele ser de la forma:

$$
\text{funcion("parametros")}
\begin{cases}
0 \quad & \text{caso base} \\
\infty & \quad \text{caso base} \\
\text{"no considerar" } & \text{"no es factible"} \\
\text{"buscar optimo"} & \text{"caso recursivo"}
\end{cases}
$$
### Ejercicios

![ej3](/Materias/Algoritmos%20y%20Estructuras%20de%20Datos%202/Práctico/Consignas/bej3.png)

$$
maxImporte(i, h) =
\begin{cases}
0 & h = 0 \\
-\infty & i = 0 \wedge h > 0 \\
maxImporte(i-1, h) & h_i >h>0 \wedge i>0 \\
max(maxImporte(i-1, h), m_i + maxImporte(i-1,h-h_i)) & 0 < h_i \leq h \wedge i > 0 
\end{cases}
$$
- **Primer caso**: no hay harina en buen estado disponible,
- **Segundo caso**: no hay pedidos pero hay harina disponible,
- **Tercer caso**: el pedido requiere mas harina de la que hay,
- **Cuarto caso**: es factible, se busca como opción.

![ej4](/Materias/Algoritmos%20y%20Estructuras%20de%20Datos%202/Práctico/Consignas/bej4.png)

$$
arrojarObjetos(i, p) =
\begin{cases}
0 & p \leq 0 \\
\infty & i = 0 \wedge p >0 \\
min(arrojarObjetos(i-1, p), v_i + arrojarObjetos(i-1, p - p_i)) & i \geq 0 \wedge p > 0
\end{cases}
$$
- **Primer paso**: no hay que soltar peso,
- **Segundo caso**: hay que soltar peso pero no hay objetos que tirar.,
- **Tercer caso**: es factible, se evalúan las opciones.

![ej5](/Materias/Algoritmos%20y%20Estructuras%20de%20Datos%202/Práctico/Consignas/bej5.png)

$$
maxAlq(i, d) = 
\begin{cases}
0 & d \leq 0 \\
-\infty & i = 0 \wedge d >0 \\
maxAlq(i-1, d) & (r_i - p_i) < d \wedge d > 0 \\
max(maxAlq(i-1,d), (r_i - p_i)*m_i + maxAlq(i-1, d - (r_i - p_i))) & (r_i - p_i) \geq d > 0 
\end{cases}
$$
- **Primer caso**: no hay días de las vacaciones,
- **Segundo caso**: no hay amigos que quieran alquilarlo pero si hay días de vacaciones,
- **Tercer caso**: hay amigos pero quieren alquilar durante mas tiempo del que hay.
- **Cuarto caso**: hay amigos que van a estar en algún momento de las vacaciones dispuestos a  alquilar.

![ej6](/Materias/Algoritmos%20y%20Estructuras%20de%20Datos%202/Práctico/Consignas/bej6.png)

$$
mayorMP(i, ma, mb) =
\begin{cases}
0 & ma \leq 0 \wedge mb \leq 0 \\
-\infty & i = 0 \wedge ma > 0 \wedge mb >0 \\
mayorMP(i-1, ma, mb) & a_i > ma \wedge b_i > mb \wedge mb > 0\\
max(mayorMP(i-1, ma, mb), v_i + mayorMP(i-1, ma - a_i, mb - b_i)) & a_i \leq ma \wedge b_i \leq mb  \wedge ma > 0 \vee mb >0
\end{cases}
$$
- **Primer caso**: no hay materia prima disponible de ninguno de los dos tipos,
- **Segundo caso**: no hay productos que fabricar pero si materia prima disponible,
- **Tercer caso**: la materia prima necesaria para fabricar el producto excede la disponible,
- **Cuarto caso**: es factible, se evalúa con los demás casos.

![ej7](/Materias/Algoritmos%20y%20Estructuras%20de%20Datos%202/Práctico/Consignas/bej7.png)

$$
mochila2(i, w1, w2) =
\begin{cases}
0 & w1 \leq 0 \wedge w2 \leq 0 \\
-\infty & i = 0 \wedge w1 >0 \wedge w2 > 0 \\
mochila2(i-1, w1, w2) &  w_i >w1 \wedge w_i > w2 \\
max(mochila2(i-1, w1, w2), v_i + mochila2(i-1, w1 - w_i, w2)) & w_i \leq w1 \wedge w_i > w2 \\
max(mochila2(i-1, w1, w2), v_i + mochila2(i-1, w1, w2 - w_i)) & w_i > w1 \wedge w_i \leq w2 \\
max(mochila2(i-1,w1, w2), v_i + mochila2(i-1, w1 - w_i, w2), v_i + mochila2(i-1, w1, w2 - w_i)) & w_i \leq w1 \wedge w_i \leq w2
\end{cases}
$$
- **Primer caso**: ninguna de las mochilas tiene capacidad disponible,
- **Segundo caso**: no hay objetos que meter pero si hay capacidades,
- **Tercer caso**: el objeto no entra en ninguna de las dos mochilas,
- **Cuarto caso**: el objeto solo entra en la primera mochila, 
- **Quinto caso**: el objeto solo entra en la segunda mochila,
- **Sexto caso**: el objeto entra en las dos mochilas.