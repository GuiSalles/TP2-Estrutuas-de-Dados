#include "grafo.hpp"
#include <algorithm>

Grafo::Grafo(int numVertices) {
    this->numVertices = numVertices;
    this->listaAdjacencias = new ListaAdjacencia[numVertices];
}

Grafo::~Grafo() {
    delete[] listaAdjacencias;
}

void Grafo::adicionarAresta(int origem, No* destino) {
    if (origem >= 0 && origem < numVertices) {
        listaAdjacencias[origem].Insere(destino);
    } else {
        std::cerr << "Erro: Vertice de origem invalido." << std::endl;
    }
}

ListaAdjacencia Grafo::obterListaAdj(int vertice) {
    if (vertice >= 0 && vertice < numVertices) {
        return listaAdjacencias[vertice];
    } else {
        std::cerr << "Erro: Vertice invalido." << std::endl;
        return ListaAdjacencia();
    }
}

void Grafo::imprimirGrafo() {
    for (int i = 0; i < numVertices; ++i) {
        ListaAdjacencia lista = listaAdjacencias[i];
        No* atual = lista.getPrimeiro();

        std::cout << "Vertex " << i << " -> ";
        while (atual) {
            std::cout << atual->chave << " ";
            atual = atual->prox;
        }
        std::cout << std::endl;
    }
}

