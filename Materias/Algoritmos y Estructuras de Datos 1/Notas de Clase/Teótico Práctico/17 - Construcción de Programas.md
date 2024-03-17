---
Materia: Algoritmos1
tags:
  - programas
---
```nomnoml
#background
[Problema] -> [Especificación] -> [<state>Derivación] -> [Programa]
```
## Problema
Lo que uno quiere solucionar, expresado de manera informal e imprecisa en lenguaje  
natural.
## Especificación
Una especificación formaliza el problema a resolver de manera formal pero no detallada (o  
sea, expresa el qué pero no el cómo).
En el caso de programación funcional, decidimos resolver el problema a través de una  
función. Luego, una especificación tendrá los siguientes componentes:  
1. nombre para la función que resuelve el problema  
2. tipo de la función  
3. predicado que indica qué debe satisfacer la función (para que se pueda considerar que resuelve el problema).
### Predicados
Se utilizan todas las cosas  formales que podemos tomar de la matemática, la lógica de predicados, la lógica de primer orden, y la cuantificación general. También usamos todos los tipos conocidos y sus funciones asociadas:  
- Booleanos ( ∧ , ∧ , ¬ , etc. )  
- Integers ( + , - , div , mod , max , min , etc.)  
- Listas ( ! , # , ++ , etc )  
- etc.

## Programa
Los programas son expresiones ejecutables (yo suelo decir “programables”), es decir  
que tienen reglas asociadas que les permiten ser reducidas a otras expresiones (con suerte, que me permiten llegar a un valor final). En los programas, también podemos escribir  definiciones. Las definiciones de las funciones crean nuevas reglas.
- Expresiones:  
	- Constantes, variables, llamadas a operaciones y funciones definidas (sobre  
		los tipos conocidos), etc:  34 , [ ] , v , a ∧ (b < 7) , x ►xs , y = a ►as , etc.  
	- No son expresiones válidas las expresiones cuantificadas.
- Definiciones:  
	-  Introducen nuevas funciones con sus respectivos nombres, tipos, y reglas de  
	  reducción.  
	- En las reglas de reducción se indica cómo se sustituye una aplicación de una  
	función por una expresión válida en el lenguaje de programación.  
	- En las definiciones se puede usar pattern-matching.

### Ejemplo
```nomnoml
#background
["xs sólo tiene números positivos"] -> [TodosPos.xs =. ⟨ ∀i : 0 ⩽ i < #xs : xs!i > 0 ⟩] -> [<state>Derivación] -> ```
[todosPos.\[\] = True
  todosPos.(x ▷ xs) = x > 0 ∧ todosPos.xs
]
```