-- ╭───────╯ °✧° ╰───────╮ --
-- Ejercicio 1 - Programá las siguientes funciones:
-- a) esCero :: Int -> Bool, que verifica si un entero es igual a 0.
esCero :: Int -> Bool
esCero x = x == 0
{-
ghci> esCero 3
False
ghci> esCero 0
True
-}

-- b) esPositivo :: Int -> Bool, que verifica si un entero es estrictamente mayor a 0.
esPositivo :: Int -> Bool
esPositivo x = x > 0
{-
ghci> esPositivo 4
True
ghci> esPositivo (-4)
False
-}

-- c ) esVocal :: Char -> Bool, que verifica si un caracter es una vocal en minúscula.
esVocal :: Char -> Bool
esVocal x = x `elem` "aeiou"
{-
ghci> esVocal 'a'
True
ghci> esVocal 'v'
False
-}

-- d) valorAbsoluto :: Int -> Int, que devuelve el valor absoluto de un entero ingresado.
valorAbsoluto :: Int -> Int
valorAbsoluto x | x >= 0 = x
                | otherwise = -x
{-
ghci> valorAbsoluto (-5)
5
ghci> valorAbsoluto 4
4
-}
-- ╰───────╮ °✧° ╭───────╯ --

-- ╭───────╯ °✧° ╰───────╮ --
-- Ejercicio 2 - Programá las siguientes funciones usando recursión o composición:
-- a) paratodo :: [Bool] -> Bool, que verifica que todos los elementos de una lista
-- sean True.
paraTodo :: [Bool] -> Bool
paraTodo [] = True
paraTodo (x:xs) = (x == True) && paraTodo xs
{-
ghci> paraTodo [True, False]
False
ghci> paraTodo [True, True]
True
-}

-- b) sumatoria :: [Int] -> Int, que calcula la suma de todos los elementos de una
-- lista de enteros.
sumatoria :: [Int] -> Int
sumatoria [] = 0
sumatoria (x:xs) = x + sumatoria xs
{-
ghci> sumatoria [1,2,3]
6
ghci> sumatoria [1,2,3,30,21]
57
-}

-- c ) productoria :: [Int] -> Int, que calcula el producto de todos los elementos de
-- la lista de enteros.
productoria :: [Int] -> Int
productoria [] = 1
productoria (x:xs) = x * productoria xs
{-
ghci> productoria [1,2,3]
6
ghci> productoria [1,2,3,30,21]
3780
-}

-- d) factorial :: Int -> Int, que toma un número n y calcula n!.
factorial :: Int -> Int
factorial x | x == 0 = 1
            | x == 1 = 1
            | otherwise = x * ( factorial (x -1) )
{-
ghci> factorial 4
24
ghci> factorial 19
121645100408832000
-}

-- e) Utiliza la función sumatoria para definir, promedio :: [Int] -> Int, que toma
-- una lista de números no vacia y calcula el valor promedio (truncado, usando division
-- entera).
promedio :: [Int] -> Int
promedio [] = 0
promedio (_:xs) = div (sumatoria xs) (length xs)
{-
ghci> promedio [1,2,3]
2
ghci> promedio [9,2,8,1,3]
3
-}
-- ╰───────╮ °✧° ╭───────╯ --
-- ╭───────╯ °✧° ╰───────╮ --
-- Ejercicio 3 - Programá la función pertenece :: Int -> [Int] -> Bool, que verifica si un número se
-- encuentra en una lista.
pertenece :: Int -> [Int] -> Bool
pertenece _ [] = False
pertenece k (x:xs) = k == x || pertenece k xs
{-
ghci> pertenece 3 [1,3,2,4]
True
ghci> pertenece 3 [1,2,1,6,8,2,4]
False
-}
-- ╰───────╮ °✧° ╭───────╯ --
-- ╭───────╯ °✧° ╰───────╮ --
-- Ejercicio 4 - Programá las siguientes funciones que implementan los cuantificadores generales. Notá que
-- el segundo parámetro de cada función, es otra función!
-- a) paratodo’ :: [a] -> (a -> Bool) -> Bool, dada una lista xs de tipo [a] y un
-- predicado t :: a -> Bool, determina si todos los elementos de xs satisfacen el
-- predicado t.
paraTodo' :: [a] -> (a -> Bool) -> Bool
paraTodo' [] _ = True
paraTodo' (x:xs) f = f x && paraTodo' xs f 
{-
ghci> paraTodo' [1,2,3,0] esCero
False
ghci> paraTodo' [0,0,0,0] esCero
True
-}

