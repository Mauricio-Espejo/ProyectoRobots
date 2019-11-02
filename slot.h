//
// Created by Lenovo on 2/11/2019.
//

#ifndef PROJECTOPOO_SLOT_H
#define PROJECTOPOO_SLOT_H

#include <vector>
#include "cajaproducto.h"
#include <string>

using namespace std;
using codigo =int;
using coordenada =int;
using cantidad = int;

class slot {
private:
    coordenada posx;
    coordenada posy;
    string tipoproducto;
public:
    cantidad conteocajas;
    vector<cajaproducto> cajas;
    cantidad conteo(vector<cajaproducto> cajas);
    void subirproducto(vector<cajaproducto> cajas);
    void bajarproducto(vector<cajaproducto> cajas);
};


#endif //PROJECTOPOO_SLOT_H
