#include<bits/stdc++.h>
#define pf printf
#define sf scanf


using namespace std;
typedef struct node Node;

struct node{
    int data;
    Node *next;

};

int main()
{
    Node *p, *q, *t;
    int x;

    p = new node;
    cout<<"Enter the first value:";
    cin>>p->data;
    cout<<"Enter next value:";
    cin>>x;

    q=p;

    while(x>0){

            t = new node;
            t->data = x;
            q->next = t;
            q = q->next;
            cout<<"Enter next value:";
            cin>>x;

    }
    q->next = NULL;
    t = p;
    cout<<"\nValues are:\n ";
    while(t){
        cout<<t->data<<" ";
        t=t->next;
    }






    return 0;
}

