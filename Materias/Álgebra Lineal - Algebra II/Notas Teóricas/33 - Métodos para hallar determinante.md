---
Materia: Álgebra
tags:
  - métodos
  - determinante
  - matrices
---

## Método para matrices 2x2
Sea $$A=\begin{bmatrix}a&b\\c&d\end{bmatrix},$$ entonces $$ \det A = a \det [d] - c \det [b] = ad-bc. $$

## Método para matrices 3x3
Método para calcular el determinante de matrices $3\times 3$, se sigue lo siguiente:
- **1.** A la matriz original le agregamos las dos primeras filas al final, 
- **2.** *sumamos*  cada producto de las diagonales descendentes y *restamos cada producto de las diagonales ascendentes.

Gráficamente se podría ver como:
```tikz
\usepackage{tikz}
\usetikzlibrary{matrix}

\begin{document}
\begin{tikzpicture}[baseline=(A.center)]
    \tikzset{node style ge/.style={circle}}
    \tikzset{BarreStyle/.style =   {opacity=.4,line width=0.5 mm,line cap=round,color=#1}}
    \tikzset{SignePlus/.style =   {above left,,opacity=1}}
    \tikzset{SigneMoins/.style =   {below left,,opacity=1}}
    % les matrices
    \matrix (A) [matrix of math nodes, nodes = {node style ge},,column sep=0 mm] 
    { a_{11} & a_{12} & a_{13}  \\
        a_{21} & a_{22} & a_{23}  \\
        a_{31} & a_{32} & a_{33}  \\
        a_{11} & a_{12} & a_{13} \\
        a_{21} & a_{22} & a_{13}\\
    };
    
    \draw [BarreStyle=blue] (A-1-1.north west) node[SignePlus=blue] {$+$} to (A-3-3.south east) ;
    \draw [BarreStyle=blue] (A-2-1.north west) node[SignePlus=blue] {$+$} to (A-4-3.south east) ;
    \draw [BarreStyle=blue] (A-3-1.north west) node[SignePlus=blue] {$+$} to (A-5-3.south east) ;
    \draw [BarreStyle=red]  (A-3-1.south west) node[SigneMoins=red] {$-$} to (A-1-3.north east);
    \draw [BarreStyle=red]  (A-4-1.south west) node[SigneMoins=red] {$-$} to (A-2-3.north east);
    \draw [BarreStyle=red]  (A-5-1.south west) node[SigneMoins=red] {$-$} to (A-3-3.north east);
\end{tikzpicture}
\end{document}
```
Es decir,
- se suman  $a_{11}a_{22}a_{33}$, $a_{21}a_{32}a_{13}$, $a_{31}a_{12}a_{23}$,  y
- se restan  $a_{31}a_{22}a_{13}$,  $a_{11}a_{32}a_{23}$,  $a_{21}a_{12}a_{33}$. 