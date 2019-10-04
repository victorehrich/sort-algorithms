#include <iostream>
#include <new>

using namespace std;

//Função utilizada para gerar o vetor
int Gera_vetor(int* vetor, int tam){
    int i;
    for(i=0;i<tam;i++){
        cin >> vetor[i];
    }
}
//função que vai buscar o vetor
int Busca(int vetor[],int tam, int buscado){

    int i;
    int j;
    int aux=0,aux2=0;
    for(i=0;i<tam;i++){
        if(buscado == vetor[i]){
            aux=1;
            aux2=i;
        }
    }
    if(aux==1){
        cout << "achei na posicao:" << aux2 + 1;
        return buscado;
    }
    else{
        cout << "nada";
        return -1;
    }
}
//função principal, para passar os parametros
int main(){

    int tam;
    cin >>tam;
    int buscado;
    cin >>buscado;
    int vetor[tam];
    Gera_vetor(vetor,tam);
    Busca(vetor,tam,buscado);

    return 0;
}
