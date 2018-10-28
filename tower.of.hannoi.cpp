#include<bits/stdc++.h>
using namespace std;
int a=0;

void towers(int n, char S, char T, char D)
{
    if(n==1){
       printf("%d. Disk %d moves From %c to %c\n",++a, n, S, D);
       return;
    }
    towers(n-1, S, D, T);
    printf("%d. Move %d Disks From %c to %c\n",++a, n, S, D);
    towers(n-1, T, S, D);

}

int main()
{
    int n;
    cin>>n;
    towers(n , 'S', 'T', 'D');
    return 0;
}
