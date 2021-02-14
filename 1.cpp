#include <iostream>
using namespace std;

#include <vector>

int main() {
    int n;
    vector<int> vec;
    
    cin >> n;
    
    for (int i = 1; i <= 2 * n - 1; i += 2) {
        vec.push_back(i);
    }
    
    for (int i = 0; i < n; ++i) {
        cout << vec[i] << " ";
    }
    
    return 0;
}
