/*
 * Menus.h
 *
 *  Created on: 10/12/2014
 *      Author: javier
 */

#ifndef MENUS_H_
#define MENUS_H_

#include "Contacto.h"
#include <list>

#define CONTACTOS_MAS_USADOS 5 //Número de contactos más usados que se utilizarán en el menú principal

namespace agenda {

class Menus {
public:
	static char principal(std::list<Contacto> masUsados);
	static std::string busqueda();
	static Contacto listado(std::list<Contacto> lista);
	static Contacto addContacto();
	static int copiaSeguridad();
	static std::string formatoLegible();
	static std::list<Cambio>  modificarContacto();
	static bool borrarContacto();
};

} /* namespace agenda */

#endif /* MENUS_H_ */
