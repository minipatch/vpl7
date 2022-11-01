#include "intruso.hpp"

int Intruso::getNentradas(){
    return n_entradas;
    
}

void Intruso::setNentradas(int recebe){
    n_entradas=recebe;
}

void Intruso::set_senha_vazada(string vazou){
    vector<int> _temporario_opcao;
    vector<int> _temporario_senha;
    

    for(int i= 0;i<20;i+=2){
        _temporario_opcao.push_back(vazou[i] - 48);
    }

    for(int j= 20;j<52;j+=2){
        int item = 0;
        if (vazou[j] ==  'A') {
            item = 0;
        } else if (vazou[j] ==  'B') {
            item = 2;
        } else if(vazou[j] == 'C'){
            item = 4;
        } else if(vazou[j]=='D'){
            item = 6;
        } else if(vazou[j]== 'E'){
            item = 8;
        }
        _temporario_senha.push_back(item);
    }

    _opcao.push_back(_temporario_opcao);
    _senha.push_back(_temporario_senha);
}


string Intruso::crack_senha(){
    string resultado= "";



    for(int i=0;i<6;i++){
        for(int k =0;k<2;k++){
            int num_teste = _opcao[0][_senha[0][i] +k];
            bool verificada = true; 

            for(int j =1;j<n_entradas;j++){
                verificada = verificada && (
                    _opcao[j][_senha[j][i]]  == num_teste ||
                    _opcao[j][_senha[j][i] + 1] == num_teste
                );
            }
            if (verificada) {
                resultado = resultado + to_string(num_teste) += " ";
                break;
            }
        }
    }
    return resultado;

}