-- b) existe’ :: [a] -> (a -> Bool) -> Bool, dada una lista xs de tipo [a] y un
-- predicado t :: a -> Bool, determina si algún elemento de xs satisface el predicado
-- t.
existe' :: [a] -> (a -> Bool) -> Bool
existe' [] _ = False
existe' (x:xs) f = f x || existe' xs f
{-
ghci> existe' [1,2,3,0] esCero
True
ghci> existe' [8,9,23,4] esCero
False
-}

-- c ) sumatoria’ :: [a] -> (a -> Int) -> Int, dada una lista xs de tipo [a] y una
-- función t :: a -> Int (toma elementos de tipo a y devuelve enteros), calcula la
-- suma de los valores que resultan de la aplicación de t a los elementos de xs.
sumatoria' :: [a] -> (a -> Int) -> Int
sumatoria' [] _ = 0
sumatoria' (x:xs) f = f x + sumatoria' xs f
{-
ghci> sumatoria' [1,2,3,4] factorial
33
-}

-- d ) productoria’ :: [a] -> (a -> Int) -> Int, dada una lista de xs de tipo [a]
-- y una función t :: a -> Int, calcula el producto de los valores que resultan de la
-- aplicación de t a los elementos de xs.
productoria' :: [a] -> (a -> Int) -> Int
productoria' [] _ = 1
productoria' (x:xs) f = f x * productoria' xs f
{-
ghci> productoria' [1,2,3,4] factorial
288
-}
-- ╰───────╮ °✧° ╭───────╯ --
-- ╭───────╯ °✧° ╰───────╮ --
-- Ejercicio 5 - Definí nuevamente la función paratodo, pero esta vez usando la función paratodo’ (sin
-- recursión ni analisis por casos!). 
esTrue :: Bool -> Bool
esTrue x = x == True
paratodo'' :: [Bool] -> Bool
paratodo'' xs = paraTodo' xs esTrue
{-
ghci> paratodo'' [True,True,False]
False
ghci> paratodo'' [True,True,True]
True
-}
-- ╰───────╮ °✧° ╭───────╯ --
-- ╭───────╯ °✧° ╰───────╮ --
-- Ejercicio 6 - Utilizando las funciones del ejercicio 4, programa las siguientes funciones por composicíon,
-- sin usar recursion ni analisis por casos.
-- a) todosPares :: [Int] -> Bool verifica que todos los números de una lista sean
-- pares.
todosPares :: [Int] -> Bool
todosPares xs = paraTodo' xs even
{-
ghci> todosPares [1,2,3]
False
ghci> todosPares [0,2,4]
True
ghci> todosPares [6,2,4]
True
-}

-- b) hayMultiplo :: Int -> [Int] -> Bool verifica si existe algun número dentro del
-- segundo parámetro que sea múltiplo del primer parámetro.
esMultiplo :: Int -> Int -> Bool
esMultiplo a b = mod b a == 0
hayMultiplo :: Int -> [Int] -> Bool
hayMultiplo n xs = existe' xs (esMultiplo n)
{-
ghci> hayMultiplo 2 [1,9,5]
False
ghci> hayMultiplo 2 [1,9,8]
True
-}

-- c ) sumaCuadrados :: Int -> Int, dado un ńumero no negativo n, calcula la suma de
-- los primeros n cuadrados, es decir 〈∑i : 0 ≤i < n : i2〉.
cuadrado :: Int -> Int
cuadrado k = k*k
sumaCuadrados :: Int -> Int
sumaCuadrados k = sumatoria' [0..(k-1)] cuadrado 
{-
ghci> sumaCuadrados 3
5
ghci> sumaCuadrados 8
140
-}

-- d ) Programar la función existeDivisor::Int-> [Int] -> Bool, que dado en entero n
-- y una lista ls , devuelve True si y solo si, existe algún elemento en ls que divida a na.
esDivisor :: Int -> Int -> Bool
esDivisor n d = n `mod` d == 0
existeDivisor :: Int -> [Int] -> Bool
existeDivisor k xs = existe' xs (esDivisor k)
{-
ghci> existeDivisor 2 [9,9,8]
False
ghci> existeDivisor 2 [9,9,1]
True
-}

