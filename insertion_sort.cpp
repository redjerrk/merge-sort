#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int a[100], int n){
int i, j, temp;

for(i=1; i<n;i++){
        temp =a[i];
        j=i-1;
        while(j>=0 && a[j]> temp){
           a[j+1]=a[j];
           j=j-1;
        }
        a[j+1]=temp;



}
cout<<"sorted array is:"<<endl;
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
cout<<endl;



}

int main()
{
    int ar[100];
    int n;
    while(1){
        cin>>n;
        for(int i=0; i<n; i++){
            ar[i]= rand()%1000;
        }
        for(int i=0;i<n;i++){
            cout<<ar[i]<<" ";
    }
    cout<<endl;

    insertion_sort(ar, n);
}
}
