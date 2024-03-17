---
Materia: Algoritmos1
tags:
  - ejercicios
  - derivación
---
## Ejemplo 1
Derivar la siguiente especificación:
$$
todosPares.xs = 〈 ∀ i : 0≤i< \#xs : par.(xs!i) 〉
$$
Para derivar lo haremos por inducción en xs.
### Caso base 
Tomando xs = [ ]:

<u>todosPares.[ ]</u>
= { especificación }
〈 ∀ i : 0≤i<<u>#[ ]</u> : par.([ ]!i) 〉
= { definición de #, por regla de Leibniz }
〈 ∀ i : <u> 0≤i<0 </u> : par.([ ]!i) 〉
= { aritmética }
〈 ∀ i :<u> False </u>: par.([ ]!i) 〉
= { rango vacío }
True

### Caso inductivo
<u>todosPares.(y►ys)</u>
= { especificación }
〈 ∀ i : 0≤i<<u>#(y►ys</u>) : par.((y►ys)!i) 〉
= { def. de # }
〈 ∀ i : <u>0≤i<1+#ys</u> : par.((y►ys)!i) 〉
= { aritmética }
〈 ∀ i : <u>0=i ∨ 1≤i<1+#y</u>s : par.((y►ys)!i) 〉
= { partición de rango }
〈 ∀ i :<u> 0=i </u>: par.((y►ys)!i) 〉 ∧ 〈 ∀ i : 1≤i<1+#ys : par.((y►ys)!i) 〉
= { rango unitario }
par.(<u>(y►ys)!0</u>) ∧ 〈 ∀ i : 1≤i<1+#ys : par.((y►ys)!i) 〉
= { def. de ! }
par.y ∧ 〈 ∀ <u>i : 1≤i<1+#ys : par.((y►ys)!i)</u> 〉
= { cambio de variable f.j = j+1}
par.y ∧ 〈 ∀ j : 1≤j+1<1+#ys : par.(<u>(y►ys)!(j+1)) </u>〉
= { def. de !, regla de Leibniz }
par.y ∧ 〈 ∀ j : <u>1≤j+1<1+#ys </u>: par.(ys!j) 〉
= { aritmética, resto 1 a cada término de la desigualdad }
par.y ∧ <u>〈 ∀ j : 0≤j<#ys : par.(ys!j) 〉</u>
= { HI }
par.y ∧ todosPares.ys

### Resultado final
$$
\begin{align*}
& todosPares :: [Int] → Bool \\
& todosPares.[ ] ≐ True \\
& todosPares.(y:ys) ≐ par.y ∧ todosPares.ys 
\end{align*}
$$

---
## Ejemplo 2
Derivar la siguiente especificación:
$$
sum_cuad.xs = 〈 ∑ i : 0 ≤ i < \#xs : xs!i * xs!i 〉
$$
Para derivar lo haremos por inducción en xs.

### Caso base 
Tomando xs = [ ]:
<u>sum_cuad.[ ]</u>
= { especificación }
〈 ∑ i : 0 ≤ i <<u> #[ ]</u> : [ ]!i \* [ ]!i 〉
= { def. de # }
〈 ∑ i :<u> 0 ≤ i < 0</u> : [ ]!i \* [ ]!i 〉
= { lógica }
〈 ∑ i :<u> False </u>: [ ]!i \* [ ]!i 〉
= { rango vacío }
0

## Paso inductivo
<u>sum_cuad.(y►ys)</u>
= { especificación }
〈 ∑ i : 0 ≤ i <<u> #(y►ys)</u> : (y►ys)!i \* (y►ys)!i 〉
= { def. de # }
〈 ∑ i :<u> 0 ≤ i < \#ys + 1</u> : (y►ys)!i \* (y►ys)!i 〉
= { lógica: 0 ≤ i < \#ys + 1 ≡ i = 0 ∨ 1 ≤ i < \#ys + 1 }
〈 ∑ i :<u> i = 0 ∨ 1 ≤ i < \#ys + 1 </u>: (y►ys)!i \* (y►ys)!i 〉
= { partición rango (ya que los rangos son disjuntos) }
〈 ∑ i :<u> i = 0 </u>: (y►ys)!i \* (y►ys)!i 〉+ 〈 ∑ i : 1 ≤ i <  \#ys + 1 : (y►ys)!i \* (y►ys)!i 〉
= { rango unitario }
<u>(y►ys)!0</u> \* (y►ys)!0 + 〈 ∑ i : 1 ≤ i < \#ys + 1 : (y►ys)!i \* (y►ys)!i 〉
= { def. ! }
y \* y + <u>〈 ∑ i : 1 ≤ i < \#ys + 1 : (y►ys)!i \* (y►ys)!i 〉</u>
= { cambio de variable con f.j = j + 1 (pero reusamos la letra i ) }
y \* y + 〈 ∑ i : 1 ≤ i + 1 < \#ys + 1 : (y►ys)!(i + 1) \* (y►ys)!(i + 1) 〉
= { def. ! }
y \* y + 〈 ∑ i :<u> 1 ≤ i + 1 < \#ys + 1</u> : ys!i \* ys!i 〉
= { restamos 1 en los miembros de la desigualdad }
y \* y + <u>〈 ∑ i : 0 ≤ i < \#ys : ys!i \* ys!i 〉</u>
= { H. I. }
y * y + sum_cuad.ys
### Resultado final
$$
\begin{align*}
& sum\_cuad : [Int] -> Int \\
& sum\_cuad.[ ] ≐ 0 \\
& sum\_cuad.(x►xs) ≐ x * x + sum_cuad.xs
\end{align*}
$$
---


## Ejemplo 3
Derivar la siguiente especificación:
$$
cuantos.p.xs = 〈 N i : 0 ≤ i < \#xs : p.(xs!i) 〉
$$
Para derivar lo haremos por inducción en xs.
### Caso base 
Tomando xs = [ ]:

<u>cuantos.p.[ ]</u>
= { especificación }
〈 N i : 0 ≤ i < <u>#[ ]</u> : p.([ ]!i) 〉
= { def # }
〈 N i : <u>0 ≤ i < 0 </u>: p.([ ]!i) 〉
= { lógica }
〈 N i :<u> False </u>: p.([ ]!i) 〉
= { rango vacío del conteo }
0

### Paso inductivo
<u>cuantos.p.(y ► ys)</u>
= { especificación }
〈 N i : 0 ≤ i < <u>#(y►ys)</u> : p.((y►ys)!i) 〉
= { def # }
〈 N i : <u>0 ≤ i < \#ys + 1</u> : p.((y►ys)!i) 〉
= { lógica }
〈 N i :<u> i = 0 ∨ 1 ≤ i < \#ys + 1</u> : p.((y►ys)!i) 〉
= { partición de rango para conteo (con predicados disjuntos) }
〈 N i :<u> i = 0 </u>: p.((y►ys)!i) 〉 + 〈 N i : 1 ≤ i < \#ys + 1 : p.((y►ys)!i) 〉
= { rango unitario para conteo }
( p.(<u>(y►ys)!0</u>) → 1
⌷ ¬ p.(<u>(y►ys)!0</u>) → 0
) + 〈 N i : 1 ≤ i < \#ys + 1 : p.((y►ys)!i) 〉
= { def de ! }
( p.y → 1
⌷ ¬ p.y → 0
) + 〈 <u>N i : 1 ≤ i < \#ys + 1 : p.((y►ys)!i)</u> 〉
= { cambio de variable i → i + 1 (f.i = i + 1, reusamos el mismo nombre de variable) }
( p.y → 1
⌷ ¬ p.y → 0
) + 〈 N i :<u> 1 ≤ i + 1 < \#ys + 1</u> : p.((y►ys)!(i+1)) 〉
= { resto 1 en la desigualdad }
( p.y → 1
⌷ ¬ p.y → 0
) + 〈 N i : 0 ≤ i < \#ys : p.((y►ys)!(i+1)) 〉
= { def. de ! }
( p.y → 1
⌷ ¬ p.y → 0
) + 〈 N i : 0 ≤ i < \#ys : p.(ys!i) 〉
= { H.I. }
( p.y → 1
⌷ ¬ p.y → 0
) + cuantos.p.ys
= { reescribo }
( p.y → 1 + cuantos.p.ys
⌷ ¬ p.y → 0 + cuantos.p.ys
)
= { neutro + }
( p.y → 1 + cuantos.p.ys
⌷ ¬ p.y → cuantos.p.ys
)

### Resultado final
$$
\begin{align*}
& cuantos : (A → Bool) → [A] → Nat \\
& cuantos.p.[ ] ≐ 0 \\
& cuantos.p.(x►xs) ≐ ( p.x → 1 + cuantos.p.xs \\
&⌷ ¬ p.x → cuantos.p.xs
)
\end{align*}
$$
---

## Ejemplo 4
Derivar la siguiente especificación
$$
busca.e.xs = 〈Min \ i : 0 ≤ i < \# xs ∧ xs!i = e : i 〉
$$
Para derivar lo haremos por inducción en xs.
### Caso base
Tomando xs = [ ] :

<u>busca.e.[ ]</u>
= { especificación }
〈Min i : 0 ≤ i < <u>#[ ] </u>∧ [ ]!i = e : i 〉
= { def. # }
〈Min i : <u>0 ≤ i < 0</u> ∧ [ ]!i = e : i 〉
= { lógica }
〈Min i : <u>False ∧ </u>[ ]!i = e : i 〉
= { absorbente }
〈Min i : <u>False </u>: i 〉
= { rango vacío }
$+\infty$
### Paso inductivo
<u>busca.e.(y►ys)</u>
= { especificación }
〈Min i : 0 ≤ i <<u> #(y►ys)</u> ∧ (y►ys)!i = e : i 〉
= { def. # }
〈Min i : <u>0 ≤ i < \#ys + 1</u> ∧ (y►ys)!i = e : i 〉
= { lógica }
〈Min i : <u>(i = 0 ∨ 1 ≤ i < \#ys + 1) ∧ (y►ys)!i = e</u> : i 〉
= { distributividad }
〈Min i : <u>( i = 0 ∧ (y►ys)!i = e ) ∨ ( 1 ≤ i < \#ys + 1 ∧ (y►ys)!i = e )</u> : i 〉
= { partición de rango }
〈Min i :<u> i = 0 ∧ (y►ys)!i = e</u> : i 〉 min 〈Min i : 1 ≤ i < \#ys + 1 ∧ (y►ys)!i = e : i 〉
= { Leibniz: reemplazo de iguales por iguales en una conjunción }
〈Min i : i = 0 ∧ <u>(y►ys)!0</u> = e : i 〉 min 〈Min i : 1 ≤ i < \#ys + 1 ∧ (y►ys)!i = e : i 〉
= { def. de ! }
〈Min i : i = 0 ∧ y = e : i 〉 min 〈Min i : 1 ≤ i < \#ys + 1 ∧ (y►ys)!i = e : i 〉
**Se forma un análisis por casos dentro de la derivación**
- Caso y = e:
	= { sustitución }
〈Min i : <u>i = 0 ∧ True</u> : i 〉 min 〈Min i : 1 ≤ i < \#ys + 1 ∧ (y►ys)!i = e : i 〉
= { lógica }
〈Min i : <u>i = 0 </u>: i 〉 min 〈Min i : 1 ≤ i < \#ys + 1 ∧ (y►ys)!i = e : i 〉
= { rango unitario }
0 min <u>〈Min i : 1 ≤ i < \#ys + 1 ∧ (y►ys)!i = e : i 〉</u>
= { cambio de variable i → i + 1 }
0 min 〈Min i : <u>1 ≤ i + 1 < \#ys + 1</u> ∧ (y►ys)!(i+1) = e : i + 1 〉
= { resto 1 en la desigualdad }
0 min 〈Min i : 0 ≤ i < \#ys ∧ <u>(y►ys)!(i+1)</u> = e : i + 1 〉
= { def. de ! }
0 min 〈Min i : 0 ≤ i < \#ys ∧ ys!i = e :<u> i + 1 </u>〉
= { + distribuye con Min (A6) }
0 min ( <u>〈Min i : 0 ≤ i < \#ys ∧ ys!i = e : i 〉</u>+ 1 )
= { H.I. }
<u>0 min ( busca.e.ys + 1 )</u>
= { 0 absorbe } 
0
- Caso y ≠ e:
	= { sustitución }
〈Min i : <u>i = 0 ∧ False</u> : i 〉 min 〈Min i : 1 ≤ i < \#ys + 1 ∧ (y►ys)!i = e : i 〉
= { lógica }
〈Min i : <u>False</u> : i 〉 min 〈Min i : 1 ≤ i < \#ys + 1 ∧ (y►ys)!i = e : i 〉
= { rango vacío }
<u>+infinito min</u> 〈Min i : 1 ≤ i < \#ys + 1 ∧ (y►ys)!i = e : i 〉
= { neutro del min }
<u>〈Min i : 1 ≤ i < \#ys + 1 ∧ (y►ys)!i = e : i 〉</u>
= { mismos pasos que en el otro caso }
busca.e.ys + 1

### Resultado final
$$
\begin{align*}
& busca : A → [ A ] → Nat \\
& busca.e.[ ] ≐ +infinito \\
& busca.e.(x►xs) ≐ ( x = e → 0 \\
&[] \ x ≠ e → busca.e.ys + 1 \\
&)
\end{align*}
$$
---
## Ejemplo 5
Derivar la siguiente especificación:
$$
sum par.n = 〈 ∑ i : 0 ≤ i ≤ n ∧ par.i : i〉
$$
Para derivar lo haremos por inducción en n.
### Caso base
Tomando n = 0:

<u>sum par.0</u>
= { especificación }
〈 ∑ i :<u> 0 ≤ i ≤ 0</u> ∧ par.i : i 〉
= { aritmética }
〈 ∑ i :<u> i = 0 ∧ par.i</u> : i 〉
= { rango unitario y condición }
<u>( par.0 → 0
| ¬ par.0 → 0
)</u>
= { aritmética }
0

### Paso inductivo
Tomando n = k+1 :

<u>sum par.(k+1)</u>
= { especificación }
〈 ∑ i :<u> 0 ≤ i ≤ k+1</u> ∧ par.i : i  〉
= { Reescribimos }
〈 ∑ i : <u>(0 ≤ i ≤ k v i = k+1) ∧ par.i</u> : i  〉
= { distributividad }
〈 ∑ i : <u>(0 ≤ i ≤ k ∧ par.i) v (i = k+1 ∧ par.i) </u>: i  〉
= { partición de rango }
〈 ∑ i :<u> 0 ≤ i ≤ k ∧ par.i</u> : i> + < ∑ i : <u>i = k+1 ∧ par.i</u> : i  〉
{ Rango unitario con condición }
<u>〈 ∑ i : 0 ≤ i ≤ k ∧ par.i : i  〉</u> +
( par.(k+1) → k+1
⌷ ¬par.(k+1) → 0)
= { HI }
sum_par.k +
( par.(k+1) → k+1
⌷ ¬par.(k+1) → 0)

### Resultado final
$$
\begin{align*}
& sum\_par : Nat → Nat \\
& sum\_par.0 \doteq 0 \\
& sum\_par.(k+1) \doteq 
\end{align*}
$$
