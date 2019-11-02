//
// Created by Lenovo on 2/11/2019.
//

#ifndef PROJECTOPOO_ROBOT_H
#define PROJECTOPOO_ROBOT_H

#include <vector>
#include "producto.h"

using namespace std;

using codigo =int;
using coordenada =int;
using estado =int;

class robot {
private:
    codigo numerorobot;
    vector<coordenada> home;
public:
    estado condicion;
    coordenada posx;
    coordenada posy;
    producto carga;
    estado orden;
    void Moverse(coordenada posxslot, coordenada posyslot);
    void Retirar(coordenada posxslot, coordenada posyslot, producto encargo);
    void Dejarproducto(coordenada posxslot, coordenada posyslot, producto encargo);
};


#endif //PROJECTOPOO_ROBOT_H
