/*Akta stack ke represent korte hole amra array and linked list er modde jekonota
use korte pari*/
#include<bits/stdc++.h>
using namespace std;
class Stack
{
public:
    int *arr;
    int top;
    int size;
    //Behaviour
    Stack(int size)
    {
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    void push(int element)
    {
        if(size-top>1)//karon size-top=2 manei akta khali space available ase
        {
            top++;//mane jdi khali space thake tahole vitore push kore di new element tie top++
            arr[top]=element;//mane nton top e element dukbe ga vitore
        }
        else
        {
            /*ar jdi size-top=1 ba er niche ase tahole bujte je khali jiega nei
            tie nton kisu push korle ta kintu hbe na karon jiega khali nie tie
            stack overflow dekhabe */
            cout<<"Stack overflow "<<endl;
        }
    }
    void pop()//pop() mane ber kore deo
    {
        if(top>=0)//mane top er index er manta 0 ba er ceye beshi hole
        {
            top--;//mane top e jtokkon prjnto element thakbe taderke bad dite thakbo
        }
        else
        {
            /*top<0 mane top=-1 ba something typer asole element nie aikane
            tie kono kisu pop() kora possible na mane stack underflow hbe*/
        }
    }
    int peek()
    {
           if(top>=0)///mane top hisebe kono value exist korle
           {
                  return arr[top];
           }
           else
           {
                  cout<<"Stack is empty"<<endl;
                  return -1;
           }
    }
    bool isEmpty()
    {
           if(top==-1)//top= -1 tkoni asa possible jkon top er man komte komte thakbe stack akebare khali hoi gese
           {
                  return true;
           }
           else
           {
              return false;
           }
    }
};
int main()
{
       Stack st(5);/*MANE stack class er object st nilam and tathe pass korlam 5 ,
     mane ata holo parameterized constructor er mto jkono oi st name object
     create and pass kora hoice value 5 then , ai Stack class er same to same
     namer je member function ase Stack(int size) eta execute hbe*/
      ///PUSH
       st.push(22);
       st.push(41);
       st.push(45);
       st.push(60);
       cout<<st.peek()<<endl;
}
