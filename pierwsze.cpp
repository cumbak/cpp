#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int x, y, s;
    cin >> y >> x;
    if(y>x){
        s = x;
        x = y;
        y = s;
    }
    s = 0;
    if(y<2) y=2;
    if(x<y) x=2;
    for(int j=y;j<=x;j++){
            s++;
    for(int i=2;i<=sqrt(j);i++){
        if(j % i == 0 && j != i) {s--; i=j; break;}
    }}
    cout << endl << "w przedziale od " << y << " do " << x << " jest " << s << " liczb pierwszych";
}
