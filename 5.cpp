#include <iostream>
using namespace std;

#include <vector>

int main() {
    int n;
    vector<int> vec;
    
    cin >> n;
    vec.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }
    
    for (int i = 0; i < n; i += 2) {
        cout << vec[i] << " ";
    }
    
    int m = n;
    if (m % 2 != 0) {
        m--;
    }
    m--;
    for (int i = m; i >= 0; i -= 2) {
        cout << vec[i] << " ";
    }
    
    return 0;
}
