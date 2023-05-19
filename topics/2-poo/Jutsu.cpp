class Jutsu {

    public: virtual void usar() = 0;

};

class Rasengan : public Jutsu {

    public: void usar() override {
        cout << "Executando o Jutsu: Rasenga!" << endl;
    }

};

class Chidori : public Jutsu {

    public: void usar() override {
        cout << "Executando o Jutsu: Chidori" << endl;
    }

}