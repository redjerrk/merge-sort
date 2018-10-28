#include<bits/stdc++.h>

using namespace std;

void selection_sort(int a[100], int n)
{
    int i, j, temp, im;
    for(i=0; i<n-1;i++){
        im = i;
        for(j=i+1; j<n; j++){
          if(a[j]>a[im]){
            im=j;
          }

        }
        if(im != i){
            temp = a[i];
            a[i]= a[im];
            a[im]=temp;
        }

    }
    cout<<"sorted numbers: "<<endl;
    for(i=0;i<n;i++){
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
            ar[i]= rand()%100;
        }
        cout<<"UNSORTED NUMBERS:  "<<endl;
        for(int i=0;i<n;i++){
            cout<<ar[i]<<" ";
        }
        cout<<endl;
        selection_sort(ar, n);
    }
}
