/**

    Abstração: É a capacidade de representar entidades do mundo real como objetos no código, com características e comportamentos específicos. No exemplo, a classe abstrata Jutsu representa um tipo genérico de técnica, enquanto as classes Rasengan e Chidori são classes concretas que representam jutsus específicos.

    Encapsulamento: É a capacidade de ocultar os detalhes internos de um objeto e fornecer apenas uma interface para interagir com ele. Os membros privados da classe Ninja são encapsulados, sendo acessíveis apenas através dos métodos públicos treinar e exibirStatus.

    Herança: É a capacidade de criar novas classes baseadas em classes existentes, aproveitando os atributos e comportamentos da classe base. As classes NinjaClasseBaixa e Jonin herdam da classe Ninja, aproveitando seus membros e métodos.

    Polimorfismo: É a capacidade de usar objetos de classes diferentes por meio de uma interface comum, permitindo que métodos de mesma assinatura se comportem de maneiras diferentes nas classes derivadas. Os métodos exibirStatus das classes Ninja e Jonin são exemplos de polimorfismo, onde o método é substituído na classe derivada para fornecer um comportamento específic

*/

#include <iostream>
using namespace std;

class Ninja {
private:
    string nome;
    string aldeia;
    int nivel;

public:
    // Construtor da classe Ninja
    Ninja(string nome, string aldeia, int nivel) {
        this->nome = nome;
        this->aldeia = aldeia;
        this->nivel = nivel;
    }

    // Método de treinamento do ninja
    void treinar() {
        nivel++;
        cout << nome << " treinou e agora está no nível " << nivel << endl;
    }

    // Método para exibir o status do ninja
    void exibirStatus() {
        cout << "Nome: " << nome << endl;
        cout << "Aldeia: " << aldeia << endl;
        cout << "Nível: " << nivel << endl;
    }
};

// Herança: classe NinjaClasseBaixa herda da classe Ninja
class NinjaClasseBaixa : public Ninja {
public:
    // Construtor da classe NinjaClasseBaixa
    NinjaClasseBaixa(string nome, string aldeia, int nivel) : Ninja(nome, aldeia, nivel) {}

    // Método específico para ninjas de classe baixa
    void aprenderHabilidade() {
        cout << "Aprendendo habilidades básicas de um ninja de classe baixa." << endl;
    }
};

// Herança: classe Jonin herda da classe Ninja
class Jonin : public Ninja {
public:
    // Construtor da classe Jonin
    Jonin(string nome, string aldeia, int nivel) : Ninja(nome, aldeia, nivel) {}

    // Polimorfismo: substituição do método exibirStatus da classe base
    void exibirStatus() {
        cout << "***** Status do Jonin *****" << endl;
        Ninja::exibirStatus();
        cout << "Cargo: Jonin" << endl;
    }

    // Encapsulamento: método específico para Jonins
    void usarJutsu() {
        cout << "Usando jutsu poderoso como um Jonin." << endl;
    }
};

// Abstração: classe abstrata Jutsu
class Jutsu {
public:
    // Método virtual puro a ser implementado pelas classes derivadas
    virtual void usar() = 0;
};

// Polimorfismo: classe concreta que herda da classe abstrata Jutsu
class Rasengan : public Jutsu {
public:
    // Implementação do método usar da classe Jutsu
    void usar() override {
        cout << "Executando o Jutsu: Rasengan!" << endl;
    }
};

// Polimorfismo: classe concreta que herda da classe abstrata Jutsu
class Chidori : public Jutsu {
public:
    // Implementação do método usar da classe Jutsu
    void usar() override {
        cout << "Executando o Jutsu: Chidori!" << endl;
    }
};

int main() {
    // Criação de objetos e uso de métodos

    // Criação de um objeto da classe NinjaClasseBaixa
    NinjaClasseBaixa naruto("Naruto Uzumaki", "Konoha", 1);

    // Chama o método treinar da classe Ninja
    naruto.exibirStatus();
    // Chama o método exibirStatus da classe Ninja
    naruto.exibirStatus();

    // Chama o método treinar da classe Ninja
    naruto.treinar();

    // Chama o método aprenderHabilidade da classe NinjaClasseBaixa
    naruto.aprenderHabilidade();

    // Criação de um objeto da classe Jonin
    Jonin kakashi("Kakashi Hatake", "Konoha", 30);

    // Polimorfismo: chama o método exibirStatus sobrescrito na classe Jonin
    kakashi.exibirStatus();

    // Chama o método usarJutsu da classe Jonin
    kakashi.usarJutsu();

    // Criação de objetos das classes derivadas de Jutsu
    Jutsu* jutsu1 = new Rasengan();
    Jutsu* jutsu2 = new Chidori();

    // Polimorfismo: chama o método usar da classe Rasengan
    jutsu1->usar();

    // Polimorfismo: chama o método usar da classe Chidori
    jutsu2->usar();

    // Libera a memória alocada pelos objetos
    delete jutsu1;
    delete jutsu2;

    system("pause"); // Pausa o programa antes de finalizar

    return 0;
}
