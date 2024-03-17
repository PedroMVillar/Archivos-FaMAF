---
Materia: Algoritmos1
tags:
  - ejercicios
  - segmentos
  - derivación
---
## Ejemplo 1
Derivar la especificación
$$
prefijo.xs.ys = 〈 ∃ as : True : ys = xs ++ as 〉
$$

### Caso base
Tomando xs = [ ] :

prefijo.[ ].ys
= { esp. }
〈 ∃ as : True : ys = [ ] ++ as 〉
= { def. de ++ }
〈 ∃ as : True : ys = as 〉
= { intercambio rango y término }
〈 ∃ as : ys = as : True 〉
= { término constante }
True

### Paso inductivo
Tomando xs = z‣zs,
HI: prefijo.zs.ys = 〈 ∃ as : True : ys = zs ++ as 〉

Análisis por casos en ys:
- ys=[ ]
- ys=w‣ws

#### Caso ys=[ ]
prefijo.(z‣zs).[ ]
= { esp. }
〈 ∃ as : True : [ ] = z‣zs ++ as 〉
= { def de ++ y propiedad de listas, [ ] ≠ z‣(zs++as) }
〈 ∃ as : True : False 〉
= { término constante}
False

#### Caso ys=w‣ws
prefijo.(z‣zs).(w‣ws)
= { esp. }
〈 ∃ as : True : (w‣ws) = z‣zs ++ as 〉
= { def de ++ }
〈 ∃ as : True : w‣ws = z‣(zs ++ as) 〉
= { prop de listas }
〈 ∃ as : True : w=z ∧ ws = zs ++ as 〉
= { distributividad de ∧ con ∃ }
w=z ∧ 〈 ∃ as : True : ws = zs ++ as 〉
= { HI }
w=z ∧ prefijo.zs.ws

### Resultado final
$$
\begin{align*}
& prefijo.[].ys = True \\
& prefijo.(x‣xs).[] = False \\
& prefijo.(x‣xs).(y‣ys) = (x==y) ∧ prefijo.xs.ys
\end{align*}
$$
## Ejemplo 2
Derivar la especificación
$$
sumanOcho.xs = 〈N as, bs : xs = as ++ bs : sum.as = 8 〉
$$
### Paso inductivo
H.I.: sumanOcho.ys = 〈N as, bs : ys = as ++ bs : sum.as = 8 〉

sumanOcho.(y►ys)
= { esp. }
〈N as, bs : y►ys = as ++ bs : sum.as = 8 〉
= { nos interesa ver qué forma tiene as, ya que si es no vacía, el primer elemento de as es y neutro ∧ }
〈N as, bs : y►ys = as ++ bs ∧ True : sum.as = 8 〉
= { tercero excluído }
〈N as, bs : y►ys = as ++ bs ∧ (as = [ ] ∨ as ≠ [ ]) : sum.as = 8 〉
= { distributividad }
〈N as, bs : (y►ys = as ++ bs ∧ as = [ ]) ∨ (y►ys = as ++ bs ∧ as ≠ [ ]) : sum.as = 8 〉
= { part. rango: ver digesto de conteo, los rangos son disjuntos }
〈N as, bs : y►ys = as ++ bs ∧ as = [ ] : sum.as = 8 〉 +
〈N as, bs : y►ys = as ++ bs ∧ as ≠ [ ] : sum.as = 8 〉
= { cambio de variable as → a ► as ( es biyectiva ya que as ≠ [ ] ) }
〈N as, bs : y►ys = as ++ bs ∧ as = [ ] : sum.as = 8 〉 +
〈N a, as, bs : y►ys = (a►as) ++ bs ∧ a►as ≠ [ ] : sum.(a►as) = 8 〉
= { def. ++ , prop. listas }
〈N as, bs : y►ys = as ++ bs ∧ as = [ ] : sum.as = 8 〉 +
〈N a, as, bs : y ► ys = a ► (as ++ bs) : sum.(a►as) = 8 〉
= { prop. listas }
〈N as, bs : y►ys = as ++ bs ∧ as = [ ] : sum.as = 8 〉 +
〈N a, as, bs : y = a ∧ ys = as ++ bs : sum.(a►as) = 8 〉
= { eliminación de variable }
〈N as, bs : y►ys = as ++ bs ∧ as = [ ] : sum.as = 8 〉 +
〈N as, bs : ys = as ++ bs : sum.(y►as) = 8 〉
= { def. sum }
〈N as, bs : y►ys = as ++ bs ∧ as = [ ] : sum.as = 8 〉 +
〈N as, bs : ys = as ++ bs : y + sum.as = 8 〉
= { arit. }
〈N as, bs : y►ys = as ++ bs ∧ as = [ ] : sum.as = 8 〉 +
〈N as, bs : ys = as ++ bs : sum.as = 8 - y 〉
**Generalizo tomando 8 - y como entero: **
H.I.: gSumanOcho2.ys.n = 〈N as, bs : ys = as ++ bs : sum.as = n 〉

