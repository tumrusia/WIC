#include <iostream>
using namespace std;
#define F first
#define S second
pair <int, int > T[100000];
int main () {
    int n;
    cin>> n;
    for (int i=0; i<n; i++) {
        cin>> T[i].F >> T[i].S;
    }
    for (int i=0; i<n; i++) {
        cout<< T[i].F << " " << T[i].S << "\n";
    }
}
