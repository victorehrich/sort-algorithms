#include <iostream>
#include <new>

using namespace std;

void Imprime(int* vetor, int tam){
        cout << "| ";
    for(int i=0;i<tam;i++){
        cout<<vetor[i]<<" | ";
    }
}
int Gera_pilha(int* vetor,int tam){

    for(int i=0;i<tam;i++){
        vetor[i]=0;
    }
    Imprime(vetor,tam);

}
int Empilhar(int* vetor,int tam,int *topo){ //push
    do{
        if(*topo == tam -1){
            cout <<"\nA pilha esta cheia\n";
            break;
        }
        else{
            *topo = *topo + 1;
            cout << "\nDigite o valor a ser adicionado:\n";
            cin >>vetor[*topo];
        }
        Imprime(vetor,tam);
    }while(*topo != tam);

}

int Desempilhar(int* vetor,int tam,int *topo){ //pop
    if(*topo != -1){
        vetor[*topo]=0;
        *topo = *topo - 1;
    }
    else{
        cout<<"\nA pilha esta vazia\n";
    }
    Imprime(vetor,tam);


}
int main(){
    int topo = -1;
    cout << "Digite o tamanho da pilha:\n";
    int tam;
    cin >> tam;
    int pilha[tam];
    Gera_pilha(pilha,tam);
    Empilhar(pilha,tam,&topo);
    Desempilhar(pilha,tam,&topo);


    return 0;
}
