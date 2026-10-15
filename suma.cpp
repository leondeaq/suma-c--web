#include <iostream>
#include <emscripten/emscripten.h>

// El bloque "C" evita que el compilador altere el nombre de la funcion.
extern "C" {

	EMSCRIPTEN_KEEPALIVE
	 int sumar (int a, int b) {
	 	return a + b;
	 }
}
