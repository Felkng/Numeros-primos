#include<stdio.h>
int main()
{
    int underln=0, overln=0, prime=0, min=0, max=0, ctloop=0;
    scanf("%d%d",&min,&max); //DÍGITE O NUMERO MIN E O MAXIMO, RESPECTIVAMENTE, O PROGRAMA VAI VARRER TODOS OS NUMEROS PRIMOS DENTRO DESSE INTERVALO
    overln=min;
    while(overln<max)
    {
        underln=2;
        if(overln>2)
        {
            while(overln>=underln)
            {
                if(underln > 1 && underln < overln && overln%underln == 0)
                    break;
                if(underln > 1 && overln%underln==0)
                {
                    prime=underln;
                    printf("%d ",prime);
                    break;
                }
                underln++;
            }
        }
        else
        {
            prime=2;
            printf("%d ",prime);
        }
        overln++;
    }
    return 0;
}