### Caso base

gSumanOcho2.[].n
= { esp. }
〈N as, bs : [] = as ++ bs : sum.as = n 〉
= { prop. listas }
〈N as, bs : as = [] ∧ bs = [] : sum.as = n 〉
= { elimincación de variable as }
〈N bs : bs = [] : sum.[] = n 〉
= { def. sum }
〈N bs : bs = [] : 0 = n 〉
= { aplico def. de conteo }
〈N bs : bs = [] : 0 = n 〉
0

### Paso inductivo
gSumanOcho2.(y►ys).n
= { mismos pasos que con sumanOcho }
〈N as, bs : y►ys = as ++ bs ∧ as = [ ] : sum.as = n 〉 +
〈N as, bs : ys = as ++ bs : y + sum.as = n 〉
= { paso “y” restando, luego H.I. }
〈N as, bs : y►ys = as ++ bs ∧ as = [ ] : sum.as = n 〉 + gSumanOcho2.ys.(n - y)
= { eliminación de variable as }
〈N bs : y►ys = [ ] ++ bs : sum.[ ] = n 〉 + gSumanOcho2.ys.(n - y)
= { def. ++ , y def. sum }
〈N bs : y►ys = bs : 0 = n 〉 + gSumanOcho2.ys.(n - y)
= { rango unitario }
( n = 0 → 1
⌷ n ≠ 0 → 0
) + gSumanOcho2.ys.(n - y)
= { meto la suma adentro del analisis por casos }
( n = 0 → 1 + gSumanOcho2.ys.(n - y)
⌷ n ≠ 0 → gSumanOcho2.ys.(n - y)
)

## Ejemplo 3
Derivar
$$
sufiMayor.xs = 〈 ∃ as, bs : xs = as ++ bs : prod.as < prod.bs 〉
$$
Vamos a hacerlo por inducción en xs:
### Caso base
Tomando xs = [] :
sufiMayor.[]
= {esp }
〈 ∃ as, bs : ([] = as ++ bs) : prod.as < prod.bs 〉
= { prop. de listas }
〈 ∃ as, bs : []=as ∧ []=bs : prod.as < prod.bs 〉
= { eliminación de variable }
〈 ∃ bs : []=bs : prod.[] < prod.bs 〉
= { rango unitario }
prod.[] < prod.[]
= { def. de prod }
1 < 1
= {aritmética }
False

### Paso inductivo
Tomando xs = n‣ns,
HI: sufiMayor.ns = 〈 ∃ as, bs : ns = as ++ bs : prod.as < prod.bs 〉

sufiMayor.(n‣ns)
= { esp. }
〈 ∃ as, bs : n‣ns = as ++ bs : prod.as < prod.bs 〉
= { tercero excluido }
〈 ∃ as, bs : (n‣ns = as ++ bs) ∧ (as=[] ∨ as≠[]) : prod.as < prod.bs 〉
= { distributividad }
〈 ∃ as, bs : (n‣ns = as ++ bs ∧ as=[]) ∨ (n‣ns = as ++ bs ∧ as≠[]) : prod.as < prod.bs 〉
= { partición de rango}
〈 ∃ as, bs : (n‣ns = as ++ bs ∧ as=[]) : prod.as < prod.bs 〉
∨
〈 ∃ as, bs : (n‣ns = as ++ bs ∧ as≠[]) : prod.as < prod.bs 〉
= { cambio de variable, f.(a,as’)≐a‣as’ }
〈 ∃ as, bs : (n‣ns = as ++ bs ∧ as=[]) : prod.as < prod.bs 〉
∨
〈 ∃ a,as’, bs : (n‣ns = (a‣as’) ++ bs ∧ a‣as’≠[]) : prod.(a‣as’) < prod.bs 〉
= { propiedad de listas }
〈 ∃ as, bs : (n‣ns = as ++ bs ∧ as=[]) : prod.as < prod.bs 〉
∨
〈 ∃ a,as’, bs : n=a ∧ ns = (as’ ++ bs) ∧ a‣as’≠[] : prod.(a‣as’) < prod.bs 〉
= { eliminación de variable }
〈 ∃ as, bs : (n‣ns = as ++ bs ∧ as=[]) : prod.as < prod.bs 〉
∨
〈 ∃ as’, bs : ns = (as’ ++ bs) ∧ n‣as’≠[] : prod.(n‣as’) < prod.bs 〉
= { def. de prod }
〈 ∃ as, bs : (n‣ns = as ++ bs ∧ as=[]) : prod.as < prod.bs 〉
∨
〈 ∃ as’, bs : ns = (as’ ++ bs) ∧ n‣as’≠[] : n\*prod.as’ < prod.bs 〉
= { lógica }
〈 ∃ as, bs : (n‣ns = as ++ bs ∧ as=[]) : prod.as < prod.bs 〉
∨
〈 ∃ as’, bs : ns = as’ ++ bs : n\*prod.as’ < prod.bs 〉
**No podemos aplicar la HI por lo tanto generalizamos:**
sufiMayorGen.xs.k = 〈 ∃ as, bs : xs = as ++ bs : k*prod.as < prod.bs 〉

