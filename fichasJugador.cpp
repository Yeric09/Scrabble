/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   fichasJugador.cpp
 * Author: Lenovo
 * 
 * Created on 16 de octubre de 2018, 05:16 PM
 */

#include "fichasJugador.h"
#include "ficha.h"

fichasJugador::fichasJugador(int can):cantidad(can),vector(new ficha*[TAMANO]) {
}


fichasJugador::~fichasJugador() {
}

const int fichasJugador::TAMANO=7;