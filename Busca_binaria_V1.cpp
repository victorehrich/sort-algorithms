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
int Organiza_vetor(int* vetor,int tam){

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
    int inicio=0;
    int meio;
    int fim=tam-1;

    while(inicio<=fim){
        meio=(inicio+fim)/2;
        if(buscado==vetor[meio]){
            return meio;
        }
        else if(buscado<vetor[meio]){
            fim = meio - 1;
        }
        else if(buscado>vetor[meio]){
            inicio = meio + 1;
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
    Organiza_vetor(vetor,tam);
    cout <<"digite o valor a ser buscado:\n";
    int buscado;
    cin >>buscado;
    int z;
    z = Busca_binaria(vetor,tam,buscado);
    if(Busca_binaria(vetor,tam,buscado)!=-1){
        cout<<"valor encontrado na posicao:"<<z+1;
    }
    else{
        cout<<"nao esta no vetor";
    }

    return 0;

}
