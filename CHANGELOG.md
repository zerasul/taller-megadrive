# Changelog

Todos los cambios del tema de la plantilla son documentados en este fichero.

## [1.0.0] - 2019-07-06

### Puesta a punto

Se necesita Pipenv para trabajar con la plantilla. Se adjunta el `Pipfile` para levantar todo limpiamente.

```bash
# Instalar Pipenv
pip install pipenv
# Crear virtualenv e instalar todo
pipenv install
# Levantar la web para ver los cambios -> http://127.0.0.1:8000/
pipenv run mkdocs serve
# Guardar los cambios y subirlos a Github
pipenv run mkdocs gh-deploy
```

### MKDocs

La plantilla se ha creado con [MKDocs](https://www.mkdocs.org/) porque es muy fácil de usar y mezcla Markdown + Python.

* [Repositorio](https://github.com/mkdocs/mkdocs).
* [Documentación oficial](https://mkdocs.readthedocs.io/en/stable/).

Se ha usado el tema [Material Design](https://squidfunk.github.io/mkdocs-material/) porque es probablemente el más completo, y además es responsivo (por si se quiere leer en móvil o tablet).

* [Repositorio](https://github.com/squidfunk/mkdocs-material).

### Customización

La siguiente entrada ha sido de gran ayuda para aprender a customizar el tema. Aunque es un curso de C, en la sección **Markdown** explica como funciona el tema material.

* [Web de ayuda](http://cuartas.es/c/markdown/)

En el fichero `mkdocs.yml` es donde está toda la customización.
