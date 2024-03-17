---
Materia: Algoritmos1
tags:
---
Tomando como ejemplo el programa de [[31 - Ciclo do]]:
  **
  <font color="#c0504d">ℓ₁</font> do x ≠ 0 →                    ← el “do” tiene una sola guarda
  <font color="#c0504d">ℓ2</font>     x := x - 1                    ← bloque de sentencia adentro llamado “cuerpo”.
  <font color="#c0504d">ℓ3</font> od
  **
 
<u>Ejemplo: con estado inicial x ↦ 2</u>

| línea | estado/guardas | observaciones |
| ---- | ---- | ---- |
|  | σ₀: x ↦ 2 | estado inicial |
| ℓ₁ | σ₀: x ↦ 2, x ≠ 0 ≡ True | evalúo guarda |
| ℓ2     x := x - 1 | σ1: x ↦ 1 | cuerpo del ciclo |
| ℓ₁ | σ1: x ↦ 1, x ≠ 0 ≡ True | evalúo guarda |
| ℓ2     x := x - 1 | σ2: x ↦ 0 | cuerpo del ciclo |
| ℓ₁ | σ2: x ↦ 0, x ≠ 0 ≡ False | evalúo guarda |
| ℓ3 | σ2: x ↦ 0 | estado final |
1. a partir del estado inicial, chequeo si vale o no vale la guarda.
2. si la guarda vale,
	- ejecuto el cuerpo del ciclo.
	- a partir del estado que resulta de ejecutar el cuerpo del ciclo, chequeo nuevamente si vale o no la guarda, y vuelvo al paso 2.
1. si la guarda no vale, el ciclo termina y el estado queda como estaba.