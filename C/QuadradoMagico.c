#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
    scanf("%d", &n);

    int **arr = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) 
    {
        arr[i] = (int *)malloc(n * sizeof(int));
    }

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int p = -101;
    for(int i =0;i<n;i++)
    { 
        int sum=0;
        int sum2 =0;
        int d1 =0;
        int d2 = 0;
        for(int j =0;j<n;j++)
        {
            d1 +=arr[j][j];
            d2 += arr[n-(j+1)][j];
            sum2+=arr[j][i];
            sum+=arr[i][j];
        }
        if(p==-101)
        {
            p = sum;
        }
        else if(p!=sum || p != sum2 || sum2!=sum || d1 != d2 || d2 != sum || sum2 != d2 || sum != d1)
        {
            p = -1;
            break;
        }
    }
    printf("%d",p);
    
}