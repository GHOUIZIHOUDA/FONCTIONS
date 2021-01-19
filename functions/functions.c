#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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
void afficher(int array[],int size){
    for(int i=0;i<size;i++){
        printf("tableau[%d] = %d:\n",i,array[i]);
    }
}

//supprimer les doublons d'un tableau
bool checkInArray(int array[],int size,int n){
    for(int i=0;i<size;i++){
        if(n == array[i]){
            return true;
        }
    }
    return false;
}

void deleteDoubles(int array[],int *size,int newArray[]){
    int index=0;
    for (int i = 0; i < *size; i++)
    {
        if(checkInArray(newArray,*size,array[i]) == false){
            printf(" %d  %d \n",array[i],index);
            newArray[index] = array[i];
            index++;
        }
    }
    *size = index ;
}



//element le plus grand
int max(int ar[],int size){
    int max = ar[0];
    for(int i=0;i<size;i++){
        if(ar[i] > max){
            max = ar[i];
        }
    }
    return max;
}
//element le plus min
int min(int ar[],int size){
    int min;
    for(int i=0;i<size;i++){
        if(ar[i] < min){
            min = ar[i];
        }
    }
    return min;
}
