//
// Created by Lenovo on 2/11/2019.
//

#ifndef PROJECTOPOO_CAJAPRODUCTO_H
#define PROJECTOPOO_CAJAPRODUCTO_H

#include <vector>
#include "producto.h"

using namespace std;
using codigo =int;
using coordenada =int;


class cajaproducto {
private:
    codigo numerocaja;
    coordenada posx;
    coordenada posy;
    size_t capacidadlimite;
public:
    vector<producto> productos;
    vector<producto> Actualizarcaja(vector<producto> productos);
};


#endif //PROJECTOPOO_CAJAPRODUCTO_H