#### Nuevo caso base
sufiMayorGen.[].k
= {Especificación}
〈 ∃ as, bs : [] = as ++ bs : k\*prod.as < prod.bs 〉
= {Propiedades de listas}
〈 ∃ as, bs : [] = as ∧ [] = bs : k\*prod.as < prod.bs 〉
={Eliminación de variable as y rango unitario}
k\*prod.[] < prod.[]
={Def prod}
k*1 < 1
={Aritmética}
k < 1

#### Nuevo paso inductivo
Suponemos sufiMayorGen.ns.k = 〈 ∃ as, bs : ns = as ++ bs : k\*prod.as < prod.bs 〉 (HI)

sufiMayorGen.(n▹ns).k
= {Especificación}
〈 ∃ as, bs : n▹ns = as ++ bs : k\*prod.as < prod.bs 〉
={Tercero Excluido y Distributividad}
〈 ∃ as, bs : (n▹ns = as ++ bs ∧ as=[]) ∨ (n▹ns = as ++ bs ∧ as≠ []) : k\*prod.as <
prod.bs 〉
={Partición de Rango}
〈 ∃ as, bs : n▹ns = as ++ bs ∧ as=[] : k\*prod.as < prod.bs 〉 ∨
〈 ∃ as, bs : n▹ns = as ++ bs ∧ as ≠ [] : k\*prod.as < prod.bs 〉
={Eliminación de Variable}
〈 ∃ bs : n▹ns = [] ++ bs : k\*prod.[] < prod.bs 〉 ∨
〈 ∃ as, bs : n▹ns = as ++ bs ∧ as≠ [] : k\*prod.as < prod.bs 〉
={Neutro ++, Def prod}
〈 ∃ bs : n▹ns = bs : k < prod.bs 〉 ∨
〈 ∃ as, bs : n▹ns = as ++ bs ∧ as≠ [] : k\*prod.as < prod.bs 〉
={Cambio de Variable, con f.(a, as’) = a ▹ as’}
〈 ∃ bs : n▹ns = bs : k < prod.bs 〉 ∨
〈 ∃ a,as’, bs : n▹ns = (a ▹ as’) ++ bs ∧ (a ▹ as’) ≠ [] : k\*prod.(a ▹ as’) < prod.bs 〉
={Def ++, Propiedades de listas, Def prod en el término}
〈 ∃ bs : n▹ns = bs : k < prod.bs 〉 ∨
〈 ∃ a,as’, bs : n▹ns = a ▹ (as’ ++ bs) : k\*a\*prod.(as’) < prod.bs 〉
={Rango Unitario}
k < prod.(n ▹ ns) ∨
〈 ∃ a,as’, bs : n▹ns = a ▹ (as’ ++ bs) : k\*a\*prod.(as’) < prod.bs 〉
={Prop de listas}
k < prod.(n ▹ ns) ∨
〈 ∃ a,as’, bs : n=a ∧ ns = (as’ ++ bs) : k\*a\*prod.(as’) < prod.bs 〉
={Eliminación de Variable}
k < prod.(n ▹ ns) ∨
〈 ∃ as’, bs : ns = (as’ ++ bs) : (k\*n)\*prod.(as’) < prod.bs 〉
={HI, con segundo parámetro k\*n}
k < prod.(n ▹ ns) ∨ sufiMayorGen.ns.(k\*n)

### Resultado final
$$
\begin{align*}
& sufiMayorGen.[].k = (k < 1) \\
& sufiMayorGen.(n▹ns).k = (k < prod.(n▹ns) ) ∨ sufiMayorGen.ns.(k*n) \\
& \\
& sufiMayor.xs = sufiMayorGen.xs.1
\end{align*}
$$