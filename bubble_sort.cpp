#include<bits/stdc++.h>

using namespace std;



int binary(int a[], int low, int high, int x)
{
    if(low<=high){
        int mid = (low+high)/2;

        if(x<a[mid]){
            binary(a, low, mid-1,x);
        }

        else if(x>a[mid]){
            binary(a, mid+1 , high,x);
        }

        else
            return mid;
    }
    else
        return -1;
}

int main()
{
    int n;
    cin>>n;
    int a[100];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    //sort(a, a+10);
    int x;
    cin>>x;

    int c= binary(a, 0, n-1,x);
    if(c== -1)
        printf(" not found \n");
    else
        printf("found\n");
}
