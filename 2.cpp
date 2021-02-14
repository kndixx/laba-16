#include <iostream>
using namespace std;

#include <vector>

int main() {
    int n;
    double a, d;
    vector<int> vec;
    
    cin >> n >> a >> d;
    
    for (int i = 0; i < n; ++i) {
        vec.push_back(a);
        a = a * d;
    }
    
    for (int i = 0; i < n; ++i) {
        cout << vec[i] << " ";
    }
    
    return 0;
}
