#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "functions/functions.c"

int main()
{
    int size = getSize();
    int array[size];
    int newarray[size];
    initArray(array,size);
    afficher(array,size);

    printf("after deleteDouble: \n");
    deleteDoubles(array,&size,newarray);
    afficher(newarray,size);
    
    printf("le max est: %d \n",max(array,size));
    printf("le min est: %d \n",min(array,size));
    return 0;
}
