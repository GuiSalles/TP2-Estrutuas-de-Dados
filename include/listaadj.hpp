#ifndef LISTAADJACENCIA_HPP_
#define LISTAADJACENCIA_HPP_
#include "no.hpp"

class ListaAdjacencia {
    public:
        ListaAdjacencia();
        void Insere(No* v);
        int tamanho();
        No* getPrimeiro();
    
    private:
        No* primeiro;
        No* ultimo;
};

#endif
