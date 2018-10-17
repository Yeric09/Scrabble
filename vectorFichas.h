#ifndef VECTORFICHAS_H
#define VECTORFICHAS_H
#include "ficha.h"

class vectorFichas {
public:
    vectorFichas(int);
    virtual ~vectorFichas();
private:
    int cantidad;
    static const int TAMANO;
    ficha** vector;
};

#endif /* VECTORFICHAS_H */

