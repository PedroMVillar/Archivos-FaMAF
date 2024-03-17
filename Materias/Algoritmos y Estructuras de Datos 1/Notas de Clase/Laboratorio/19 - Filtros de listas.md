---
Materia: Algoritmos1
tags:
  - haskell
  - filtros
---
En Haskell, `map`, `takeWhile`, y `filter` son funciones que se utilizan comúnmente en el procesamiento de listas. A continuación, se proporciona una explicación detallada de cómo funcionan cada una de estas funciones:

## Map
La función `map` se utiliza para aplicar una función dada a cada elemento de una lista y devolver una nueva lista con los resultados.
```haskell
map :: (a -> b) -> [a] -> [b]
```
- **Parámetros:** 
	- `(a -> b)`: Una función que toma un elemento de tipo `a` y devuelve un elemento de tipo `b`.
	- `[a]`: Una lista de elementos de tipo `a`.
- **Ejemplo: Duplicar cada elemento de una lista**
	```haskell
	duplicar :: [Int] -> [Int]
	duplicar lista = map (\x -> x * 2) lista
	```
- Uso: `duplicar [1, 2, 3, 4]` devuelve `[2, 4, 6, 8]`.
## TakeWhile
La función `takeWhile` se utiliza para tomar elementos de una lista mientras se cumple una condición y detenerse cuando la condición ya no se cumple.
```haskell
takeWhile :: (a -> Bool) -> [a] -> [a]
```
- **Parámetros:**
	- `(a -> Bool)`: Una función que toma un elemento de tipo `a` y devuelve un valor booleano.
	- `[a]`: Una lista de elementos de tipo `a`.
- **Ejemplo: Tomar elementos mientras sean menores que 3**
	```haskell
	tomarMenoresTres :: [Int] -> [Int]
	tomarMenoresTres lista = takeWhile (\x -> x < 3) lista
	```
- Uso: `tomarMenoresTres [1, 2, 3, 4, 1, 2]` devuelve `[1, 2]`.

## Filter
La función `filter` se utiliza para filtrar los elementos de una lista que cumplen con una condición dada.
```haskell
filter :: (a -> Bool) -> [a] -> [a]
```
- **Parámetros:**
	- `(a -> Bool)`: Una función que toma un elemento de tipo `a` y devuelve un valor booleano.
	- `[a]`: Una lista de elementos de tipo `a`.
- **Ejemplo: Filtrar elementos pares de una lista**
	```haskell
	filtrarPares :: [Int] -> [Int]
	filtrarPares lista = filter (\x -> x `mod` 2 == 0) lista
	```
- Uso: `filtrarPares [1, 2, 3, 4, 5, 6]` devuelve `[2, 4, 6]`
## Funcionamiento Interno y Evaluación Perezosa:
- **Evaluación Pérezosa:** En Haskell, estas funciones operan de manera eficiente gracias a la evaluación perezosa. Los elementos de la lista se generan y procesan solo cuando es necesario, lo que permite trabajar con listas potencialmente infinitas.
- **Funcionamiento Interno:** 
	- `map` aplica la función proporcionada a cada elemento de la lista, generando una nueva lista de resultados.
	- `takeWhile` toma elementos de la lista mientras la condición es verdadera y se detiene cuando la condición ya no se cumple.
	- `filter` selecciona los elementos que cumplen con la condición dada, generando una nueva lista con esos elementos.
Estas funciones proporcionan herramientas poderosas para manipular y transformar listas en Haskell de manera declarativa y expresiva. Al aprovechar la evaluación perezosa, se pueden escribir programas más eficientes y modulares.