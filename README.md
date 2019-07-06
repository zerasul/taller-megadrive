# plantilla-taller

Esta es una plantilla para usar en los talleres de [La Jaquería](https://lajaqueria.org). Está hecha con [MKDocs](https://www.mkdocs.org/) y usando el tema [Material Design](https://squidfunk.github.io/mkdocs-material/) (es muy completo y además se ve bien en móviles).

## Pasos previos

1. Tienes que tener [Python 3](https://www.python.org/downloads/) instalado.
2. Tienes que instalar [PIP](https://pip.pypa.io/en/stable/installing/), el gestor de paquetes de Python.
3. Instalar [Pipenv](https://pipenv-es.readthedocs.io/es/latest/) -> `pip install pipenv`.

## Instalación

Esta plantilla está pensada para ser usada en un repositorio, aunque la puedes usar de manera local.

1. Create un repositorio de Github para tu taller.
2. A ese repositorio creale una rama que se llame `gh-pages`.
3. En la sección settings de tu repositorio, vete 
4. Descarga / clona tu repo en tu pc.
5. Descarga / clona esta plantilla, [plantilla-taller](https://github.com/LaJaqueria/plantilla-taller), en tu ordenador.
6. Copia de la carpeta de esta `plantilla-taller` a la carpeta de tu taller:
      * Carpeta `docs`.
      * Fichero `mkdocs.yml`.
      * Fichero `Pipfile` (el `Pipfile.lock` no).
      * Fichero `.gitignore` (si no lo ves activa los ficheros ocultos).
      * Fichero `LICENSE` (si no quieres que tu taller tenga licencia MIT, cambia su contenido, pero por favor, ponle licencia a tu taller).
      * Es importante que la carpeta `.git` no la copies bajo ningún concepto.
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

### Editar información del taller

El fichero que controla como se ven y en que orden las cosas es `mkdocs.yml`. Ábrelo y échale un vistazo. Es un fichero de texto en formato YAML. Consiste en una lista de "componentes", y si dentro de ese "componente" hay algo, va debajo e identado con dos espacios. **OJO** el tema del identado puede hacer que un fichero no esté correctamente bien escrito. Los comentarios se escriben poniendo primero `#`.

El fichero `mkdocs.yml` está dividido en 10 secciones:

1. Información del fichero.
2. Repositorio.
3. Copyright / Autoría del contenido.
4. Redes Sociales.
5. Navegación.
6. Google Analytics.
7. Configuración del tema.
8. Extensiones.
9. Configuración para la extensión de matemáticas.
10. Plugins.

En principio solo debes de editar por ahora los 4 primeros puntos. Si tienes cuenta en Google Analytics puedes editar el punto 6, aunque no es recomendable si va a estar el código de tu taller público.

### Empezar a escribir

TODO:

### Subida a la web

Cuando tengas tu taller listo para ser publicado tienes que abrir una terminal en el directorio de tu taller y hacer:

1. `pipenv run mkdocs gh-deploy` -> Esto