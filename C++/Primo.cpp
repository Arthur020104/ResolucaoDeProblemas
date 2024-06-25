#include <iostream>

using namespace std;

bool eh_primo(int n){
	if(n<=1)
    {
        return false;
    }
    for(int i =2;i<(n+1/2);i++)
    {
        if(n%i ==0)
        {
            return false;
        }
    }
    return true;
}

int main(){
	int x;

	cin>>x;

	if(eh_primo(x)){
		cout << "S" << "\n";
	}else{
		cout << "N" << "\n";
	}
}
