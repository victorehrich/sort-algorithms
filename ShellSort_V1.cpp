#include <iostream>
using namespace std;
void Imprime(int* vetor, int tam){
        cout << "| ";
    for(int i=0;i<tam;i++){
        cout<<vetor[i]<<" | ";
    }
    cout<<"\n";
}
void Shell(int* vetor, int tam){
    int h=1;
    int i,j,atual;
    
    while(h<tam){
        h = 3*h +1;
    }
    while(h>1){
        h = h/3;
        for(i=h;i<tam;i++){
            atual = vetor[i];
            j=i-h;
            while(j>=0 && atual <vetor[j]){
                vetor[j+h] = vetor[j];
                j=j-h;
            }
            vetor[j+h]=atual;
            
             Imprime(vetor,tam);
        }
    }
}

int main(){
  int tam = 10;
  int vetor[tam]={9,8,7,6,5,4,3,2,1};
  Imprime(vetor,tam);
  Shell(vetor,tam);
  //Imprime(vetor,tam);
  return 0;
}
