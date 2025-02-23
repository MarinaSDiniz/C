#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>
#include <locale>

using namespace std;

//Structs
struct Passageiro {
    string codigoPassageiro;
    string nomePassageiro;
    string endereco;
    string telefone;
    bool fidelidade;
    int pontos;
};

struct Tripulacao {
    string codigoTripulacao;
    string nomeTripulacao;
    string telefoneTripulacao;
    string cargo;
};

struct Voo {
    string codigoVoo;
    string origem;
    string destino;
    string data;
    string hora;
    string codigoAviao;
    string codigoPiloto;
    string codigoCoPiloto;
    string codigoComissario;
    bool statusVoo;
    float tarifa;
};

struct Assento {
    int numAssento;
    string codigoVoo;
    bool statusAssento; // Se for verdadeiro = assento vago, se não = assento indisponível
};

//Funções 

//passageiros
void cadastrarPassageiro(vector<Passageiro>& passageiros) {
    Passageiro novoPassageiro;
    
    cout << "Código do Passageiro (digite para gerar automaticamente ou insira um código): ";
    cin >> novoPassageiro.codigoPassageiro;

    //Verificar se o código do passageiro já existe
    auto it = find_if(passageiros.begin(), passageiros.end(), [&](const Passageiro& p) {
        return p.codigoPassageiro == novoPassageiro.codigoPassageiro;
    });

    if (it != passageiros.end()) {
        cout << "\nCódigo de passageiro já existe!\n";
        return;
    }

    cout << "Nome do Passageiro: ";
    cin.ignore(); 
    getline(cin, novoPassageiro.nomePassageiro);
    cout << "Endereço: ";
    getline(cin, novoPassageiro.endereco);
    cout << "Telefone: ";
    getline(cin, novoPassageiro.telefone);
    cout << "Fidelidade (1 - Sim / 0 - Não): ";
    cin >> novoPassageiro.fidelidade;
    cout << "Pontos de Fidelidade: ";
    cin >> novoPassageiro.pontos;

    passageiros.push_back(novoPassageiro);
    cout << "\nPassageiro cadastrado com sucesso!\n";
}

//Tripulação
void cadastrarTripulacao(vector<Tripulacao>& tripulacoes) {
    Tripulacao novoMembro;
    
    cout << "Código da Tripulação (digite para gerar automaticamente ou insira um código): ";
    cin >> novoMembro.codigoTripulacao;

    //Verificar se o código da tripulação já existe
    auto it = find_if(tripulacoes.begin(), tripulacoes.end(), [&](const Tripulacao& t) {
        return t.codigoTripulacao == novoMembro.codigoTripulacao;
    });

    if (it != tripulacoes.end()) {
        cout << "\nCódigo de tripulante já existe!\n";
        return;
    }

    cout << "Nome do Tripulante: ";
    cin.ignore(); 
    getline(cin, novoMembro.nomeTripulacao);
    cout << "Telefone: ";
    getline(cin, novoMembro.telefoneTripulacao);
    cout << "Cargo (Piloto, CoPiloto, Comissário, etc.): ";
    getline(cin, novoMembro.cargo);

    tripulacoes.push_back(novoMembro);
    cout << "\nMembro da tripulação cadastrado com sucesso!\n";
}

