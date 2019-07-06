# plantilla-taller

Esta es una plantilla para usar en los talleres de [La Jaquería](https://lajaqueria.org). Está hecha con [MKDocs](https://www.mkdocs.org/) y usando el tema [Material Design](https://squidfunk.github.io/mkdocs-material/) (es muy completo y además se ve bien en móviles).

## Pasos previos

1. Tienes que tener [Python 3](https://www.python.org/downloads/) instalado.
2. Tienes que instalar [PIP](https://pip.pypa.io/en/stable/installing/), el gestor de paquetes de Python.
3. Instalar [Pipenv](https://pipenv-es.readthedocs.io/es/latest/) -> `pip install pipenv`.

Es altamente recomendado que uses un editor de texto tipo [Visual Studio Code](https://code.visualstudio.com/) / [Visual Studio Codium](https://vscodium.com/), [Atom](https://atom.io/), o similares para trabajar. Para esta plantilla se recomienda usar [VSCode](https://github.com/Microsoft/vscode/) o [VSCodium](https://github.com/VSCodium/vscodium) con las siguientes extensiones instaladas:

* [Markdown All in One](https://marketplace.visualstudio.com/items?itemName=yzhang.markdown-all-in-one)
* [markdownlint](https://marketplace.visualstudio.com/items?itemName=DavidAnson.vscode-markdownlint)
* [TODO Highlight](https://marketplace.visualstudio.com/items?itemName=wayou.vscode-todo-highlight)
* [Todo Tree](https://marketplace.visualstudio.com/items?itemName=Gruntfuggly.todo-tree)

## Instalación

Esta plantilla está pensada para ser usada en un repositorio, aunque la puedes usar de manera local.

1. Crea un repositorio en tu Github para tu taller.
2. A ese repositorio creale una rama que se llame `gh-pages`.
3. En la sección **Settings** de tu repositorio, vete la parte de **Github Pages** y habilita la opción de usar la rama **gh-pages**.
4. Descarga / clona tu repo en tu pc y recuerda que todo el rato vamos a trabajar en la rama `master`.
5. Descarga / clona esta plantilla, [plantilla-taller](https://github.com/LaJaqueria/plantilla-taller), en tu ordenador.
6. Copia de la rama `master` de `plantilla-taller` a la carpeta de tu taller:
      * Carpeta `docs`.
      * Fichero `mkdocs.yml`.
      * Fichero `Pipfile` (el `Pipfile.lock` no).
      * Fichero `.gitignore` (si no lo ves activa los ficheros ocultos).
      * Fichero `LICENSE` (si no quieres que tu taller tenga licencia MIT, cambia su contenido, pero por favor, ponle licencia a tu taller).
      * Es **importante que** la carpeta `.git` **no la copies** bajo ningún concepto.
7. Abre una terminal en la carpeta de tu taller.
8. Crea el entorno virtual e instala todas sus dependencias con `pipenv install`.

Ahora tendrás preparado tu equipo para poder trabajar con la plantilla.

## Como trabajar

### Montar taller en local

Para poder ver el taller en local como si estuviera en Internet, es necesario que levantes su servidor de pruebas. Es tan sencillo como desde la terminal en la carpeta de tu taller hagas

```bash
pipenv run mkdocs serve
```

Ahora en tu navegador podrás ver como va quedando tu taller en la web [http://127.0.0.1:8000/](http://127.0.0.1:8000/).

### Lista de tareas

Una vez abres el taller en la web, verás que en la página principal o home, tienes una lista de tareas. Esta página se corresponde al fichero `docs/index.html`. Ve siguiendo la lista de tareas y tendrás tu taller funcionando.
