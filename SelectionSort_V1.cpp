#include <iostream>
using namespace std;

void Imprime(int* vetor, int tam){
        cout << "| ";
    for(int i=0;i<tam;i++){
        cout<<vetor[i]<<" | ";
    }
    cout<<"\n";
}

void Selection(int* vetor, int tam){
    int i,j;
    int menor,aux;
    for(i=0;i<tam;i++){
        menor = i;
        for(j=i+1;j<tam;j++){
            if(vetor[j]<vetor[menor]){
                menor = j;
            }
        }
        if(menor != i){
            aux = vetor[i];
            vetor[i] = vetor[menor];
            vetor[menor] = aux;
        }
    }
}

int main(){
    int i;
    int tam;
    cin >>tam;
    int vetor[tam];
    for(i=0;i<tam;i++){
        cin>>vetor[i];
    }
    Imprime(vetor,tam);
    Selection(vetor,tam);
    Imprime(vetor,tam);
    
    return 0;
    
}
