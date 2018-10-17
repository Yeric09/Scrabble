#include "vectorFichas.h"

vectorFichas::vectorFichas(int can):cantidad(can), vector(new ficha*[TAMANO]){
}


vectorFichas::~vectorFichas() {
}

const int vectorFichas::TAMANO=100;