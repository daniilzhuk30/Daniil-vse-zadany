#include <iostream>
using namespace std;
int main(){
    int op; 
    double a, b;
    cin >> op >> a >> b;
    switch(op){
        case 1: cout << a+b; break;
        case 2: cout << a-b; break;
        case 3: cout << a*b; break;
        case 4: 
            if(b!=0) cout << a/b; 
            else cout << "Error"; 
            break;
        default: cout << "Error";
    }
    return 0;
}