#include <iostream>

using namespace std;
int peso(int **arr,int i,int j,int n);
int main(){
    // Seu código vai aqui
	int n;
    std::cin >> n;

    int** arr = new int*[n];
    for (int i = 0; i < n; ++i) {
        arr[i] = new int[n];
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cin >> arr[i][j];
        }
    }
	int maior = 0;
	int rows[n];
	int columns[n];
	for(int i =0;i < n;i++)
	{  
	    int auxi = i;
	    int row = 0;
	        while(auxi<n)
        	{
        		row +=arr[i][auxi];
        		auxi++;
        	}
        	auxi = i-1;
        	while(auxi>-1)
        	{
        	row +=arr[i][auxi];
        		auxi--;
        	}
        	rows[i] = row;
    }
	for(int j =0;j < n;j++)
	{
	    int peso = 0;
    	
    	
    	int auxj = j;
    	while(auxj<n)
    	{
    		peso +=arr[auxj][j];
    		auxj++;
    	}
    	auxj = j-1;
    	while(auxj>-1)
    	{
    		peso +=arr[auxj][j];
    		auxj--;
    	}
    	columns[j] = peso;

		
		
	
	}
	for(int i = 0;i<n;i++)
	{
	    for(int j = 0;j<n;j++)
	    {
	        int peso = rows[i]+columns[j] - (2* arr[i][j]);
    	    if(peso > maior)
    		{
    			maior = peso;
    		}
	    }
	    
	}

	cout<<maior;
    return 0;
}
