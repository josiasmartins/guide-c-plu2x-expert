#include <iostream>
using namespace std;

class Ninja {
private:
    string nome;
    string aldeia;
    int nivel;

public:
    Ninja(string nome, string aldeia, int nivel) {
        this->nome = nome;
        this->aldeia = aldeia;
        this->nivel = nivel;
    }

    void treinar() {
        nivel++;
        cout << nome << " treinou e agora está no nível " << nivel << endl;
    }

    void exibirStatus() {
        cout << "Nome: " << nome << endl;
        cout << "Aldeia: " << aldeia << endl;
        cout << "Nível: " << nivel << endl;
    }
};

class NinjaClasseBaixa : public Ninja {
public:
    NinjaClasseBaixa(string nome, string aldeia, int nivel) : Ninja(nome, aldeia, nivel) {}

    void aprenderHabilidade() {
        cout << "Aprendendo habilidades básicas de um ninja de classe baixa." << endl;
    }
};

class Jonin : public Ninja {
public:
    Jonin(string nome, string aldeia, int nivel) : Ninja(nome, aldeia, nivel) {}

    void exibirStatus() {
        cout << "***** Status do Jonin *****" << endl;
        Ninja::exibirStatus();
        cout << "Cargo: Jonin" << endl;
    }

    void usarJutsu() {
        cout << "Usando jutsu poderoso como um Jonin." << endl;
    }
};

class Jutsu {
public:
    virtual void usar() = 0;
};

class Rasengan : public Jutsu {
public:
    void usar() override {
        cout << "Executando o Jutsu: Rasengan!" << endl;
    }
};

class Chidori : public Jutsu {
public:
    void usar() override {
        cout << "Executando o Jutsu: Chidori!" << endl;
    }
};

int main() {
    NinjaClasseBaixa naruto("Naruto Uzumaki", "Konoha", 1);
    naruto.exibirStatus();
    naruto.treinar();
    naruto.aprenderHabilidade();

    Jonin kakashi("Kakashi Hatake", "Konoha", 30);
    kakashi.exibirStatus();
    kakashi.usarJutsu();

    Jutsu* jutsu1 = new Rasengan();
    Jutsu* jutsu2 = new Chidori();

    jutsu1->usar();
    jutsu2->usar();

    delete jutsu1;
    delete jutsu2;

    system("pause"); // Pausa o programa antes de finalizar

    return 0;
}