//Voo
void cadastrarVoo(vector<Voo>& voos, vector<Tripulacao>& tripulacoes) {
    Voo novoVoo;
    
    cout << "Código do Voo: ";
    cin >> novoVoo.codigoVoo;
    cin.ignore();

    cout << "Data (formato: dd/mm/aaaa): ";
    getline(cin, novoVoo.data);
    cout << "Hora (formato: hh:mm): ";
    getline(cin, novoVoo.hora);
    cout << "Origem: ";
    getline(cin, novoVoo.origem);
    cout << "Destino: ";
    getline(cin, novoVoo.destino);  
    
    cout << "Tarifa: ";
    cin >> novoVoo.tarifa;
    cout << "Código do Avião: ";
    cin >> novoVoo.codigoAviao;
    cin.ignore();

    cout << "Código do Piloto: ";
    getline(cin, novoVoo.codigoPiloto);
    cout << "Código do CoPiloto: ";
    getline(cin, novoVoo.codigoCoPiloto);

    // Verificar se tem um Piloto e um CoPiloto na tripulação
    auto piloto = find_if(tripulacoes.begin(), tripulacoes.end(), [&](const Tripulacao& t) {
        return t.codigoTripulacao == novoVoo.codigoPiloto && t.cargo == "Piloto";
    });

    auto coPiloto = find_if(tripulacoes.begin(), tripulacoes.end(), [&](const Tripulacao& t) {
        return t.codigoTripulacao == novoVoo.codigoCoPiloto && t.cargo == "CoPiloto";
    });

    if (piloto != tripulacoes.end() && coPiloto != tripulacoes.end()) {
        novoVoo.statusVoo = true;  // Voo ativo
        voos.push_back(novoVoo);
        cout << "Voo cadastrado com sucesso!\n";
    } else {
        cout << "\nErro: Não foi possível cadastrar o voo sem Piloto e CoPiloto.\n";
    }
}

//Assento
void cadastrarAssento(vector<Assento>& assentos, const string& codigoVoo) {
    int numAssento;
    cout << "Número do Assento: ";
    cin >> numAssento;

    //Verificar se o assento já existe para o voo
    auto it = find_if(assentos.begin(), assentos.end(), [&](const Assento& a) {
        return a.numAssento == numAssento && a.codigoVoo == codigoVoo;
    });

    if (it != assentos.end()) {
        cout << "\nAssento já cadastrado para este voo!\n";
        return;
    }

    Assento novoAssento = {numAssento, codigoVoo, true};
    assentos.push_back(novoAssento);
    cout << "\nAssento cadastrado com sucesso!\n";
}

//Reserva
void reservarPassagem(vector<Voo>& voos, vector<Passageiro>& passageiros, vector<Assento>& assentos) {
    string codigoVoo, codigoPassageiro;
    int numAssento;
    
    cout << "Código do voo: ";
    cin >> codigoVoo;
    
    //Encontrar o voo
    auto itVoo = find_if(voos.begin(), voos.end(), [&](const Voo& voo) {
        return voo.codigoVoo == codigoVoo && voo.statusVoo == true;
    });

    if (itVoo == voos.end()) {
        cout << "\nVoo não encontrado ou voo não está ativo.\n";
        return;
    }

    //Verificar assento
    cout << "Número do assento: ";
    cin >> numAssento;
    
    auto itAssento = find_if(assentos.begin(), assentos.end(), [&](const Assento& a) {
        return a.numAssento == numAssento && a.codigoVoo == codigoVoo && a.statusAssento == true;
    });

    if (itAssento == assentos.end()) {
        cout << "\nAssento não disponível.\n";
        return;
    }

    cout << "Código do Passageiro: ";
    cin >> codigoPassageiro;
    
    auto itPassageiro = find_if(passageiros.begin(), passageiros.end(), [&](const Passageiro& p) {
        return p.codigoPassageiro == codigoPassageiro;
    });

    if (itPassageiro == passageiros.end()) {
        cout << "\nPassageiro não encontrado.\n";
        return;
    }

    //Fazer a reserva
    itAssento->statusAssento = false; 
    cout << "\nReserva realizada com sucesso!\n";
}

