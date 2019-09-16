#include <stdio.h>
#include <stdlib.h>
int i;
void entrada(int *p)
{
    for(i = 0; i<3; i++){
        printf("Informe o %d° numero.\n", i+1);
        scanf("%d", p+i);
    }

}
int media(int *p)
{
    int med = 0;

    for(i = 0; i<3; i++){
        med += *(p+i);
    }
    return med/3;
}

int main()
{
    int *p, vet[3];

    p = vet;
    entrada(p);

    for(i = 0; i<3; i++){
        printf("\n%d\n", *vet+i);
    }
    printf("Media = %d\n", media(p));

    return 0;
}
