# Instalación en Linux

Aunque no existe una versión oficial para Linux, si que existen proyectos como gendev que nos ayudan a poder tener todas las herramientas preparadas para este sistema Operativo, como [gendev](https://github.com/kubilus1/gendev).

!!! note
    Estas instrucciones solo serán válidas para Linux 64 bits; por lo que en otras arquitecturas tendrán que compilarse a mano todas las dependencias.

Antes de comenzar a utilizar gendev, se deben de instalar los siguientes prerequisitos:

* texinfo.
* java (ya sea openjdk o la versión de Oracle).

Una vez instalados los anteriores paquetes (usando cualquier gestor de paquetes de su distribución), podemos pasar a descargar e instalar gendev.

Para descargar gendev, podemos ir a la página de [Relases](https://github.com/kubilus1/gendev/releases) del repositorio del proyecto.

!!! note
    Como puede verse, se puede descargar en formato **.deb** o como **tar.gz**; recomendamos utilizar el formato .deb en el caso de usar este formato (Debian); si su distribución no lo soporta, usar la otra alternativa.

Recordad que para instalar un paquete .deb se debe usar el siguiente comando:

```bash
dpkg -i <fichero.deb>
```

Una vez descargado e instalado (o descomprimido), vamos a pasar a configurar el entorno; para ello definimos la variable de entorno _GENDEV_ que apunte a la ruta donde se encuentre instalado el gendev.

```bash
export GENDEV=/opt/gendev
```

!!! note
    Si se instala usando el paquete deb, la ruta por defecto es ```/opt/gendev```.

!!! note
    Puede añadirse al _perfil bash_ del usuario para que siempre este añadido.

Una vez hecho esto, ya podremos utilizar gendev o sgdk sin ningún problema.

## Compilar la librería

Aunque ya viene con una versión compilada del Kit de desarrollo y todas las herramientas necesarias, quizas sea necesario compilar la librería y todo el kit a partir del código fuente. Por lo que para poder compilar todas las herramientas, necesitaremos las siguientes dependencias:

* git
* build-essential
* texinfo
* curl
* wget
* unzip

Tras esto se clona el repositorio del proyecto de [gendev](https://github.com/kubilus1/gendev) y se realizan los siguientes comandos:

```bash
cd gendev
make
```

!!! note
    La compilación tardará sobre unos 45 minutos.
