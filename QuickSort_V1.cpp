#include <iostream>
using namespace std;

void Imprime(int* vetor, int tam){
        cout << "| ";
    for(int i=0;i<tam;i++){
        cout<<vetor[i]<<" | ";
    }
    cout<<"\n";
}


void Quick(int* vetor, int tam,int inicio, int fim){
    int aux;
    int esq,dir,meio,pivor;
    esq=inicio;
    dir=fim;
    meio = (int) (esq+dir)/2;
    pivor=vetor[meio];
    while(dir>esq){
        while(vetor[esq]<pivor){
            esq=esq+1;
        }
        while(vetor[dir]>pivor){
            dir=dir-1;
        }    
        if(esq<=dir){
           aux=vetor[esq];
           vetor[esq]=vetor[dir];
           vetor[dir]=aux;
           
           esq=esq+1;
           dir=dir-1;
            Imprime(vetor,tam);
        }
    }
    if(inicio<dir){
       Quick(vetor,tam,inicio,dir);
    }
    if(esq<fim){
       Quick(vetor,tam,esq,fim);
    }
}

int main(){
    int i;
    int tam;
    cin >>tam;
    int vetor[tam];
    int inicio=0,fim=tam;
    for(i=0;i<tam;i++){
        cin>>vetor[i];
    }
    Imprime(vetor,tam);
    Quick(vetor,tam,inicio,fim);
    //Imprime(vetor,tam);
    
    return 0;
    
}