-- e) Utilizando la funcion del apartado anterior, definí la función esPrimo:: Int -> Bool,
-- que dado un entero n, devuelve True si y solo si n es primo.
esPrimo :: Int -> Bool
esPrimo n = n > 1 && not (existeDivisor n [2..(n-1)])
{-
ghci> esPrimo 3
True
ghci> esPrimo 4
False
-}

-- f) ¿Se te ocurre como redefinir factorial (ej. 2d ) para evitar usar recursión?
factorial' :: Int -> Int
factorial' x = product [1..x]

-- g ) Programar la función multiplicaPrimos :: [Int] -> Int que calcula el producto
-- de todos los números primos de una lista
multiplicaPrimos :: [Int] -> Int
multiplicaPrimos xs = productoria' [ x | x <- xs, esPrimo x ] id
{-
ghci> multiplicaPrimos [1,1,1,3]
3
ghci> multiplicaPrimos [1,1,1]
1
-}

-- h) Programar la función esFib :: Int -> Bool, que dado un entero n, devuelve True
-- si y sólo si n está en la sucesión de Fibonacci.
fib :: Int -> Int
fib 0 = 0
fib 1 = 1
fib n = fib (n-1) + fib (n-2)
esFib :: Int -> Bool
esFib n = pertenece n [ fib i | i <- [0.. n ]]
{-
ghci> esFib 5
True
ghci> esFib 10
False
-}

-- i ) Utilizando la función del apartado anterior, definí la función todosFib :: [Int] -> Bool
-- que dada una lista xs de enteros, devuelva si todos los elementos de la lista pertenecen
-- (o no) a la sucesión de Fibonacci.
todosFib :: [Int] -> Bool
todosFib xs = paraTodo' xs esFib
{-
ghci> todosFib [2,3,4,5]
False
ghci> todosFib [3,5,8,89]
True
-}
-- ╰───────╮ °✧° ╭───────╯ --
-- ╭───────╯ °✧° ╰───────╮ --
-- Ejercicio 7 - Indagá en Hoogle sobre las funciones map y filter. También podes consultar su tipo en
-- ghci con el comando :t.
--                               ¿Qué hacen estas funciones?
{-
MAP es una f de orden superior que toma una función (que a su vez ésta toma un a y un b,) 
y una lista xs y aplica esa función a cada elemento de xs, produciendo una nueva lista.   
    .----------------------------------------. 
    :                                        : 
    :   map :: (a -> b) -> [a] -> [b]        : 
    :   map f [] = []                        : 
    :   map f (x:xs) = f x : map f xs        : 
    :                                        : 
    `----------------------------------------'                                
FILTER es una f que toma un predicado y una lista, 
devolviendo una lista con los elementos que satisfacen el predicado. Es decir, si p x se evalua
en True, x es incluido a la lista.
    .-----------------------------------------------. 
    :                                               :
    :   filter :: (a -> Bool) -> [a] -> [b]         : 
    :   filter p [] = []                            : 
    :   filter p (x:xs) | p x = x : filter p xs     : 
    :                   | otherwise = filter p xs   : 
    :                                               : 
    `------------------------------------------- ---'    

              ¿A qué equivale la expresión map succ [1, -4, 6, 2, -8], donde succ n = n+1?

Equivale a la lista [2,-3,7,3,-7], donde cada elemento es el siguiente de la lista dada.

                       ¿Y la expresión filter esPositivo [1, -4, 6, 2, -8]?
--A la lista de los positivos [1,6,2] pertenecientes a la lista dada. -}
-- ╰───────╮ °✧° ╭───────╯ --
-- ╭───────╯ °✧° ╰───────╮ --
-- Ejercicio 8 - Programá una función que dada una lista de números xs, devuelve la lista que resulta de
-- duplicar cada valor de xs.
-- a) Definila usando recursión.
dupLista :: (Num a) => [a] -> [a]
dupLista [] = []
dupLista (x:xs) = (2*x) : dupLista xs
{-
ghci> dupLista [1,2,3,4]
[2,4,6,8]
-}

