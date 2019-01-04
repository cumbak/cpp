#include <iostream>
#include <string>
using namespace std;

int main(){
    string x,y;
    int k;
    getline(cin, x);
    cin >> k;
    for(int i=0;i<x.size();i++){
        x[i] -= k;
        if (x[i] < 'a') x[i] = 'z' - k + 1;
    }
    cout << endl << x;
}
