#include <iostream>
#include <new>

using namespace std;

int Gera_vetor(int* vetor, int tam){
    int i;
    for(i=0;i<tam;i++){
        cin >> vetor[i];
    }
    cout << "| ";
    for(i=0;i<tam;i++){
        cout << vetor[i]<< " | ";
    }
    cout << "\n";
}
int organiza_vetor(int* vetor,int tam){

    int organizador;
    //Gera_vetor(int* vetor,int tam);
    for(int i=0;i<tam;i++){
        for(int j=0;j<tam;j++){
            if(vetor[j]>vetor[i]){
                organizador=vetor[j];
                vetor[j]=vetor[i];
                vetor[i]=organizador;
            }
        }
    }
    cout << "| ";
    for(int k=0;k<tam;k++){
        cout << vetor[k]<< " | ";
    }
    cout << "\n";
}

int Busca_binaria(int* vetor,int tam, int buscado){
    int inicio=vetor[0];
    int meio;
    int fim=vetor[tam-1];

    for(int i=0;i<tam;i++){
        meio=(inicio+fim)/2;
        if(buscado==meio){
            return meio;
        }
        else if(buscado<meio){
            fim = meio - 1;
        }
        else if(buscado>meio){
            inicio = meio +1;
        }
    }
    return -1;
}

int main(){
    int tam;
    cout << "digite o tamanho do vetor:\n";
    cin >>tam;
    int vetor[tam];
    cout << "digite os numeros do seu vetor:\n";
    Gera_vetor(vetor,tam);
    cout << "vetor organizado:\n";
    organiza_vetor(vetor,tam);
    cout <<"digite o valor a ser buscado:\n";
    int buscado;
    cin >>buscado;
    if(Busca_binaria(vetor,tam,buscado)!=-1){
        cout<<"valor encontrado na posicao:"<<Busca_binaria+1;
    }
    else{
        cout<<"nao esta no vetor";
    }
    return 0;

}
