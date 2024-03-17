---
Materia: Algoritmos1
tags:
---
El polimorfismo ad hoc, también conocido como polimorfismo de clases de tipo, es una forma de polimorfismo que permite que una función o un tipo de dato trabajen con *distintos tipos de manera más restringida*. En Haskell, el polimorfismo ad hoc se logra mediante clases de tipo y sus instancias.
### Ejemplo
```haskell
class Show a where
  show :: a -> String
```
Aquí, `Show` es una clase de tipo que define la función `show`. Cualquier tipo que quiera ser una instancia de la clase `Show` debe proporcionar su propia implementación de la función `show`.
Una vez que una clase de tipo está definida, se pueden crear instancias para tipos específicos. Cada instancia proporciona una implementación concreta para las funciones definidas en la clase.
```haskell
instance Show Int where
  show x = "El entero es: " ++ show x
```
En este caso, `Int` es una instancia de la clase `Show`, y se proporciona una implementación específica de la función `show` para valores de tipo `Int`.

```haskell
-- La función imprimir trabaja para cualquier tipo a que sea una instancia de Show
imprimir :: Show a => a -> String
imprimir x = "El valor es: " ++ show x
```
En este ejemplo, `Show a =>` indica que la función `imprimir` puede trabajar con cualquier tipo `a` que sea una instancia de la clase `Show`. La función utiliza la función `show` para convertir el valor de tipo `a` a una cadena.
