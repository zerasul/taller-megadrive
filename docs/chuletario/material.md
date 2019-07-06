# Material Design

Esta chuleta es un copia-pega modificado de [esta página](http://cuartas.es/c/markdown/). Básicamente es un Markdown específico para poder ser usado con el tema Material Design y sacarle más partido.

## Enlaces

Existe la posibilidad de utilizar referencias a enlaces que se definen posteriormente. En ese caso unicamente incluimos el número de enlace. Más adelante es necesario definir el enlace que corresponde con cada número y, opcionalmente, un texto descriptivo.

	:::markdown
	Podemos comprar un ordenador (Dell)[1] o (Apple)[2].

	[1]: http://dell.com/	"Comprar en Dell"
	[2]: http://apple.com/	"Comprar en Apple"

Podemos comprar un ordenador [Dell][1] o [Apple][2].

[1]: http://dell.com/	"Comprar en Dell"
[2]: http://apple.com/	"Comprar en Apple"

## Imagenes

También es posible utilizar referencias que es necesario definir posteriormente.

	:::markdown
	![texto alternativo][id]

	[id]: /img/md-logo.png "Titulo opcional"

![texto alternativo][id]

[id]: /img/md-logo.png "Titulo opcional"

## Secuencias de escape

Puede ocurrir que alguno de los caracteres especiales utilizados en markdown aparezcan de forma fortuita en el texto y originen efectos no deseados. Para evitarlo podemos utilizar las secuencias de escape para especificar que deseamos utilizar el caracter como texto sin que tenga ningún efecto colateral. Podemos utilizar el caracter '\' junto con cualquiera de los siguientes para crear una secuencia de escape.

	\ backslash
	` backtick
	* asterisco
	_ underscore
	{} curly braces
	[] square brackets
	() parentheses
	# hash mark
	+ plus sign
	- minus sign (hyphen)
	. dot
	! exclamation mark

## Código

Para marcar texto como código es necesario indentar cada línea del bloque con cuatro espacios o una tabulación. Si el código va embebido en un párrafo, es neceario rodearlo por comillas simples invertidas. Consultar la sección de CodeHilite y de InlineHilite para funcionalidades extendidas.

## Extensiones

### Admonition

Extensión incluida en la librería estándar de Markdown que permite incluir contenido adicional en cajas de color con un título y un icono. Por ejemplo para resúmenes, notas, consejos o avisos.

```` markdown
!!! note
	Esto es un ejemplo de nota (note, seealso).
````

!!! note
	Esto es un ejemplo de nota (note, seealso).

```` markdown
!!! note "Esta es una nota con título"
	Lorem ipsum dolor sit amet, consectetur adipiscing elit.
	Nulla et euismod nulla. Curabitur feugiat, tortor non
	consequat finibus, justo purus auctor massa, nec semper
	lorem quam in massa.
````

!!! note "Esta es una nota con título"
	Lorem ipsum dolor sit amet, consectetur adipiscing elit.
	Nulla et euismod nulla. Curabitur feugiat, tortor non
	consequat finibus, justo purus auctor massa, nec semper
	lorem quam in massa.

```` markdown
!!! note ""
	Esta nota va sin título.
````

!!! note ""
	Esta nota va sin título.

En vez de note es posible utilizar las siguientes etiquetas: summary, info, tip, success, question, warning, failure, danger, bug y quote.

!!! summary
	Esto es un ejemplo de sumario (summary, tldr).

!!! info
	Esto es un ejemplo de bloque informativo (info, todo).

!!! tip
	Esto es un ejemplo de consejo o truco (tip, hint, important).

!!! success
	Esto es un ejemplo de bloque de éxito (success, check, done).

!!! question
	Esto es un ejemplo de pregunta (question, help, faq).

!!! warning
	Esto es un ejemplo de precaución (warning, caution, attention).

!!! failure
	Esto es un ejemplo de fallo (failure, fail, missing).

!!! danger
	Esto es un ejemplo de peligro (danger, error).

!!! bug
	Esto es un ejemplo de error (bug).

!!! quote
	Esto es un ejemplo de cita (quote, cite).

### Details

Para crear bloques colapsables que puedan ocultar su contenido.

Ejemplo:
```` markdown
??? "Bloque cerrado. Abreme !!!"
    Ahora lo has abierto.
````
Resultado:
??? "Bloque cerrado. Abreme !!!"
    Ahora lo has abierto.

Ejemplo:
```` markdown
???+ "Bloque abierto inicialmente"

    ??? "Bloque dentro de otro bloque"
        Algo de contenido.
````
Resultado:
???+ "Bloque abierto inicialmente"

    ??? "Bloque dentro de otro bloque"
        Algo de contenido.

Ejemplo:
```` markdown
??? danger "Bloque con tema de peligro"
    Algo de contenido.
````
Resultado:
??? danger "Bloque con tema de peligro"
    Algo de contenido.

??? warning "Bloque con tema de precaución"
    Algo de contenido.

??? success "Bloque con tema de éxito"
    Algo de contenido.

### CodeHilite

Extensión incluida en la librería estándar de Markdown que permite resaltar la sintaxis de los bloques de código. Como lenguajes soportados están entre otros: markdown, python, c, cpp, csharp, html, javascript, JSON, XML.

Ejemplo utilizando comillas simples.

```` markdown
``` python
import tensorflow as tf
```
````

Resultado:

``` python
import tensorflow as tf
```

Ejemplo utilizando bloque tabulado con cuatro espacios:

```` markdown
    :::python
    """ Bubble sort """
    def bubble_sort(items):
        for i in range(len(items)):
            for j in range(len(items) - 1 - i):
                if items[j] > items[j + 1]:
                    items[j], items[j + 1] = items[j + 1], items[j]
````

Resultado:

    :::python
    """ Bubble sort """
    def bubble_sort(items):
        for i in range(len(items)):
            for j in range(len(items) - 1 - i):
                if items[j] > items[j + 1]:
                    items[j], items[j + 1] = items[j + 1], items[j]

Ejemplo utilizando bloque tabulado y números de línea:

```` markdown
    #!python
    """ Bubble sort """
    def bubble_sort(items):
        for i in range(len(items)):
            for j in range(len(items) - 1 - i):
                if items[j] > items[j + 1]:
                    items[j], items[j + 1] = items[j + 1], items[j]
````

Resultado:

    #!python
    """ Bubble sort """
    def bubble_sort(items):
        for i in range(len(items)):
            for j in range(len(items) - 1 - i):
                if items[j] > items[j + 1]:
                    items[j], items[j + 1] = items[j + 1], items[j]

Es posible resaltar líneas concretas de código con hl_lines.

```` markdown
    #!python hl_lines="3 4"
````

Resultado:

    #!python hl_lines="3 4"
    """ Bubble sort """
    def bubble_sort(items):
        for i in range(len(items)):
            for j in range(len(items) - 1 - i):
                if items[j] > items[j + 1]:
                    items[j], items[j + 1] = items[j + 1], items[j]

### InlineHilite

Permite embeber código en el texto mediante ` #!languaje code` o bien ` :::languaje code` entre comillas simples inversas.

Ejemplo:
```` markdown
Aqui se presenta este código `#!c #include <stdio.h>` embebido en el texto.
````
Resultado:

Aqui se presenta este código `#!c #include <stdio.h>` embebido en el texto.

Ejemplo:
```` markdown
Aqui se presenta este otro código `:::c #include <stdlib.h>` embebido en el texto.
````
Resultado:

Aqui se presenta este otro código `:::c #include <stdlib.h>` embebido en el texto.

Ejemplo:
```` markdown
Código javascript: `#!js function pad(v){return ('0'+v).split('').reverse().splice(0,2).reverse().join('')}`.
````
Resultado:

Código javascript: `#!js function pad(v){return ('0'+v).split('').reverse().splice(0,2).reverse().join('')}`.

### Mark

Permite marcar texto en ==amarillo fosforito==.

La anterior frase se ha generado así:
```` markdown
Permite marcar texto en ==amarillo fosforito==.
````

### Footnotes

Otra extensión de la libreria estándar para incluir notas al pie de página. Se inserta una referencia en el texto, la cual puede ser definida en cualquier parte del documento. La definición aparecerá en el pie de página. La referencia consiste en un sombrerete seguido de un identificador numérico [1, 2, 3, ...] o bien de nombres [Cuartas et al. 2012].

Ejemplo:

```` markdown
Lorem ipsum[^1] dolor sit amet, consectetur adipiscing elit.[^2]
````

Resultado:

Lorem ipsum[^1] dolor sit amet, consectetur adipiscing elit.[^2]

La definición de los contenidos de la nota al pie puede realizarse en una única línea si el texto es corto:

```` markdown
[^1]: Lorem ipsum dolor sit amet, consectetur adipiscing elit.
````

o bien en un bloque de texto indentado cuatro espacios, que comienze en la siguiente línea de la etiqueta, si el texto es largo.

```` markdown
[^2]:
    Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nulla et euismod
    nulla. Curabitur feugiat, tortor non consequat finibus, justo purus auctor
    massa, nec semper lorem quam in massa.
````

[^1]: Lorem ipsum dolor sit amet, consectetur adipiscing elit.

[^2]:
    Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nulla et euismod
    nulla. Curabitur feugiat, tortor non consequat finibus, justo purus auctor
    massa, nec semper lorem quam in massa.

### Arithmatex <small>MathJax</small>

Basado en [MathJax][10]. Permite introducir equaciones escritas en TeX dentro de bloques o en línea con el texto. Ver [este hilo][11] para una rápida referencia sobre la sintaxis TeX.

Ejemplo:
```` markdown
$$\frac{n!}{k!(n-k)!} = \binom{n}{k}$$

$$\sum_{i=0}^n i^2 = \frac{(n^2+n)(2n+1)}{6}$$
````
Resultado:

$$\frac{n!}{k!(n-k)!} = \binom{n}{k}$$

$$\sum_{i=0}^n i^2 = \frac{(n^2+n)(2n+1)}{6}$$

Ejemplo:
```` markdown
Lorem ipsum dolor sit amet: $p(x|y) = \frac{p(y|x)p(x)}{p(y)}$
````

Resultado:

Lorem ipsum dolor sit amet: $p(x|y) = \frac{p(y|x)p(x)}{p(y)}$

#### Letras griegas

`:::markdown $\alpha, \beta, ..., \omega$`

$\alpha, \beta, ..., \omega$

`:::markdown $\Gamma, \Delta, ..., \Omega$`

$\Gamma, \Delta, ..., \Omega$

#### Superindices y subindices

`:::markdown $x_i^2  \log_2 x$`

$x_i^2  \log_2 x$

#### Grupos

Superíndices, subíndices y otras operaciones aplican
solamente al siguiente "grupo". Un "grupo" es un único
símbolo o un cualquier fórmula ubicada entre llaves {...}

`:::markdown $10^10$`

$10^10$

`:::markdown $10^{10}$`

$10^{10}$

`:::markdown ${x^y}^z$`

${x^y}^z$

[10]: https://www.mathjax.org/
[11]: http://meta.math.stackexchange.com/questions/5020/
