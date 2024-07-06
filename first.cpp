#include<iostream>
using namespace std;

int main()
{
    int n1=10,n2=20,temp;
    // clrscr();
    system("cls");
    cout<<"\n before swaping:";
    cout<<n1<<"  "<<n2;
    temp=n1;
    n1=n2;
    n2=temp;
    cout<<"\n after swapping:";
    cout<<n1<<"  "<<n2;
    return 0;
}
