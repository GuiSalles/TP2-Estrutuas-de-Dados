#ifndef GRAFO_HPP_
#define GRAFO_HPP_
#include "listaadj.hpp"

class Grafo {
public:
    Grafo(int numVertices);
    ~Grafo();
    void adicionarAresta(int origem, No* destino);
    ListaAdjacencia obterListaAdj(int vertice);
    void imprimirGrafo();
    bool ehGuloso();
private:
    int numVertices;
    ListaAdjacencia* listaAdjacencias;
};

#endif