-- b) Definila utilizando la función map.
dupLista' :: (Num a) => [a] -> [a]
dupLista' xs = map (*2) xs
{-
ghci> dupLista' [1,2,3,4]
[2,4,6,8]
-}
-- ╰───────╮ °✧° ╭───────╯ --
-- ╭───────╯ °✧° ╰───────╮ --
-- Ejercicio 9 - Programá una función que dada una lista de números xs, calcula una lista que tiene como
-- elementos aquellos números de xs que son primos.
-- a) Definila usando recursión.
primListas :: [Int] -> [Int]
primListas [] = []
primListas (x:xs) | esPrimo x = x : primListas xs
                  | otherwise = primListas xs
{-
ghci> primListas [1,2,3,4,5,6,7,8,9]
[2,3,5,7]
ghci> primListas [1..100]
[2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97]
-}

-- b) Definila utilizando la funci ́on filter.
primListas' :: [Int] -> [Int]
primListas' xs = filter esPrimo xs
{-
ghci> primListas' [1,2,3,4,5,6,7,8,9]
[2,3,5,7]
ghci> primListas' [1..100]
[2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97]
-}

-- c) Revisá tu definicián del ejercicio 6g . ¿Cómo podes mejorarla?
multiplicaPrimos' :: [Int] -> Int
multiplicaPrimos' xs = product (filter esPrimo xs)
-- ╰───────╮ °✧° ╭───────╯ --
-- ╭───────╯ °✧° ╰───────╮ --
-- Ejercicio 10 - La función primIgualesA toma un valor y una lista, y calcula el tramo inicial más largo de
-- la lista cuyos elementos son iguales a ese valor.
-- a) Programá primIgualesA por recursión.
primIgualesA :: (Eq a) => a -> [a] -> [a]
primIgualesA _ []  = []
primIgualesA k (x:xs) | k == x = x : primIgualesA x xs
                      | otherwise = []
{-
ghci> primIgualesA 1 [1,1,2,3,4,1,1,1]
[1,1]
ghci> primIgualesA 2 [1,2,2,2,2,2,2,2]
[]
-}

-- b) Programá nuevamente la función utilizando takeWhile.
primIgualesA' :: (Eq a) => a -> [a] -> [a]
primIgualesA' n = takeWhile (==n)
{-
ghci> primIgualesA' 1 [1,1,2,3,4,1,1,1]
[1,1]
ghci> primIgualesA' 2 [1,2,2,2,2,2,2,2]
[]
-}
-- ╰───────╮ °✧° ╭───────╯ --
-- ╭───────╯ °✧° ╰───────╮ --
-- Ejercicio 11 - La función primIguales toma una lista y devuelve el mayor tramo inicial de la lista cuyos
-- elementos son todos iguales entre sí.
-- a) Programá primIguales por recursión
primIguales :: (Eq a) => [a] -> [a] 
primIguales [] = []
primIguales (x:xs) 
    | xs == [] = [x]
    | x == head xs = x : primIguales xs 
    | otherwise = [x]
{-
ghci> primIguales [4,4,3,4,4,4,4,4,1]
[4,4]
ghci> primIguales [3,4,3,4,4,4,4,4,1]
[3]
-}

-- b) Usá cualquier versión de primIgualesA para programar primIguales. Está permitido
-- dividir en casos, pero no usar recursián.
primIguales' :: (Eq a) => [a] -> [a]
primIguales' [] = []
primIguales' (x:xs) = primIgualesA' x (x:xs)
{-
ghci> primIguales' [4,4,3,4,4,4,4,4,1]
[4,4]
ghci> primIguales' [3,4,3,4,4,4,4,4,1]
[3]
-}
-- ╰───────╮ °✧° ╭───────╯ --
-- ╭───────╯ °✧° ╰───────╮ --
-- Ejercicio 12 - Todas las funciones del ejercicio 4 son similares entre s ́ı: cada una aplica la función
-- término t a todos los elementos de una lista, y luego aplica algún operador entre todos ellos,
-- obteniéndose así el resultado final. Para el caso de la lista vacía, se devuelve el elemento
-- neutro. De esa manera cada una de ellas computa una cuantificación sobre los elementos de
-- la lista transformados por t:
--                   paratodo’.xs.t = 〈∀i : 0 ≤i < #xs : t.xs!i 〉
--                    existe’.xs.t = 〈∃i : 0 ≤i < #xs : t.xs!i 〉
--                  sumatoria’.xs.t = 〈Σ i : 0 ≤i < #xs : t.xs!i 〉
--                 productoria’.xs.t = 〈Π i : 0 ≤i < #xs : t.xs!i 〉
-- Por ejemplo, para sumatoria’ el operador asociado al cuantificador Σ es la suma (+), por
-- lo que
-- sumatoria’ [1,2,3] t = (t 1) + (t 2) + (t 3) + 0
-- donde el cálculo consistió en aplicar t a cada elemento, combinándolos con el operador
-- (+) hasta llegar a la lista vacía donde se devuelve el neutro de la suma (0). Guiándote por
-- las observaciones anteriores, definí de manera recursiva la función cuantGen (denota la
-- cuantificación generalizada):
-- cuantGen :: (b -> b -> b) -> b -> [a] -> (a -> b) -> b
-- cuantGen op z xs t = ...
-- que tomando como argumento un operador op, su elemento neutro z, una lista de elementos
-- xs y una función término t, aplica el operador a los elementos de la lista, transformados por
-- la función término. En otras palabras, sea ⊕ un cuantificador cualquiera y  su operador
-- asociado,
--              cuantGen. .z.xs.t = 〈⊕ i : 0 ≤i < #xs : t.(xs ! i) 〉
-- Reescribir todas las funciones del punto 4 utilizando el cuantificador generalizado (sin usar
-- inducción y en una línea por función).
cuantGen :: (b -> b -> b) -> b -> [a] -> (a -> b) -> b
cuantGen op z xs t = foldr op z (map t xs)

