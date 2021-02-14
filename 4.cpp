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
    
    int k = 0;
    for (int i = 0; i < n / 2; ++i) {
        cout << vec[k] << " " << vec[n - 1 - k] << " ";
        k++;
    }
    if (n % 2 == 1) {
        cout << vec[n / 2];
    }
    
    return 0;
}
