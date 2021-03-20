#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

void mostrar_pontuacao();
int recorde();
void update_pontuacao(string nome, int pontos);

int main(){
    
    char iniciar;
    string nome;
    cout << "Qual o seu nome? " << endl;
    cin >> nome;

    Home:
    system("clear");
    cout << "Seja bem vindo " << nome << "!" << endl;


    cout << endl;
    cout << endl;
    cout << "Aperte 1 para iniciar o jogo" << endl;
    cout << "Aperte 2 para ver as pontuações" << endl;
    cout << "Aperte X para sair" << endl;

    cin >> iniciar;
    
    if(iniciar == '2'){
        mostrar_pontuacao();
        goto Home;
    }

    else if(iniciar == '1'){
        srand(time(0));
        vector<int> verificaRepeticao(30, 0);

        string questao;
        string resposta;
        char respostaUsuario;


        int contador = 0;
        int pontuacao = 0;
        char tecla;

        while(contador<10){
            int contaLinhas = 0;
            int randLinha = rand()%10;
            if(verificaRepeticao[randLinha] == 0){
                verificaRepeticao[randLinha] = 1;

                ifstream file("Banco_Perguntas.txt");
                while(randLinha!= contaLinhas){
                    getline(file, questao);
                    getline(file, resposta);
                    contaLinhas++;
                }

                getline(file, questao);
                getline(file, resposta);

                system("clear");

                cout << "Questao numero: " << contador+1 << endl;
                cout << questao << endl;
                
                cin >> respostaUsuario;
                respostaUsuario = toupper(respostaUsuario);
                
                if(resposta[0] == respostaUsuario){
                    system("clear");
                    cout << "Voce acertou!!!" << endl;
                    cin.ignore();
                    pontuacao += 10;
                    cin.ignore();
                }

                else{
                    system("clear");
                    cout << "Questao numero: " << contador+1 << endl;
                    cout << questao << endl;
                    cin.ignore();
                    cout << "Resposta correta: " << resposta << endl;
                    cin.ignore();
                }

            contador++;    
            }
        }

        system("clear");
        cout << "Parabens, voce completou o quiz!" << endl;
        if(pontuacao >= recorde()){
            cout << "Uau, voce bateu o recorde anterior!!!" << endl;
            update_pontuacao(nome, pontuacao);
        }
        cout << "Sua pontuacao foi: " << pontuacao << endl;
        cout << "Pressione enter para sair" << endl;
        cout << "Para jogar novamente aperte 1, para sair, aperte qualquer tecla" << endl;
        cin >> iniciar;
        if(iniciar == '1'){
            goto Home;
        }
        else
            exit(1);
    }

    else
        exit(1);
    
    return 0;
}

void mostrar_pontuacao(){
    ifstream file("highest_c++_score.txt");
    string nome;
    int pontuacao;

    file >> nome >> pontuacao;
    system("clear");

    cout << nome << " tem a maior pontuacao com " << pontuacao << endl;
    cin.ignore();
    cout << "Pressione enter para sair" << endl;
    exit(1);
}

int recorde(){
    int pontuacao;
    string nome;
    ifstream file("highest_c++_score.txt");
    file >> nome >> pontuacao;
    return pontuacao;
}

void update_pontuacao(string nome, int pontuacao){
    ofstream file("highest_c++_score.txt");
    file << nome << " " << pontuacao;
}