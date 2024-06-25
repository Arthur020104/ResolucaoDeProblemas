#include <iostream>
bool ehAdjA(char **mat, char agua, int posX,int posY, int lX,int lY)
{
    if(posX+1 >lX-1 || posX-1 <0 || posY+1 >lY-1 || posY-1 <0)
    {
        return true;
    }
    else
    {
        //1
        return mat[posX+1][posY]==agua||mat[posX-1][posY]==agua||mat[posX][posY+1]==agua||mat[posX][posY-1]==agua;
        
        
        
    }


}
int main()
{
    int m,n;
    std::cin>>m;
    std::cin>>n;
    char **mat = (char**)malloc(sizeof(char*)*m );
    for(int i =0;i<m;i++)
    {
        mat[i] = (char*)malloc(sizeof(char)*n );
        for(int j=0;j<n;j++)
        {
            std::cin>>mat[i][j];
        }
    }
    int count = 0;
    for(int i =0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(mat[i][j]=='#' &&ehAdjA(mat,'.',i,j, m,n))
            {
                count++;
            }
        }
    }

    std::cout<<count;
    
}
