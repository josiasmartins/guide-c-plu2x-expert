// Herança:
class NinjaClasseBaixa: public Ninja {

    public:
        NinjaClasseBaixa(string nome, string aldeia, int nivel) : Ninja(nome, aldeia, nivel) {}

        void aprenderHabilidades() {
            cout << "Apredendo habilidades básica de um ninja de classe baixa." << endl;
        }

}