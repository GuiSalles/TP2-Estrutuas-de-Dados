#include <iostream>
#include "grafo.hpp"

int main() {
    int numVertices;
    std::cin >> numVertices;

    Grafo grafo(numVertices);

    for (int i = 0; i < numVertices; ++i) {
        int numVizinhos;
        std::cin >> numVizinhos;

        for (int j = 0; j < numVizinhos; ++j) {
            int vizinho;
            std::cin >> vizinho;

            No* novoVizinho = new No();
            novoVizinho->chave = vizinho;
            grafo.adicionarAresta(i, novoVizinho);
        }
    }

    for (int i = 0; i < numVertices; ++i) {
        int cor;
        std::cin >> cor;

        ListaAdjacencia lista = grafo.obterListaAdj(i);
        No* primeiro = lista.getPrimeiro();

        if (primeiro != nullptr) {
            primeiro->setCor(cor);
        }
    }

    grafo.imprimirGrafo();

    return 0;
}
