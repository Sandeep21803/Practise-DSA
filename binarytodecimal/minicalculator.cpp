#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the valur of a"<<endl;
    cin>>a;
    cout<<"Enter the valur of b"<<endl;
    cin>>b;
    char op;
    cout<<"Enter the operation you want to perform"<<endl;
    cin>>op;
    switch(op){
        case '+': cout<<(a+b)<<endl;
            break;


        case '-': cout<<(a-b)<<endl;
            break;


        case '*':cout <<(a*b)<<endl;
            break;


        case '/':cout <<(a/b)<<endl;
            break;

        case '%':cout <<(a%b)<<endl;
            break;  


        default:
            cout<<"Invalid operation"<<endl;
    }
    return 0;
}