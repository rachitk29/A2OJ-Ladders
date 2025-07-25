#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n; 
    int sumOf_X = 0, sumOf_Y = 0, sumOf_Z = 0;
 
    for (int i = 0; i < n; ++i) {
        int x, y, z;
        cin >> x >> y >> z; 
        sumOf_X += x; 
        sumOf_Y += y; 
        sumOf_Z += z; 
    }
 
    if (sumOf_X == 0 && sumOf_Y == 0 && sumOf_Z == 0) {
        cout << "YES" << endl; 
    } else {
        cout << "NO" << endl;  
    }
 
    return 0;
}