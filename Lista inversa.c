#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Struct Node
typedef struct Nodo{
    int valor;
    struct Nodo* sig;
}Nodo;
Nodo* L = NULL;
Nodo* createNodo(){
    Nodo* n = (Nodo*)malloc(sizeof(Nodo));
    return n;
}
Nodo* createList(){
    return NULL;
}
int generateRamdomNumber(){
    return rand()%1000;
}

void insert(Nodo* n){
    n->sig = L;
    L=n;
}
void llenar(int tam){
    Nodo* nuevo = NULL;
    int arr[tam];
    for(int i = 0; i <= tam; i++){
        arr[i] = generateRamdomNumber();
        printf("%d\n",arr[i]);
        Nodo* nuevo = createNodo();
        nuevo->valor = arr[i];
        nuevo->sig=NULL;
        insert(nuevo);
    }
}
void show(){
    Nodo* otroL = L;
    printf("LISTA INVERTIDA: \n");
    while(otroL!=NULL){
        printf("%d\n",otroL->valor);
        otroL = otroL->sig;
    }
}

int main(){
    time_t t;
    srand((unsigned) time(&t));
    L= createList();
    llenar(7);
    show();
    return 0;
}
