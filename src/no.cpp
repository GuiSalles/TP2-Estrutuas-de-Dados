#include "no.hpp"

No::No() {
    chave = 0; 
    cor = 0; 
    prox = nullptr;
}

void No::setCor(int novaCor) {
    cor = novaCor;
}

int No::getCor(){
    return cor;
}