#include <stdio.h>
#include <stdlib.h>
void toggle(int*bool);
int main()
{
    int entrada;
    int i;
    int lampadaA = 0, lampadaB = 0;
    scanf("%d",&entrada);
    
    int instance;
    for(i=0;i<entrada;i++)
    {
        scanf("%d",&instance);
        instance--;
        if(instance)
        {
            toggle(&lampadaA);
            toggle(&lampadaB);
        }
        else
        {
            toggle(&lampadaA);
        }
    }
    printf("%d\n",lampadaA);
    printf("%d",lampadaB);
}
void toggle(int* bool)
{
    if(*bool)
    {
        *bool = 0;
    }
    else
    {
        *bool = 1;
    }
}
