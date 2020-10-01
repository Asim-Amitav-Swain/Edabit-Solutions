// Problem Number 131
// There is a single operator in C++, capable of providing the remainder of a division operation. Two numbers are passed as parameters. The first parameter divided by the second parameter will have a remainder, possibly zero. Return that value.
#include <iostream>
using namespace std;

int reminder(int a, int b){
    int c;
    c = a%b;
    return c;
}
int main(){
    int a, b, rem;
    cin>>a;
    cin>>b;
    rem = reminder(a, b);
    cout<<rem;
}