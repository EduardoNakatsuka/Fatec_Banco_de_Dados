#include<stdio.h>
#include<stdlib.h>

void swap (int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bubbleSort (int *v, int n){
    if (n < 1) return;
    
    for (int i = 0; i < n; i++)
        if (v[i] < v[i + 1])
            swap(&v[i], &v[i + 1]);
    bubbleSort(v, n-1);
}

int main () {
    int size, i, *v;

    printf("Write the size of the array to iterate \n");
    scanf("%d", &size);

    v = (int*) malloc(size*sizeof(int));

    printf("Write the numbers now: \n");
    for(i = 0; i < size; i++) scanf("%d", &v[i]);

    bubbleSort(v,size-1);

    for(i = 0; i < size; i++) printf("%d ", v[i]);

    return 0;
}
