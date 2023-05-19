// Polimorfismo:
class Join: public Ninja {
    public:
        Join(string nome, string aldeia, int nivel) : Ninja(nome, aldeia, nivel) {}

        void exibirStatus() {
            cout << "**** Status de Jonin" << endl;
            Ninja::exibirStatus();
            cout << "Cargo: Join" << endl;
        }

        void userJutsu() {
            cout << "Usando jutsu poderoso como um Jonin." << endl;
        }
}