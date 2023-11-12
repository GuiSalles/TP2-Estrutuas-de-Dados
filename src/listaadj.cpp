#include "listaadj.hpp"

ListaAdjacencia::ListaAdjacencia(){
    primeiro = nullptr;
    ultimo = nullptr;
}

void ListaAdjacencia::Insere(No* v){
    if(primeiro == nullptr){
        primeiro = v;
        ultimo = primeiro;
        v->prox = nullptr;
    }
    else{
        ultimo->prox = v;
        ultimo = v;
        v->prox = nullptr;
    }
}

int ListaAdjacencia::tamanho(){
    int count = 0;
    No* atual = primeiro;
    
    while (atual) {
        count++;
        atual = atual->prox;
    }
    
    return count;
}

No* ListaAdjacencia::getPrimeiro(){
    return primeiro;
}