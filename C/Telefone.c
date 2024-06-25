#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct numero
{
	int i;
	//char letras[3];
};
int main(void)
{    	
	char string[14];
	scanf("%s",string);
	struct numero numeros[8];
//	int chara = 65;
	for(int i = 0;i<8;i++)
	{
		numeros[i].i = (i+2);
		/*for(int j = 0;j<3;j++)
		{
			numeros[i].letras[j] =(char) chara;
			chara++;
		}*/
	}
	int i =0;
	while(string[i] != '\0')
	{
		if((int)string[i] >= 65)
		{
		    char c[20];
		    int x ;
		    if((int)string[i] - 65 < 18)
		    {
		        x = (int) (((int)string[i] - 65)/3);
		    }
		    else
		    {
		        x = (int) ((((int)string[i] - 65)-1)/3);
		    }
		    if(x == 8)
		    {
		        x = 7;
		    }
		    sprintf(c, "%d", numeros[x].i);
			string[i] = c[0];
		}
		
		
		
		i++;
	}
	printf("%s",string);

    return 0;
}
