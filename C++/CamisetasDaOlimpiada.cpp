#include <iostream>
#include <vector>
class Camisa
{     
public:            
    int tamanho;  
    int quantidade; 
    Camisa(int x,int y) { 
        tamanho = x;
        quantidade = y;
    }
};

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> myVector;
    for (int i = 0; i < n; i++)
    {
        int number;
        std::cin >> number;
        myVector.push_back(number);
    }
    int p;
    std::cin >> p;
    Camisa P(1, p);
    int m;
    std::cin >> m;
    Camisa M(2, m);
    for (int i = 0; i < n; i++)
    {
        if (myVector[i] == 1)
        {
            P.quantidade--;
            if (P.quantidade < 0)
            {
                std::cout << "N";
                return 0;
            }
        }
        else
        {
            M.quantidade--;
            if (M.quantidade < 0)
            {
                std::cout << "N";
                return 0;
            }
        }
    }
    std::cout << "S";
    return 0;
}