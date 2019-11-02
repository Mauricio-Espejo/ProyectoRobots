//
// Created by Lenovo on 2/11/2019.
//

#ifndef PROJECTOPOO_ESTRUCTURA_H
#define PROJECTOPOO_ESTRUCTURA_H

#include <vector>
#include "slot.h"
#include <string>

using namespace std;
using longitud =int;

class estructura {
private:
    longitud ancho;
    longitud largo;
public:
    void resize(longitud newancho,longitud newlargo);
    vector<slot> espacios;
};


#endif //PROJECTOPOO_ESTRUCTURA_H
