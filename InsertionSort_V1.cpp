#include <iostream>
using namespace std;

void Imprime(int* vetor, int tam){
        cout << "| ";
    for(int i=0;i<tam;i++){
        cout<<vetor[i]<<" | ";
    }
    cout<<"\n";
}

void Insercao(int* vetor, int tam){
    int i,j,atual;
    for(i=1;i<tam;i++){
        //elemento atual em analise
        atual = vetor[i];
        //posição anterior ao analizado
        j=i-1;
        while(j>=0 && atual < vetor[j]){
            vetor[j+1]=vetor[j];
            j=j-1;
        }
        vetor[j+1] = atual;
        Imprime(vetor,tam);
        
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
    Insercao(vetor,tam);
    //Imprime(vetor,tam);
    
    return 0;
    
}
