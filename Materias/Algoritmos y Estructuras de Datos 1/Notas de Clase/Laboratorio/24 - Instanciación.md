---
Materia: Algoritmos1
tags:
  - haskell
  - tipos
---
La instanciación en Haskell se refiere al proceso de *crear valores específicos o instancias de un tipo de datos*. En el contexto de tipos de datos algebraicos sin parámetros, la instanciación se realiza eligiendo uno de los valores enumerados del tipo para crear una instancia concreta del mismo.
Utilizando el ejemplo del tipo de datos algebraicos sin parámetros `Direccion` de [[23 - Definición de datos algebraicos sin parámetros]]:
```haskell
data Direccion = Norte | Sur | Este | Oeste
```
La coincidencia de patrones es una técnica importante para trabajar con instancias de tipos de datos algebraicos. Puedes usar patrones en funciones o expresiones `case` para manejar diferentes casos según el valor de la instancia. 
```haskell
esNorte :: Direccion -> Bool
esNorte Norte = True
esNorte _     = False
```
En este ejemplo, la función `esNorte` toma una dirección como argumento y devuelve `True` si la dirección es `Norte`, y `False` en caso contrario.