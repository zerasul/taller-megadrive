# Web del taller de Videojuegos Retro para Mega Drive

[![Build Status](https://travis-ci.org/zerasul/taller-megadrive.svg?branch=master)](https://travis-ci.org/zerasul/taller-megadrive)

En este repositorio se encuentra el material para el taller de desarrollo de videojuegos retro: Mega Drive.

En este repositorio se encuentra el contenido de la web del taller y ademas una carpeta con los ejemplos que se veran en el repositorio.

Esta web se basa en el generador de paginas estaticas de MKDOCs hecho en python.

## Ejecutar en local la web

Para ejecutar en local la web, debe tener instalado Python 3 con el gestor de paquetes pip y ademas, instalar pipenv utilizando pip.

Para ello, ejecutamos el siguiente comando:

```bash
pip install pipenv
```

Una vez hecho esto, ya podemos clonar el repo:

```bash
git clone https://github.com/zerasul/taller-megadrive.git
```

Una vez clonado y dentro de la carpeta de nuestro repo, ejecutamos ```pipenv install```.

```bash
pipenv install
``` 

Con esto se descargara las dependencias y podremos ejecutar la web.

Por ultimo, vamos a ejecutar el comando ```serve``` de mkdocs, usando pipenv.

```bash
pipenv run mkdocs serve
```