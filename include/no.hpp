#ifndef NO_HPP_
#define NO_HPP_
#include <iostream>

class No{
    public:
        int chave;
        int cor;
        No* prox;
        No();
        void setCor(int cor);
        int getCor();

};

#endif