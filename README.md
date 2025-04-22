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
Simplemente se agrega esta línea al archivo `.gitignore`:


[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/kl-E8VQf)
