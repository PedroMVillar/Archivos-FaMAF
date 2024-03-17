---
Materia: Algoritmos1
tags:
  - haskell
  - tipos
---
Las clases de tipos son una especie de interfaz que define algún tipo de comportamiento. Si un tipo es miembro de una clase de tipos, significa que ese tipo soporta e implementa el comportamiento que define la clase de tipos.
- `Eq` es utilizada por los tipos que soportan comparaciones por igualdad. Los miembros de esta clase implementan las funciones == o /= en algún lugar de su definición.
```ghci
ghci> 5 == 5
True
ghci> 5 /= 5
False
ghci> 'a' == 'a'
True
ghci> "Ho Ho" == "Ho Ho"
True
ghci> 3.432 == 3.432
True
```
- `Ord` es para tipos que poseen algún orden. **Para ser miembro de Ord, primero un tipo debe ser socio del prestigioso y exclusivo club Eq.**
```ghci
ghci> :t (>)
(>) :: (Ord a) => a -> a -> Bool
```
- Los miembros de `Show` pueden ser representados por cadenas. la función más utilizada que trabaja con esta clase de tipos es la función `show`. Toma un valor de un tipo que pertenezca a la clase Show y lo representa como una cadena de texto.
```ghci
ghci> show 3
"3"
ghci> show 5.334
"5.334"
ghci> show True
"True"
```
- `Read` es como la clase de tipos opuesta a `Show`. La función read toma una cadena y devuelve un valor del tipo que es miembro de Read.
```ghci
ghci> read "True" || False
True
ghci> read "8.2" + 3.8
12.0
ghci> read "5" - 2
3
ghci> read "[1,2,3,4]" ++ [3]
[1,2,3,4,3]
```
- Los miembros de la clase `Enum` son tipos *secuencialmente ordenados*, es decir, pueden ser enumerados. La principal ventaja de la clase de tipos Enum es que podemos usar los miembros en las listas aritméticas. También tienen definidos los sucesores y predecesores, por lo que podemos usar las funciones `succ` y `pred`. Los tipos de esta clase son: `()`, `Bool`, `Char`, `Ordering`, `Int`, `Integer`, `Float` y `Double`.
- Los miembros de `Bounded` poseen límites inferiores y superiores, es decir están acotados.
```ghci
ghci> minBound :: Int
-2147483648
ghci> maxBound :: Char
'\1114111'
ghci> maxBound :: Bool
True
ghci> minBound :: Bool
False
```
- `Num` es la clase de tipos numéricos. Sus miembros tienen la propiedad de poder comportarse como números. 
```ghci
ghci> :t 20
20 :: (Num t) => t
```
- `Integral` es también un clase de tipos numérica. Num incluye todos los números, incluyendo números reales y enteros. Integral únicamente incluye números enteros. Int e Integer son miembros de esta clase.
- `Floating` incluye únicamente números en coma flotante, es decir Float y Double.