-- { 〈∀i : 0 ≤i < #xs : t.xs!i 〉 } -- 
-- a) paraTodo' 
paratodo''' :: [a] -> (a -> Bool) -> Bool
paratodo''' xs t = cuantGen (&&) True xs t

-- { 〈∃i : 0 ≤i < #xs : t.xs!i 〉 } -- 
-- b) existe' 
existe''' :: [a] -> (a -> Bool) -> Bool
existe''' xs t = cuantGen (||) False xs t

-- { 〈Σ i : 0 ≤i < #xs : t.xs!i 〉 } --
-- c) sumatoria'
sumatoria''' :: [a] -> (a -> Int) -> Int
sumatoria''' xs t = cuantGen (+) 0 xs t

-- { 〈Π i : 0 ≤i < #xs : t.xs!i 〉 } --
-- d) productoria'
productoria''' :: [a] -> (a -> Int) -> Int
productoria''' xs t = cuantGen (*) 1 xs t
-- ╰───────╮ °✧° ╭───────╯ --
-- ╭───────╯ °✧° ╰───────╮ --
-- Ejercicio 13 - Definir una función que se denomina distancia de edición . Que toma como entrada
-- dos strings (lista de caracteres). distanciaEdicion :: [Char] -> [Char] -> Int. La función
-- distanciaEdicion, se comporta de la siguiente manera: - Si alguna de las listas es vacía,
-- devuelve la longitud de la otra lista. - Si las dos listas son no vac ́ıas: x:xs e y:ys, compara
-- los primeros elementos de cada lista:
-- ◆ Si x==y, no suma y sigue computando la distancia para xs e ys ,
-- ◆ Si x!=y, suma 1 y sigue computando la distancia para xs e ys 
minTres :: Int -> Int -> Int -> Int
minTres a b c = min a (min b c)
distanciaEdicion :: [Char] -> [Char] -> Int
distanciaEdicion [] ys = length ys
distanciaEdicion xs [] = length xs
distanciaEdicion (x:xs) (y:ys)
  | x == y = distanciaEdicion xs ys
  | otherwise = 1 + minTres (distanciaEdicion xs (y:ys)) (distanciaEdicion (x:xs) ys) (distanciaEdicion xs ys)
{-
ghci> distanciaEdicion "hola" "abc"
4
ghci> distanciaEdicion "hola" "holac"
1
-}
-- ╰───────╮ °✧° ╭───────╯ --
-- ╭───────╯ °✧° ╰───────╮ --
-- Ejercicio 14 - Definí una función primeros que cumplen, primQueCumplen::[a]->(a->Bool)->[a],
-- tal que, dada una lista ls y un predicado p, devuelve el tramo inicial de ls que cumple p.
primQueCumplen :: [a] -> (a -> Bool) -> [a]
primQueCumplen [] _ = []
primQueCumplen (l:ls) p | (p l) = l : primQueCumplen ls p
                        | otherwise = primQueCumplen ls p
{-
ghci> primQueCumplen [1,2,3,4] even
[2,4]
-}
-- ╰───────╮ °✧° ╭───────╯ --
-- ╭───────╯ °✧° ╰───────╮ --
-- Ejercicio 15 - Para cada uno de los siguientes patrones, decidí si están bien tipados, y en tal caso dá los
-- tipos de cada subexpresión. En caso de estar bien tipado, ¿el patr´on cubre todos los casos
-- de deﬁnición?

