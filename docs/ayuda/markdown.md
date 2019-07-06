# Chuleta de Markdown

Esta es solo una chuleta de Markdown básico. En esta web tienes una referencia muy buena -> [Web de Markdown](https://markdown.es/).

Para escribir Markdown se recomienda usar como editor [VSCode](https://code.visualstudio.com/) o [VSCodium](https://vscodium.com/) con las extensiones:

* [Markdown All in One](https://marketplace.visualstudio.com/items?itemName=yzhang.markdown-all-in-one)
* [Markdownlint](https://marketplace.visualstudio.com/items?itemName=DavidAnson.vscode-markdownlint)

## Títulos

# Esto es un título 1 -> Usar solo al principio del fichero

## Esto es un título 2 -> Usar para dividir en secciones

### Esto es un título 3 -> Usar para dividir en subsecciones

#### Esto es un título 4 -> No recomendado su uso

##### Esto es un título 5 -> No recomendado su uso

##### Esto es un título 6 -> No recomendado su uso

## Textos

Texto en **negrita**.  
Texto en *cursiva*.  

Para poner un salto de linea tienes que poner dos espacios en blanco después del punto.  
Esta línea está debajo.
Pero esta sale seguido.

O debes de poner una línea vacía entre medias.

## Enlaces

Así se pone un [enlace a una página de Internet](https://lajaqueria.org).

Así se pone un [enlace a una página del propio taller](../instalacion/linux.md).

## Imágenes

Así se pone una imagen desde Internet

![Imagen de internet](https://lajaqueria.org/images/logo.png)

Y así se pone una imagen desde el propio taller

![Imagen del taller](../img/logo.png)

## Listas

Listas sin orden con `*`, ejemplo:

* Esto es una lista
* Lista sin orden.

Listas ordenadas con `1.`, ejemplo:

1. Esto es una
2. Lista ordenada

## Citas

Si quieres poner una cita tienes que usar `>` delante del texto, ejemplo:

> Esto es una cita
>> Esto es una cita anidada
>>> Esto es una cita doblemente anidada

## Regla horizontal

Se hace para poner una línea que divisa visualmente una sección de otra.

***

Aquí hay una.

## Tablas

En este ejemplo tienes una tabla con 3 columnas:

* La primera tiene el texto fijado a la izquierda.
* La segunda tiene el texto fijado al centro.
* La tercera tiene el texto fijado a la derecha.

| Texto a la izquierda  |  Texto en el centro |  Texto en la derecha |
|---|:-:|--:|
| En un lugar | de la mancha, | de cuyo nombre |
| no quiero acordarme, | no ha mucho tiempo | que vivia |
| un hidalgo | de los de lanza | en astillero, |
| adarga antigua, | rocín flaco | y galgo corredor... |

## Líneas de código

Para poner código en línea, tienes que ponerlo entre las comillas `.

Aquí tienes `un ejemplo de código` en línea.

Si quisieras poner un bloque de código tienes que poner 3 comillas `, debajo el código, y una última línea con otras 3 comillas. Puedes incluso específicarle el lenguaje del código para que te lo coloree. Ahí va un ejemplo en Python:

```python
import antigravity

print('Hola mundo')
```
