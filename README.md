# 🚀 Programas en C++: De Fundamentos a Estructuras

<p align="center">
  <img src="https://readme-typing-svg.demolab.com?font=Fira+Code&size=22&pause=1000&color=9A4EFA&center=true&vCenter=true&width=500&lines=%C2%A1Bienvenido+a+mi+repositorio!;Practicas+Academicas+UNMSM;Evolucion+en+C%2B%2B" alt="Typing SVG" />
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Language-C%2B%2B-blue?style=for-the-badge&logo=c%2B%2B&logoColor=white&color=5E27CD" />
  <img src="https://img.shields.io/badge/Environment-Linux%20%2F%20Windows-black?style=for-the-badge&logo=visual-studio-code&logoColor=61DAFB&color=1e1e1e" />
  <img src="https://img.shields.io/badge/Status-En%20Progreso-green?style=for-the-badge&color=2ea44f" />
</p>

---

## 📚 Presentación

Este repositorio está diseñado de manera estructurada para demostrar la evolución lógica y el dominio de conceptos en el lenguaje **C++**. Organizado por módulos, transiciona desde los fundamentos algorítmicos básicos hasta el uso avanzado de memoria dinámica, punteros y estructuras de datos.

---

## 📂 Estructura del Repositorio

A continuación se detallan los módulos interactivos instalados en este espacio:

<details open>
<summary><b>📂 01_Fundamentos</b> (Haz clic para desplegar)</summary>
<blockquote>
Conceptos iniciales, estructuras iterativas (`do-while`, `for`) y lógica condicional básica.

* 🛒 `mercadillo.cpp` — Sistema de simulación de ventas con validación de precios y cantidades negativos.
* 📊 `promedio_rango.cpp` — Filtro iterativo que restringe la entrada del usuario a un rango específico (10-20) y calcula promedios.
* 🔢 `divisores_pares.cpp` — Algoritmo de decomposition numérica para hallar y contar divisores pares de un entero.
</blockquote>
</details>

<details>
<summary><b>📂 02_Vectores_y_Matrices</b></summary>
<blockquote>
Uso de memoria contigua, arreglos unidimensionales, bidimensionales y ordenamiento algorítmico.

* 🧪 `vectores_entradas.cpp` — Suma posicional elemento a elemento utilizando arreglos estáticos en C++.
* 🧮 `suma_matrices.cpp` — Álgebra matricial bidimensional clásica para la lectura y adición de dos matrices de $2 \times 3$.
* 🔄 `ordenamiento_vector.cpp` — Implementación manual del método de ordenamiento (Ascendente / Descendente) manipulando índices del vector.
</blockquote>
</details>

<details>
<summary><b>📂 03_Funciones_Basicas</b></summary>
<blockquote>
Modularización de código, legibilidad y reutilización mediante paso de parámetros por valor.

* ⚙️ `funciones_basico.cpp` — Introducción a prototipos, variables locales y la mecánica del retorno de valores.
* 🧮 `calculadora_operadores.cpp` — Estructura condicional `switch-case` acoplada a funciones aritméticas básicas previniendo la división por cero.
* 🔍 `digito_posicion.cpp` — Algoritmo de extracción de dígitos específicos utilizando divisiones sucesivas y operador residuo (`%`).
</blockquote>
</details>

<details>
<summary><b>📂 04_Punteros_y_Referencias</b></summary>
<blockquote>
Conceptos avanzados de gestión de memoria, direcciones y paso por referencia explícito/implícito.

* 📍 `intercambio_punteros.cpp` — Mutación de variables externas mediante el uso de operadores de dirección (`&`) y desreferenciación (`*`).
* 👥 `duplicar_valores_referencia.cpp` — Paso de arreglos como punteros implícitos para la manipulación y alteración directa de sus datos originales.
</blockquote>
</details>

---

## 🛠️ Compilación y Ejecución

Para clonar y compilar cualquiera de estos módulos localmente a través de la terminal, puedes usar los siguientes comandos:

```bash
# 1. Clonar el repositorio
git clone [https://github.com/sebastopxs/ProgramasCPP.git](https://github.com/sebastopxs/ProgramasCPP.git)

# 2. Entrar a la carpeta
cd ProgramasCPP

# 3. Compilar un archivo de ejemplo
g++ 02_Vectores_y_Matrices/suma_matrices.cpp -o ejecutable

# 4. Correr el programa
./ejecutable
