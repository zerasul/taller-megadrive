# Visual Studio Code

Para poder realizar este taller; vamos a utilizar Visual Studio Code. Este editor nos permitirá trabajar con los ejemplos que vamos a realizar.

En primer lugar, vamos a instalar Visual Studio code; el cual podeís descargar desde el siguiente [enlace](https://code.visualstudio.com/Download).

Para poder trabajar con SGDK y visual studio code, podemos usar 2 alternartivas.

## Plantilla de Tareas

Una de las formas de poder trabajar con Visual Studio code y SGDK, es el usar una plantilla de tareas para Visual Studio Code.

Para ello, vamos a utilizar el siguiente proyecto para poder utilizar SGDK tanto en Windows, como en Linux (usando Wine) o MAcOs( También usando wine). También permite utilizar el emulador Gens.

Podéis ver la plantilla desde el siguiente [enlace](https://github.com/v4ld3r5/sgdk_vscode_template)

## Genesis Code

Se ha creado una nueva extensión para Visual Studio Code, para poder integrar tanto la compilación, como la creación de proyectos para usar con SGDK o GENDEV. Podéis descargar esta extensión desde el [marketplace de Microsoft](https://marketplace.visualstudio.com/items?itemName=zerasul.genesis-code).

!!! note
    Actualmente Genesis Code no es compatible con MACOs. Se esta trabajando en su resolución.

Esta extensión permite realizar los siguientes comandos (que se pueden utilizar pulsando la combinación <kbd>CTRL</kbd>+<kbd>mayus</kbd>+<kbd>P</kbd>):

![genesiscodecommands](../img/genesiscode.png)

* Crear proyecto: Crea un proyecto nuevo generando un ejemplo completo de 'Hello World'.
* Compilar proyecto: LLama a SGDK para compilar y crear la rom.
* Limpiar proyecto: Llama a SGDK para limpiar el proyecto.
* Ejecutar Proyecto: Ejecuta el emulador gens con la rom del proyecto actual (dentro de la carpeta out).
* Compilar y ejecutar proyecto: Compila y después ejecuta el emulador gens de la rom generada.
* Establecer el comando para ejecutar gens: Actualiza la configuración para establecer como se llamará al emulador gens.


!!! note
    También se puede establecer el comando desde la configuración de VSCode (<kbd>CTRL</kbd>+<kbd>,</kbd>).

!!! note
    Este comando es compatible con cualquier emulador que pueda usarse como Blastem.


Para más información acerca de Genesis code, puedes consultar el proyecto en [Github](https://github.com/zerasul/genesis-code).