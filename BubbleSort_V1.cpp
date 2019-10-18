#include <iostream>
using namespace std;

int main(){
    int tam;
    cout<<"digite o tamanho do vetor\n";
    cin >> tam;
    int i,j;
    int aux;
    int vetor[i];
    for(i=0;i<tam;i++){
        cin>>vetor[i];
    }
    for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            if(vetor[j]>vetor[i]){
                aux=vetor[j];
                vetor[j]=vetor[i];
                vetor[i]=aux;
            }
        }
    }
    for(i=0;i<tam;i++){
        cout<<vetor[i]<<"/";
    }
    return 0;
}
