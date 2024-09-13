#include <iostream>

#define n 5
using namespace std;

void display(int q[], int *f, int *r)
{
   
        for (int i = *f; i <= *r; i++)
        {
            if(i!=-1)
            {
            cout << q[i] << " ";
            }
            else
            {
                cout<<"stack is empty\n";
            }
        }
        cout << endl;
}


int deque(int q[], int *f, int *r)
{
    int x = -1;
    if (*f==-1)
    {
        cout << "stack is empty\n";
    }
    else
    {
        x = q[*f];
        (*f)++;
       if (*f > *r)
        {
            *f = *r = -1;
        }
    }
    return x;
}

void enque(int q[], int *f, int *r, int v)
{
    if (*r == n - 1)
    {
        cout << "stack is full\n";
    }
    else
    {
        (*r)++;
        if (*f == -1)
        {
            *f = 0;
        }
        q[*r] = v;
    }
}

bool isEmpty(int *f)
{
    return (*f == -1);
}

void push(int q1[], int q2[], int *f1, int *r1, int *f2, int *r2, int v)
{
    if (*r1 == n - 1&& *r2==n-1)
    {
        cout << "stack is full\n";
        return;
    }
    else
    {
    while (!isEmpty(f1))
    {
        enque(q2, f2, r2, deque(q1, f1, r1));
    }
     enque(q1, f1, r1, v);
    while (!isEmpty(f2))
    {
        enque(q1, f1, r1, deque(q2, f2, r2));
    }
    }
}

int pop(int q1[], int *f1, int *r1)
{
    if(*f1>*r1)
    {
        cout<<"stack is empty\n";
    }
    else
    {
      return deque(q1, f1, r1);
    }
}

int main()
{
    int q1[n], q2[n], f1 = -1, r1 = -1, f2 = -1, r2 = -1;
    cout<<"pushed stack values"<<endl;
    push(q1, q2, &f1, &r1, &f2, &r2, 10);
    push(q1, q2, &f1, &r1, &f2, &r2, 11);
     push(q1, q2, &f1, &r1, &f2, &r2, 12);
    push(q1, q2, &f1, &r1, &f2, &r2, 13);
    display(q1, &f1, &r1);
    cout << "deleted item from stack : " << pop(q1, &f1, &r1) << endl;
      cout << "deleted item from stack : " << pop(q1, &f1, &r1) << endl;
         cout << "deleted item from stack : " << pop(q1, &f1, &r1) << endl;
      cout << "deleted item from stack : " << pop(q1, &f1, &r1) << endl;
        
    display(q1, &f1, &r1);
}
