#include<stdio.h>
int main(){

    int n, i, qtdePos = 0, qtdeNeg = 0;
    double x, soma = 0, media;

    FILE *arq;
    arq = fopen("ListaGeralEx7.txt", "w");

    do
    {
        scanf("%d", &n);
    } while (n <= 0);
    
    for (i = 0; i < n; i++)
    {
        scanf("%lf", &x);

        if (x > 0)
        {
            soma += x;
            qtdePos++;
        }
        else
        {
            qtdeNeg++;
        }
        
    }

    if (qtdePos > 0)
    {
        media = soma / qtdePos;
    }
    else
    {
        media = 0;
    }
    
    printf("Soma dos Numeros Positivos Digitados: %.2lf\n", soma);
    printf("Media dos Numeros Positivos Digitados: %.2lf\n", media);
    printf("Numeros Negativos Digitados: %.2lf", qtdeNeg);
    fprintf(arq, "Soma dos Numeros Positivos Digitados: %.2lf\n", soma);
    fprintf(arq, "Media dos Numeros Positivos Digitados: %.2lf\n", media);
    fprintf(arq, "Numeros Negativos Digitados: %.2lf", qtdeNeg);
    
    fclose(arq);
    return 0;
}