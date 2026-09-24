#include <iostream>
using namespace std;
int main(){
    int type; 
    bool build, tests, review, conflicts;
    cin >> type >> build >> tests >> review >> conflicts;
    switch(type){
        case 1:
            if(build && tests && review && !conflicts) cout << "Accepted"; else cout << "Rejected"; 
            break;
        case 2:
            if(build && tests && !conflicts) cout << "Accepted"; else cout << "Rejected"; 
            break;
        case 3:
            if(build && review && !conflicts) cout << "Accepted"; else cout << "Rejected"; 
            break;
        default: 
            cout << "Invalid";
    }
    return 0;
}