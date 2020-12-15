#include <iostream>
using namespace std;

int main(){

    int a=1,i=0,b=0,c=0;
    while (!(a==0)){

    cout << "Enter an integer: ";
    cin >> a;

    if (a%2==0){
        b=b+1;
    }else{
        c=c+1;
        }
    }
    b--;
    cout << "#Even numbers = " << b << "\n";
    cout << "#Odd numbers = " << c;
}
