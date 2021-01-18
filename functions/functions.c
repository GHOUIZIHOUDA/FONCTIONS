#include <stdio.h>
#include <stdlib.h>

int getSize(){
 int a;
    printf("Entrez la taille du tableau:\n");
    scanf("%d",&a);
    return a;
}

int getValue(){
 int a;
    printf("Entrez la valeur du range:\n");
    scanf("%d",&a);
    return a;
}

// get Random int
int getRandomInt(int min,int max){
          return rand() %(max-min)+min;
}

void initArray(int tab[],int size){
    int start = getValue();
    int end = getValue();
    int i = 0;
    for(i=0;i<size;i++){
        tab[i] = getRandomInt(start,end);
    }
}
void afficher(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("tableau[%d] = %d:\n",i,arr[i]);
    }
}
