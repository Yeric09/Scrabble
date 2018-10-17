#ifndef JUGADOR_H
#define JUGADOR_H

#include "fichasJugador.h"

#include <sstream>
using std::string;

class jugador {
public:
    jugador();
    virtual ~jugador();
private:
    string nombre;
    fichasJugador** fichas;
};

#endif /* JUGADOR_H */

