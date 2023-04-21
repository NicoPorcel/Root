#ifndef _COMPARADOR_H_INCLUDED
#define _COMPARADOR_H_INCLUDED

#include <iostream>

template < typename Tipo >
class Comparador {

public:
    Tipo esMayor(Tipo n1, Tipo n2);

};

template < typename Tipo >
Tipo Comparador< Tipo >::esMayor(Tipo n1, Tipo n2) {
    if(n1 < n2) return n2;
    return n1;
}

#endif