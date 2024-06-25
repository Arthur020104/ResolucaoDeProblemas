#include <iostream>

using namespace std;
void merge(int start,int mid, int end,int arr[])
{
    int size1 = (mid- start)+1;
    int size2 = end-mid;
    int aux1[size1];int aux2[size2];
    for (int i = 0; i < size1; i++) 
    {
        aux1[i] = arr[start + i];
    }

    for (int j = 0; j < size2; j++) 
    {
        aux2[j] = arr[mid + 1 + j];
    }
    int auxI = 0;int auxII = 0;int auxIII = start;
    while(auxI<size1 &&auxII<size2 )
    {
        if(aux1[auxI]>aux2[auxII]  )
        {
            arr[auxIII] = aux1[auxI];
            auxI++;
            auxIII++;
        }
        else
        {
            arr[auxIII] = aux2[auxII];
            auxII++;
            auxIII++;
        }
    }
    if(auxI<size1)
    {
        while(auxI <size1)
        {
            arr[auxIII] = aux1[auxI];
            auxIII++;auxI++;
        }
    }
    else
    {
        while(auxII <size2)
        {
            arr[auxIII] = aux2[auxII];
            auxIII++;auxII++;
        }
    }
}
void mergesort(int start,int end,int arr[])
{
    if(start>=end)
    {
        return;
    }
    int mid = (start+end)/2;
    mergesort(start,mid,arr);
    mergesort(mid+1,end,arr);
    merge(start,mid,end,arr);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    mergesort(0,n-1,arr);
    for(int i =0;i<n;i++)
    {
        if(i == n-1)
        {
            cout<<arr[i];
            break;
        }
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
