#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
   cin>>n;

    char st[10][100];
    int ab[10];
    for( i=1; i<=n; i++){
        for(int j=0; j<10; j++){
            cin>>st[j]>>ab[j];

        }
        int ma=ab[0];
    for(int i=1; i<10; i++){
        if(ma<ab[i]){
            ma=ab[i];

        }
    }

    cout << "Case #"<<i<< ":" << endl;

    for(int i=0; i<10; i++){
        if(ab[i]==ma){
            cout << st[i] << endl;
        }
    }
    //cout<<endl;
    }

}



