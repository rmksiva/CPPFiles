#include <iostream>
#include <conio.h>

using namespace std;

class Arithmatic
{
    public :
    void doOperation(int a,int b,int op)
    {
        int result = 0;
        if(op==1)
            result= a+b;
        else if(op==2)
            result= a-b;
        else if(op==3)
            result= a*b;
        else if(op==4)
            result= a/b;
        else
            result= a;
        printResult(result);
    }
    void printResult(int ans)
    {
        cout<<"Result : "+ std::to_string( ans)<<endl;
    }
    
};

int main()
{
    Arithmatic obj;
    int a,b,op;
    cout<<"Enter First Number : ";
    cin>>a;
    cout<<"Enter Second Number : ";
    cin>>b;
    cout<<"Enter Operator number : ";
    cin>>op;
    obj.doOperation(a,b,op);
    obj.printResult(a+b);
    getch();
    return 1;
}
