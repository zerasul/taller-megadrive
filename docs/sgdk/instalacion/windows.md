# Instalacion en Windows

Para instalar en Windows el kit de desarrollo se requiere tener instalado el entorno de Ejecución java (JRE); el cual puede descargarse desde la página oficial de [Oracle](https://www.java.com/es/download/); o usarse la alternativa de ```openjdk```.

!!! note
    Requiere Java 1.8 o superior.

Tras tener java instalado, procederemos a realizar las siguientes instrucciones:

1.- Descargar SGDK de la parte de [releases](https://github.com/Stephane-D/SGDK/releases); tras descargarlo, descomprimir donde queramos.

2.- Definir la variable de entorno _GDK_ que apunte a la ruta donde nos descargamos el kit de desarrollo.

!!! note
    La ruta debe establecerse en formato UNIX.

3.- Definir la variable de entorno _GDK_WIN_ que debe apuntar a la ruta donde nos descargamos el kit de desarrollo.

!!! note
    La ruta debe establecerse en formato WINDOWS.

4.- Definir en el _PATH_ de windows la ruta del directorio bin donde se encuentre el SGDK descomprimido; es decir, el valor _%GDK_WIN%\bin_.

!!! note
    Hay que tener cuidado si ya se tenia instalado en el path un comando como gcc ya que puede dar conflicto.

## Compilar la libreria

Normalmente, ya viene una versión compilada de la libreria para desarrollo para Mega Drive; sin embargo, si se requiere compilar de nuevo, esto puede hacerse ejecutando el siguiente comando en la carpeta principal del proyecto.

```bash
%GDK_WIN%\bin\make -f makelib.gen
```