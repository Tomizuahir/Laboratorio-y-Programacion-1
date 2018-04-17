/** \brief Muestra un mensaje por pantalla y pide cargar un numero entero.
 *
 * \param char* Mensaje predeterminado a mostrar al pedir un numero.
 * \param char* Mensaje de error.
 * \param int Cantidad maxima de intentos de ingreso admitidos.
 * \param long Numero minimo admitido.
 * \param long Numero maximo admitido.
 * \param int* Puntero a entero de la variable en la que se desea guardar el entero ingresado por el usuario.
 * \return int 0-No hay errores, -1-Hay errores.
 *
 */
int getInt(char*,char*,int,long,long,int*);

/** \brief Muestra mensajes por pantalla solicitando numeros enteros para cargarlos en un array.
 *
 * \param intArray int* Array de enteros en el que se desea guardar los numeros ingresados por el usuario.
 * \param qtyArrayElem int Tamaño del array.
 * \return int 0-No hay errores, -1-Hay errores.
 *
 * Esta funcion tiene dependencia de "getInt", de esta misma libreria.
 */
int loadIntArrayElements(int* intArray,int qtyArrayElem);

/** \brief Calcula el promedio en un array de numeros enteros.
 *
 * \param intArray int* Array de numeros enteros.
 * \param qtyArrayElem int Cantidad de elementos del array.
 * \param promElem float* Promedio.
 * \return int 0-No hay errores, -1-Hay errores.
 *
 * Esta funcion tiene dependencia de "loadIntArrayElements", de esta misma libreria.
 */
int promIntArrayElements(int* intArray,int qtyArrayElem,float* promElem);
