#include<iostream>
#include<cstdio>
using namespace std;
#define max 3

typedef struct {
        int data[max];
        int top;


    }stack;

void push(stack *s, int item)
{
    if(s-> top < max){
        s-> data[s->top]= item;
        s->top++;

    }
    else{
        return;
    }
}
int pop(stack *s)
{
    int item;

    if(s->top==0){
        printf("Stack is empty\n");
        return -1;
    }
    else{
        s->top--;
        item = s->data[s->top];
    }
    return item;
}

int main()
{
    stack my;
    int item,i=0,j,v;
    char a;
    my.top =0;
    while(1){
        cout<<"Do you want to push?(y/n): ";
        cin>>a;

        if(a == 'y'||a =='Y'){
            i++;
            if(i <= max){
                cout<<"Enter value: ";
                cin>>v;
                push(&my ,v);
            }

            else{
                cout<<"Stack is full"<<endl;
                }

            }

        else if(a == 'n' ||a == 'N') {
            cout<<"Do you want to pop?(y/n): ";
            cin>>a;

            if(a == 'y'||a =='Y'){
                int k = pop(&my);
                if(k != -1){
                    cout<<"stack value: "<<k<<endl;
                    }
                }
            else{
                cout<<"Do you want to exit?(y/n): ";
                cin>>a;
                if(a == 'y'||a =='Y'){
                    break;
                    }
                }
            }

        else{
            cout<<"You have entered wrong key!"<<endl;
        }


    }


}
