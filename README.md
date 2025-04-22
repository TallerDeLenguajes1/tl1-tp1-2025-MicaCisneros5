## Punto 2 - Archivo .gitignore

### ¿Qué es?
Es un archivo que le indica a Git qué archivos o carpetas debe ignorar, es decir, no seguir ni subir al repositorio.

### ¿Por qué es conveniente incluirlo?
Porque ayuda a:
- No subir archivos temporales o personales.
- Mantener limpio el proyecto.
- Evitar errores al compartir el código con otras personas.

### ¿Cuándo se debe hacer?
Lo ideal es crearlo al iniciar un proyecto, pero se puede agregar después en cualquier momento.

### ¿Cómo se configura?
Cada línea indica qué archivo o carpeta ignorar.  
Ejemplo:

*.log carpeta_temporal/ archivo_secreto.txt

### ¿Cómo ignorar un archivo llamado `ignorado.txt`?
Simplemente se agrega esta línea al archivo `.gitignore`

## Punto 3.g - Análisis del uso de punteros

1) El contenido del puntero y la dirección almacenada son distintos porque uno es el valor al que apunta y otro la ubicación en memoria.
2) El punto 4 muestra la dirección del puntero en sí, que es diferente porque el puntero también ocupa espacio en memoria.
3) El tamaño de la variable depende del tipo de dato. En este caso, un `int` generalmente ocupa 4 bytes.
4) El resultado es el mismo entre los puntos 2 y 3 porque el puntero apunta directamente a la variable, pero su propia dirección es otra.



[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/kl-E8VQf)
