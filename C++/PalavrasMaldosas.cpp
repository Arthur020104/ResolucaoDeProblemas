#include <iostream>
#include <string>
#include <cmath>

using namespace std;



string makeMeanWord(string S[], int size);

int main() 
{
    int i;
    cin >> i;
    string S[i];
    for (int j = 0; j < i; j++) 
	{
        cin >> S[j];
    }
    string x = makeMeanWord(S, i);
    cout << x << endl;
}

string makeMeanWord(string S[], int size) 
{
    int maior = 0;
    for (int i = 0; i < size; i++) 
	{
        if (S[i].length() > maior) 
		{
            maior = S[i].length();
        }
    }

    float* arr = new float[maior]();  

    float* repeat = new float[maior](); 

    for (int i = 0; i < size; i++) 
	{
        for (int j = 0; j < S[i].length(); j++) 
		{
            arr[j] += static_cast<int>(S[i][j]);
            repeat[j]++;
        }
    }

    string word;
    for (int i = 0; i < maior; i++) 
	{
        arr[i] /= repeat[i];
        word.push_back(static_cast<char>(floor(arr[i])));
    }

    delete[] arr; 
    delete[] repeat; 

    return word;
}
