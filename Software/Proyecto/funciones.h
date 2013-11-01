#ifndef FUNCIONES_H
#define FUNCIONES_H


/*
 Función que nos dice si un fichero está creado en el sistema.
 0 sí está creado.
 1 no está creado.
 código de ejemplo con ayuda de: http://www.portalhacker.net/index.php?topic=106086.0
*/

bool file_exists(const std::string& s);
/*
  Genera todos los ficheros necesarios para el proyecto.
  */
void configuracion();
#endif // FUNCIONES_H
