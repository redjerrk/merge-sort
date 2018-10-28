#include<iostream>
using namespace std;

void printing(int a[], int n)
{
    cout<<"The sorted array:"<<endl;
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void merging(int a[], int left, int mid, int right)
{
    int sl, sr;
    sl = mid - left +1;
    sr = right -mid;
    int la[50], ra[50];
    for(int i=0; i<sl; i++){
        la[i]= a[left+i];
    }
    for(int i=0; i<sl; i++){
        cout<<la[i]<<" ";
    }
    cout<<"        ";

    for(int i=0; i<sr; i++){
        ra[i]= a[mid+i+1];
    }
    for(int i=0; i<sl; i++){
        cout<<la[i]<<" ";
    }
    cout<<endl;
    int e =0, b=0, c=left;

    while(e<sl && b<sr){
        if(la[e]<ra[b]){
            a[c]=la[e];
            e++;
        }
        else{
            a[c]=ra[b];
            b++;
        }
        c++;
    }
    while(e<sl){
        a[c]=la[e];
            e++;
            c++;
    }
    while(b<sr){
        a[c]=ra[b];
            b++;
            c++;
    }
}



void merge_sort(int a[], int left, int right)
{
    int n= right+1;
    if(left >= right){
        return ;
    }

    int mid =left + (right - left)/2;

    merge_sort(a, left, mid);

    merge_sort(a, mid+1, right);

    merging(a, left, mid, right);


}



int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++ ){
        cin>>a[i];
    }
    merge_sort(a, 0, n-1);
    printing(a, n);
}
