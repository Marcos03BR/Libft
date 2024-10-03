# Libft 🛠️

¡Bienvenido a mi implementación de la librería Libft de 42! 🎉

## Descripción 📚

Este proyecto consiste en recrear funciones estándar de la biblioteca de C, así como funciones adicionales y manipulaciones de listas enlazadas. El objetivo es comprender en profundidad cómo funcionan estas funciones y sentar una base sólida para futuros proyectos.

## Funciones Implementadas 🔧

### Funciones de la libc

- **`isalpha`**: Comprueba si un carácter es alfabético.
- **`isdigit`**: Comprueba si un carácter es un dígito decimal.
- **`isalnum`**: Comprueba si un carácter es alfanumérico.
- **`isascii`**: Comprueba si un carácter es ASCII.
- **`isprint`**: Comprueba si un carácter es imprimible.
- **`strlen`**: Calcula la longitud de una cadena.
- **`memset`**: Rellena una área de memoria con un byte constante.
- **`bzero`**: Pone a cero los bytes de una área de memoria.
- **`memcpy`**: Copia una área de memoria a otra.
- **`memmove`**: Copia áreas de memoria que pueden solaparse.
- **`strlcpy`**: Copia cadenas con terminación nula de forma segura.
- **`strlcat`**: Concatena cadenas con terminación nula de forma segura.
- **`toupper`**: Convierte un carácter a mayúscula.
- **`tolower`**: Convierte un carácter a minúscula.
- **`strchr`**: Localiza la primera aparición de un carácter en una cadena.
- **`strrchr`**: Localiza la última aparición de un carácter en una cadena.
- **`strncmp`**: Compara dos cadenas hasta n caracteres.
- **`memchr`**: Busca un byte en una área de memoria.
- **`memcmp`**: Compara dos áreas de memoria.
- **`strnstr`**: Localiza una subcadena dentro de otra hasta n caracteres.
- **`atoi`**: Convierte una cadena a entero.
- **`calloc`**: Asigna memoria y la pone a cero.
- **`strdup`**: Duplica una cadena.

### Funciones adicionales

- **`substr`**: Extrae una subcadena de una cadena.
- **`strjoin`**: Concatena dos cadenas en una nueva.
- **`strtrim`**: Elimina caracteres específicos al inicio y al final de una cadena.
- **`split`**: Divide una cadena en un array de cadenas usando un delimitador.
- **`itoa`**: Convierte un entero a cadena.
- **`strmapi`**: Aplica una función a cada carácter de una cadena para crear una nueva.
- **`striteri`**: Aplica una función a cada carácter de una cadena.
- **`putchar_fd`**: Escribe un carácter en un file descriptor.
- **`putstr_fd`**: Escribe una cadena en un file descriptor.
- **`putendl_fd`**: Escribe una cadena y un salto de línea en un file descriptor.
- **`putnbr_fd`**: Escribe un número en un file descriptor.

### Funciones bonus (Listas Enlazadas)

- **`lstnew`**: Crea un nuevo nodo de lista.
- **`lstadd_front`**: Añade un nodo al inicio de la lista.
- **`lstsize`**: Calcula el tamaño de la lista.
- **`lstlast`**: Devuelve el último nodo de la lista.
- **`lstadd_back`**: Añade un nodo al final de la lista.
- **`lstdelone`**: Elimina un nodo de la lista.
- **`lstclear`**: Elimina y libera toda la lista.
- **`lstiter`**: Itera sobre la lista y aplica una función a cada nodo.
- **`lstmap`**: Crea una nueva lista aplicando una función a cada nodo.

## Cómo Compilar 🚀

1. **Clona el repositorio**:

   ```bash
   git clone https://github.com/Marcos03BR/Libft.git
   ```
2. **Accede al directorio del proyecto**:
   ```bash
   cd Libft
   ```
3. **Compila la librería**:
   ```bash
   make
   ```
   Para compilar también las funciones bonus:
   ```bash
   make bonus
   ```
4. **Limpia los archivos objeto**:
   ```bash
   make clean
   ```
   Para una limpieza completa (incluyendo libft.a):
   ```bash
   make fclean
   ```
5. **Recompila desde cero**:
   ```bash
   make re
   ```

## Documentación 📝
Para una explicación detallada de cada función, visita la [Wiki del proyecto](https://github.com/Marcos03BR/Libft/wiki).

## Resultado Final 🏆
Este proyecto ha sido corregido y he obtenido 125/100 - Outstanding Project.
