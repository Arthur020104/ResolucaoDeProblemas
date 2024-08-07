#include <iostream>
#include <vector>
class Pointer; class Instituicao;
class Instituicao
{
public:
    int id;
    std::vector<Pointer*> pointers;
};
class Pointer
{
public:
    int codigo;
    Instituicao* inst;
};
int main()
{
    int n, k;
    std::cin >> n;
    std::cin >> k;
    Pointer* pointers = new Pointer[n];
    int i;
    for (i = 1; i <= n; i++)
    {
        pointers[i - 1].codigo = i;
        pointers[i - 1].inst = new Instituicao;
        pointers[i - 1].inst->id = i;
        pointers[i - 1].inst->pointers.push_back(&pointers[i - 1]);
    }
    for (i = 0; i < k; i++)
    {
        char l;
        int codigo1, codigo2;
        std::cin >> l;
        std::cin >> codigo1;
        std::cin >> codigo2;
        
        Instituicao* ref;
        Instituicao* ref1;
        size_t h;
        if (l == 'C')
        {
            printf(pointers[codigo1 - 1].inst->id == pointers[codigo2 - 1].inst->id ? "S\n" : "N\n");
        }
        else if (l == 'F')
        {//se tamanho de ref <=
            ref = pointers[codigo1 - 1].inst->pointers.size() <= pointers[codigo2 - 1].inst->pointers.size() ? pointers[codigo1 - 1].inst: pointers[codigo2 - 1].inst;
            ref1 = pointers[codigo2 - 1].inst->pointers.size() >= pointers[codigo1 - 1].inst->pointers.size() ? pointers[codigo2 - 1].inst : pointers[codigo1 - 1].inst;
            for (h = 0; h < ref->pointers.size(); h++)
            {
                ref->pointers[h]->inst = ref1;

                ref1->pointers.push_back(ref->pointers[h]);
            }
           
        }
    }
}