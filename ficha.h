#ifndef FICHA_H
#define FICHA_H

class ficha {
public:
    ficha(char,int,int,int);
    
    virtual ~ficha();
private:
    char letra;
    int numero;
    int total;
    int disponibles;
};

#endif /* FICHA_H */

