# Tarea-Programada-1_C113
Instrucciones generales
1. Puede realizar esta entrega en equipos de máximo 2 integrantes.
2. En los equipos de 2 personas, solo una debe realizar la entrega.
3. Debe incluir lo necesario para que cualquier otra persona pueda compilar su código, ya sea
los archivos .json generados por Visual Studio Code o el comando para compilar desde
terminal desde el directorio base (en un archivo .txt).
4. Su programa debe ser capaz de compilar, de lo contrario, la nota correspondiente será de cero.
Objetivos
Al completar esta tarea el estudiante debería ser capaz de:
1. Manejar con fluidez las características relevantes del ambiente de trabajo Visual Studio Code.
2. Comprender y aplicar el esquema de trabajo “Controlador-Modelo”.
3. Construir una clase en C++.
4. Asociar atributos a una clase en C++. Construir y asociar métodos a una clase en C++.
5. Comprender y aplicar distintas técnicas para paso de datos entre métodos que son típicas de
C++.
6. Manejar los mecanismos de memoria dinámica en C++.
Descripción del problema
Se deberán programar clases y el programa principal para implementar una red social. Se
deberán programar clases propias. No es permitido usar clases de la biblioteca estándar de C++. Por
ejemplo, si es necesario implementar una lista enlazada, esta deberá ser propia. Se podrá hacer uso
de punteros crudos o inteligentes. Se deberá programar la clase persona. Para cada persona se
deberán guardar los datos de: nombre, (string) apodo o “nickname” (string), edad (int), sexo (bool),
aficiones (un arreglo de 10 strings), esto constituye la definición de la clase “persona”. Las personas
serán identificadas por su apodo. Se deberá definir una clase “grafo” que representará precisamente
la red de personas de tal forma que desde el programa principal el usuario final podrá:
1. Cargar una base de datos de personas y relaciones de amistad (archivo de texto).
2. Agregar nuevas personas a la red.
3. Eliminar personas de la red.
4. Agregar nuevas relaciones entre personas (verificar existencia de involucrados).
5. Eliminar relaciones.
6. Responder a las preguntas:
1. ¿Está X en la red?
2. ¿Es X amigo de Y?
3. ¿Cuáles son todas las amistades de X?
4. ¿Cuáles son todas las amistades en común de X y Y?
7. Guardar la nueva red de personas en un archivo de texto.
Para lograr lo anterior, el programa principal se basará en operaciones de la clase grafo. La
implementación de esta clase grafo se hará mediante listas de adyacencia y según los lineamientos
dados en clase.
Criterios de evaluación
La nota final de su trabajo dependerá de si en su programa se:
1. Respetan las reglas de estilo del código: márgenes, nombres de objetos en minúsculas,
nombres de clases en minúsculas, nombres de métodos también empiezan en minúscula, pero
se usan guiones bajos para concatenar palabras, comentarios para los atributos y variables de
métodos. En general se utilizará un código con este estilo:
namespace mine
{
 bool has_factor(int x, int y)
 {
 int factor{ hcf(x, y) };
 if (factor > 1)
 {
 return true;
 }
 else
 {
 return false;
 }
 }
}
2. Respeta la división de responsabilidades entre el programa controlador (que es el main()) y
“modelo”, de manera que el “controlador” se ocupa de la entrada de datos, todos los cálculos,
el procesamiento de los datos y el despliegue de los resultados por la “consola”.
3. Ha simplificado el código lo más posible evitando el procesamiento duplicado de datos.
4. Se documentan mediante REQ, MOD y EFE los principales métodos (omita constructores,
destructor, getters y setters).
5. Hace un uso óptimo de la memoria RAM en las estructuras de datos siguiendo los
lineamientos discutidos en clase para implementar la clase Grafo.
Productos
A través del sitio del curso, usted deberá entregar:
• Una carpeta comprimida con los archivos de código fuente. El nombre del archivo
comprimido y de la carpeta contenida se basará en el número de carnet de los participantes,
por ejemplo “A12345_A67890_tp1.zip”.
• En caso de que su programa no procese correctamente todas las operaciones descritas, haga
un reporte de errores. Para cada error explique: 1) en qué consiste el error, 2) cuál cree usted
que es la causa, 3) qué hizo para corregirlo, aunque no haya funcionado. En la medida en que
este reporte muestre su dedicación al trabajo su nota final para esta tarea podría mejorar.
