#include <iostream>
#include <new>
using namespace std;

void Imprime(int* vetor, int tam){
    for(int i=0;i<tam;i++){
        cout<<"posição: "<<i<<" vetor: "<<vetor[i]<<"\n";
    }
}
int main(){
    
    int vetor[3];
    int i;
    for(i=0;i<3;i++){
        cin>>vetor[i];
    }
    Imprime(vetor,3);
    int *v = new int[5];
    for(i=0;i<5;i++){
        cin>>v[i];
    }
    Imprime(v,5);
}
