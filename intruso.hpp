#ifndef INTRUSO_HPP
#define INTRUSO_HPP


#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;


class Intruso {
    private:

        
        vector<vector<int>> _senha;
        vector<vector<int>> _opcao;
        

        int n_entradas = 0;
        int interacao = 0;
        
        string numeros[2];

        char a = 'A';
        char b = 'B';
        char c = 'C';
        char d = 'D';
        char e = 'E';

        std::string senha_codificada[6];

    public:
        void set_senha_vazada(string vazou);
        string crack_senha();
       
        int getNentradas();
        void setNentradas(int recebe);
};


#endif