---
Materia: Algoritmos1
tags:
---
Un if es una sentencia que me permite ejecutar distintas sub-sentencias dependiendo del cumplimiento de una o más condiciones.
Por ejemplo:
**
Var x : Int
if   x ≥ 0 →                        ← las condiciones se llaman “guardas”
  skip                                ← skip es una sentencia que no hace nada
⌷   x < 0 → 
  x := -x
fi
**