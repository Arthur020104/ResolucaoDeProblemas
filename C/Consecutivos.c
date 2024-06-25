#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{    	
	int n;
	scanf("%d",&n);
	int maior = 0;
	int contador = 0;
	int anterior = -1;
	for(int i = 0 ;i<n;i++)
	{
	    int d;
	    scanf("%d",&d);
	    if(d == anterior)
	    {
	        if(contador ==0)
	            contador = 1;
	        contador++;
	        if(contador>maior)
	        {
	            maior = contador;
	        }
	    }
	    else
	    {
	        contador = 0;
	    }
	    anterior = d;
	}
	printf("%d",maior);
}
