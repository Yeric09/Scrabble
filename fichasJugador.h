#ifndef FICHASJUGADOR_H
#define FICHASJUGADOR_H
#include "ficha.h"

class fichasJugador {
public:
    fichasJugador(int);
    virtual ~fichasJugador();
private:
    int cantidad;
    static const int TAMANO;
    ficha** vector;
};

#endif /* FICHASJUGADOR_H */

