# Instalación en Mac OS

Para poder utilizar en MacOs gendev, existe un proyecto que podéis ver en el siguiente [enlace](https://github.com/SONIC3D/gendev-macos); sin embargo es un proyecto discontinuado.

Sin embargo, pueden usarse las instrucciones para [Linux](../linux#compilar-la-libreria); para poder tratar de compilarlo.

## Metodo Alternativo para MACOs (Wine)

Se puede utilizar Wine para poder desde MacOs utilizar SGDK. Para ello se puede utilizar una [plantilla](https://github.com/v4ld3r5/sgdk_vscode_template) con las tareas necesarias para compilar y ejecutar nuestros proyectos.

Seguidamente se muestran los pasos necesarios para poder utilizar SGDK con Wine.

!!! note
    Estos pasos tambien son compatibles con Unix/Linux.

En primer lugar, crearemos la carpeta y variables de entorno necesarias para el funcionamiento de SGDK y Gens.

```bash
sudo mkdir /opt/gendev
sudo chown $USER: /opt/gendev
```

Las variables de entorno:

```bash
export GENDEV=/opt/gendev
export GDK='c:/sgdk'
export GDK_WIN='c:\sgdk'
export GENS=$GENDEV/gens/genes.exe
```

!!! note
    Puedes hacer que estas variables sean permanentes guardandolas en el fichero .bash_profile o .zshrc

Tras tener las variables y carpetas creadas vamos a utilizar el gestor de paquetes _brew_ para instalar los siguientes paquetes.

```bash
brew cask install xquartz
brew install wine
```

!!! note
    Para instalar brew seguir las [siguientes instrucciones](https://brew.sh/index_es).

Tras tener los dos paquetes instalados vamos a pasar a configurar wine

```bash
mkdir $GENDEV/wine
WINEDEBUG=-all WINEARCH=win32 WINEPREFIX=$GENDEV/wine wineboot
```

Una vez ya tenemos wine instalado y configurado, vamos a pasar a instalar y compilar las librerias de SGDK.

```bash
cd $GENDEV
git clone https://github.com/Stephane-D/SGDK.git
ln -sv $GENDEV/SGDK $GENDEV/wine/drive_c sgdk
```

Como hemos comentado en el apartado de Windows y Linux, es requerido tener instalado el entorno Java. Por lo que se deberá instalar la version del JRE (o JDK) de Java para Windows X86 (Es importante que sea la versión de windows). Una vez descargado pasaremos a realizar los siguientes comandos.

```bash
cd <ruta donde se encuentre el exe de java>
WINEPREFIX=$GENDEV/wine wine cmd
```

Esto abrira un cmd usando Wine. El cual nos motrará la ruta donde nos encontremos. En este terminal escribiremos lo siguiente:

```cmd
z:\> jdk-8u221-windows-i586.exe /s
```

Una vez instalado, tenemos que actualizar el PATH del sistema Wine para que reconozca el comando java. Por lo que ejecutaremos la utilidad de _regedit_.

```bash
WINEPREFIX=$GENDEV/wine wine regedit
```

Una vez abierta la utilidad, iremos a la siguiente ruta en el registro: ```HKEY_LOCAL_MACHINE\System\CurrentControlSet\Control\Session Manager\Environment``` y modificaremos la variable PATH para añadir la ruta donde se encuentre instalado el JRE (o JDK).

!!! note
    Es importante que se añada al path y no se borre el contenido de esta. Simplemente hay que añadir la ruta al final separando de la anterior por un ;.

!!! note
    La ruta que hay que poner es C:\Program Files\Java\jdk1.8.0_xxx\bin los 3 numeros corresponden a la actualizacion descargada.

Una vez tenemos instalado java y todas las herramientas, vamos a compilar la libreria que nos provee SGDK.

```bash
WINEPREFIX=$GENDEV/wine wine cmd
%GDK_WIN%\bin\make -f %GDK_WIN\makelib.gen
```

Por último, descargaremos el template y podremos usarlo desde vscode.

```bash
mkdir workdir
cd workdir
git clone https://github.com/v4ld3r5/sgdk_vscode_template.git
```

!!! note
    Para poder ver las plantillas puede pulsar la combinacion <kbd>CTRL</kbd>+<kbd>mayus</kbd>+<kbd>B</kbd>