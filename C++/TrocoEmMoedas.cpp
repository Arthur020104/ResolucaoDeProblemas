#include <iostream>

int main()
{
    int n ;
    std::cin>>n;
    int arr[6] = {100,50,25,10,5,1};
    int count[6] = {0,0,0,0,0,0};
    int aux = 0;//serve pra mudar a moeda
    int contador = 0;//quantas moedas no total
    int maior_moeda = arr[contador];
    while(n > 0)
    {
        if(n >= maior_moeda)
        {
            n -= maior_moeda;
            count[aux]++;//conta quantas vezes moedas n esta sendo usada
            contador++;
        }
        else
        {
            aux++;
            maior_moeda = arr[aux];
        }
    }
    std::cout<<contador<<std::endl;
    for(int i =0;i<6;i++)
    {
        std::cout<<count[i]<<std::endl;
    }
    return 0;
}
