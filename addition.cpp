#include<iostream>
using namespace std;
class Addition{
    int a,b,result;

    public:
    void add(int a,int b){
    cout<<"Enter a first number";
    cin>>a;
    cout<<"Enter a second number";
    cin>>b;
    }
    public:
    void display()
    {
        result = a+b;
        cout<<"addition of two number is :"<<result;
    }
};
int main()
{
    Addition ok;
    ok.display();
    
    return 0;
}