#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int vet[n];
    for(int i =0;i < n;i++)
    {
        scanf("%d",&vet[i]);
    }
    for(int i =0;i < n;i++)
    {
        if(vet[i] == 0)
        {
            for(int j = i+1;j < n;j++)
            {
                if((vet[j] > j -i && vet[j] != 0) || vet[j]==-1)
                {
                    vet[j] = j - i;
                    if(j-i > 9)
                        vet[j] = 9;
                }
            }
            for(int j = i-1;j >= 0;j--)
            {
                if((vet[j] > i-j && vet[j] != 0) || vet[j]==-1)
                {
                    vet[j] = i-j;
                    if(i-j > 9)
                        vet[j] = 9;
                }
            }
        }
    }
    for(int i =0;i < n;i++)
    {
        printf("%d ",vet[i]);
    }
}