//Cancelar reserva
void cancelarReserva(vector<Assento>& assentos, vector<Passageiro>& passageiros, vector<Voo>& voos) {
    string codigoVoo;
    int numAssento;
    cout << "Código do voo: ";
    cin >> codigoVoo;
    cout << "Número do assento: ";
    cin >> numAssento;

    auto itAssento = find_if(assentos.begin(), assentos.end(), [&](const Assento& a) {
        return a.numAssento == numAssento && a.codigoVoo == codigoVoo;
    });

    if (itAssento == assentos.end() || itAssento->statusAssento == true) {
        cout << "Reserva não encontrada ou assento não ocupado.\n";
        return;
    }

    //Liberar o assento
    itAssento->statusAssento = true;
    cout << "Reserva cancelada com sucesso!\n";
}

//Pesquisa
void pesquisa(vector<Passageiro>& passageiros, vector<Tripulacao>& tripulacoes) {
    string termo;
    cout << "Digite o código ou nome para pesquisar: ";
    cin.ignore();
    getline(cin, termo);
    
    // Pesquisar Passageiros
    cout << "Passageiros encontrados:\n";
    for (auto& p : passageiros) {
        if (p.codigoPassageiro == termo || p.nomePassageiro == termo) {
            cout << "Código: " << p.codigoPassageiro << ", Nome: " << p.nomePassageiro << endl;
        }
    }

    // Pesquisar Tripulação
    cout << "Tripulação encontrada:\n";
    for (auto& t : tripulacoes) {
        if (t.codigoTripulacao == termo || t.nomeTripulacao == termo) {
            cout << "Código: " << t.codigoTripulacao << ", Nome: " << t.nomeTripulacao << endl;
        }
    }
}

//Fidelidade
void consultarFidelidade(vector<Passageiro>& passageiros) {
    string codigoPassageiro;
    cout << "Digite o código do passageiro: ";
    cin >> codigoPassageiro;

    auto itPassageiro = find_if(passageiros.begin(), passageiros.end(), [&](const Passageiro& p) {
        return p.codigoPassageiro == codigoPassageiro;
    });

    if (itPassageiro != passageiros.end()) {
        cout << "Passageiro: " << itPassageiro->nomePassageiro << ", Pontos de Fidelidade: " << itPassageiro->pontos << endl;
    } else {
        cout << "Passageiro não encontrado.\n";
    }
}


//Main com o Menu

int main() {
    vector<Passageiro> passageiros;
    vector<Tripulacao> tripulacoes;
    vector<Voo> voos;
    vector<Assento> assentos;
    
    setlocale(LC_ALL, "");
    
    #ifdef _WIN32
        system("chcp 65001 > nul");
    #endif

    int opcao;
    do {
        cout << "\n-*- Sistema de Reservas - Voo Seguro -*-\n";
        cout << "\n\t1. Cadastrar Passageiro\n";
        cout << "\t2. Cadastrar Tripulação\n";
        cout << "\t3. Cadastrar Voo\n";
        cout << "\t4. Cadastrar Assento\n";
        cout << "\t5. Reservar Passagem\n";
        cout << "\t6. Cancelar Reserva\n";
        cout << "\t7. Pesquisa\n";
        cout << "\t8. Consultar Fidelidade\n";
        cout << "\t9. Sair\n";
        cout << "\n\tEscolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cadastrarPassageiro(passageiros);
                break;
            case 2:
                cadastrarTripulacao(tripulacoes);
                break;
            case 3:
                cadastrarVoo(voos, tripulacoes);
                break;
            case 4: {
                string codigoVoo;
                cout << "Código do voo para cadastrar assentos: ";
                cin >> codigoVoo;
                cadastrarAssento(assentos, codigoVoo);
                break;
            }
            case 5:
                reservarPassagem(voos, passageiros, assentos);
                break;
            case 6:
                cancelarReserva(assentos, passageiros, voos);
                break;
            case 7:
                pesquisa(passageiros, tripulacoes);
                break;
            case 8:
                consultarFidelidade(passageiros);
                break;
            case 9:
                cout << "Saindo do sistema.\n";
                break;
            default:
                cout << "Opção inválida.\n";
        }
    } while (opcao != 9);

    return 0;
}