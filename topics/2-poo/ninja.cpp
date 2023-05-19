//  exemplos que ilustram a aplicação dos quatro pilares da programação orientada a objetos (POO) -
    // encapsulamento, herança, polimorfismo e abstração - no contexto do mundo de Naruto em C++:

#ifndef NINJA_H
#define NINJA_H

#include <string>
using namespace std;

class Ninja {

    private: string nome;
    private string aldeia;
    int nivel;

    public: Ninja(string nome, string aldeia, int nivel) {
        this->nome = nome;
        this->aldeia = aldeia;
        this->nivel = nivel;
    }

    void treinar() {
        nivel++;
        cout << nome << " treinou e agora está no nivel " << nivel << endl;
    }

    void exibirStatus() {
        cout << "Nome: " << nome << endl;
        cout << "Aldeia: " << aldeia << endl;
        cout << "Nivel: " << nivel << endl;
    }
}