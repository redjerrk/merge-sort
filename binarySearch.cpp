#include<bits/stdc++.h>
using namespace std;

int birany_search(int a[], int n, int x)
{
    int mid, left, right;
    left = 0;
    right =n-1;
    while(left<=right){
        mid=(left+right)/2;
        if(a[mid]==x){
            return mid;
        }
        else if(a[mid]<x){
            left=mid+1;
        }
        else{
            right = mid -1;
        }
    }
    return -1;

}

int main()
{
    int n, ar[100];
    while(1){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        int x;
        cin>>x;
        int c= birany_search(ar, n, x);
        cout<<c<<endl;
    }
}
