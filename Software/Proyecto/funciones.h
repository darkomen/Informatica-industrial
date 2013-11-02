#ifndef FUNCIONES_H
#define FUNCIONES_H


/*
 Función que nos dice si un fichero está creado en el sistema.
 0 sí está creado.
 1 no está creado.
 http://www.portalhacker.net/index.php?topic=106086.0
*/

bool file_exists(const std::string& s);
/*
  Genera todos los ficheros necesarios para el proyecto.
  */
void configuracion();
/*
  genera los id de los nodos, comprueba si el ID ya está generado y lo introduce en un fichero.
  http://c.conclase.net/curso/?cap=039
  http://codigoc.org/354-obtener-numeros-aleatorios-en-c-rand-srand
  http://stackoverflow.com/questions/8116808/read-integers-from-a-text-file-with-c-ifstream/8116843#8116843
*/
int generar_id();
#endif // FUNCIONES_H