-- a) f :: (a, b) -> ...
--    f (x, y) = ...
-- Bien tipado y cubre todos los casos, La funci´on f toma una tupla como argumento. La tupla tiene dos elementos, x y y.
-- Por lo tanto, el tipo de la funci´on f ser´ıa (a, b) -> ..., donde a y b son los tipos de x e y
-- respectivamente

-- b) f :: [(a, b)] -> ...
--    f (a, b) = ...
-- No est´a bien tipado y no cubre adecuadamente los casos (no cubre ning´un caso, la funci´on deber´ıa tomar una lista de tuplas.)

-- c) f :: [(a, b)] -> ...
--    f (x:xs) = ...
-- Bien tipado, pero no cubre todos los casos, el patr´on f (x:xs) = ... est´a bien tipado y cubre al menos el caso de una lista no vac´ıa.
-- Sin embargo, se el caso de una lista vac´ıa, y se podr´ıa hacer de la forma:
-- f [] = ...

-- d) f :: [(a, b)] -> ...
--    f ((x, y) : ((a, b) : xs)) = ...
-- Bien tipado, pero no cubre todos los casos, Este patr´on solo cubrir´a casos en los que la lista tiene al menos dos tuplas. No cubre el caso de
-- una lista vac´ıa ni el caso de una lista con una sola tupla.

-- e) f :: [(Int, a)] -> ...
--    f [(0, a)] = ...
-- Bien tipado, pero no cubre todos los casos, Este patr´on solo cubrir´a el caso en el que la lista tenga exactamente un elemento, y ese elemento
-- sea una tupla con el primer elemento igual a 0. No cubre casos de listas con m´as de un elemento
-- ni casos de listas vac´ıas

-- f) f :: [(Int, a)] -> ...
--    f ((x, 1) : xs) = ...
-- Mal tipado.

-- g) f :: (Int -> Int) -> Int -> ...
--    f a b = ...
-- Bien tipado y cubre todos los casos. La funci´on f toma una funci´on de tipo Int -> Int y un entero. Por lo tanto, el tipo de la funci´on
-- f ser´ıa (Int -> Int) -> Int -> ....

-- h) f :: (Int -> Int) -> Int -> ...
--    f a 3 = ...
-- Bien tipado, pero no cubre todos los casos, Este patr´on cubre espec´ıficamente el caso en el que el segundo argumento es 3. No cubre otros
-- casos en los que el segundo argumento puede ser diferente de 3.

-- i) f :: (Int -> Int) -> Int -> ...
--    f 0 1 2 = ...
-- Mal tipado
-- ╰───────╮ °✧° ╭───────╯ --
-- ╭───────╯ °✧° ╰───────╮ --
-- Ejercicio 16 - Para las siguientes declaraciones de funciones, da al menos una deﬁnición cuando sea
-- posible. ¿Podés dar alguna otra deﬁnición alternativa a la que diste en cada caso?

-- a) f :: (a, b) -> b
-- En este caso, no hay otra posibilidad m´as que devolver el segundo valor de la tupla:
-- f :: (a, b) -> b
-- f (_, y) = y

-- b) f :: (a , b ) → c
-- No podemos construir algo de tipo c solo conociendo a y b, a menos que supongamos que el tipo c puede
-- ser una lista con el elemento de tipo a, por ejemplo
-- f :: (a, b) -> c
-- f (x,y) = [x]

-- c) f :: ( a → b ) → a → b
-- En este caso nos obliga a utilizar la función t
-- f :: (a -> b) -> a -> b
-- f t x = t x
-- Una alternativa es llamar recursivamente a la función t:
-- f :: (a -> b) -> a -> b
-- f g x = g (f g x)

-- d) f :: ( a → b ) → [ a ] → [ b ]
-- En la definici´on siguiente, se podr´ıa utilizar la funci´on haskell{map} que cumple con la consigna:
-- f :: (a -> b) -> [a] -> [b]
-- f t xs = map t xs
-- también se podría utilizar recursión:
-- f :: (a -> b) -> [a] -> [b]
-- f t [] = []
-- f t (x:xs) = t x : f t xs
-- ╰───────╮ °✧° ╭───────╯ --