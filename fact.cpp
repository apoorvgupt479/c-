#include <iostream>
using namespace std;
int main(){
    long fact=1,num;
    cout<<"enter a number ";
    cin >> num;
    for (int i=1;i<=num;i++)
        fact*=i;
    cout<<"factorial = "<<fact<<endl;
}