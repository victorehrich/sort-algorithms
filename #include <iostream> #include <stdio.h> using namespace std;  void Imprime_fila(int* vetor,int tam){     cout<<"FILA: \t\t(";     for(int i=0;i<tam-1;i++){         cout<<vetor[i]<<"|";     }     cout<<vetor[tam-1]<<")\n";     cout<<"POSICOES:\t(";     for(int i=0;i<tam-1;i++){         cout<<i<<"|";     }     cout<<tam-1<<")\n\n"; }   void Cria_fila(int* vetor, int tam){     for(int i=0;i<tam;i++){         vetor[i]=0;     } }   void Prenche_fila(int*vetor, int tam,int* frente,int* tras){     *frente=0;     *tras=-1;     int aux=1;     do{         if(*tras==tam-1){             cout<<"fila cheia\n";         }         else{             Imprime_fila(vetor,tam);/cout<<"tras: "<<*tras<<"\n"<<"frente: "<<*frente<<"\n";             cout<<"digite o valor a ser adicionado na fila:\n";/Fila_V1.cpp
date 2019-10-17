#include <iostream>
#include <stdio.h>
using namespace std;

void Imprime_fila(int* vetor,int tam){
    cout<<"FILA: \t\t(";
    for(int i=0;i<tam-1;i++){
        cout<<vetor[i]<<"|";
    }
    cout<<vetor[tam-1]<<")\n";
    cout<<"POSICOES:\t(";
    for(int i=0;i<tam-1;i++){
        cout<<i<<"|";
    }
    cout<<tam-1<<")\n\n";
}


void Cria_fila(int* vetor, int tam){
    for(int i=0;i<tam;i++){
        vetor[i]=0;
    }
}


void Prenche_fila(int*vetor, int tam,int* frente,int* tras){
    *frente=0;
    *tras=-1;
    int aux=1;
    do{
        if(*tras==tam-1){
            cout<<"fila cheia\n";
        }
        else{
            Imprime_fila(vetor,tam);
            //cout<<"tras: "<<*tras<<"\n"<<"frente: "<<*frente<<"\n";
            cout<<"digite o valor a ser adicionado na fila:\n";
            //por algum motivo, tras++ e frente++ nao funcionam aqui
            *tras=*tras+1;
            cin>>vetor[*tras];
            do{
            cout<<"deseja continuar ?\n1 - sim\n2 - nao\n";
            cin>>aux;
            }while(aux!=1 && aux!=2);
        }
    }while(aux==1);
    Imprime_fila(vetor,tam);
}



void Tira_fila(int* vetor,int tam,int* tras, int* frente){
    int aux = 1;
    do{
        if(*frente>*tras){
            cout<<"fila vazia\n";
        }
        else{
            vetor[*frente]=0;
            *frente= *frente+1;
            Imprime_fila(vetor,tam);
        }
        do{
            cout<<"deseja continuar ?\n1 - sim\n2 - nao\n";
            cin>>aux;
        }while(aux!=1 && aux!=2);
    }while(aux==1);
}

int main(){
    int tam=10;
    int frente,tras;
    int vetor[tam];
    Cria_fila(vetor,tam);
    Prenche_fila(vetor,tam,&frente,&tras);
    Tira_fila(vetor,tam, &tras,&frente);
    return 0;
}
