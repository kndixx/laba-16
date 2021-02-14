#include <iostream>
using namespace std;

#include <vector>

int main() {
    int n;
    int a, b;
    vector<int> vec;
    
    cin >> n >> a >> b;
    
    vec.push_back(a);
    vec.push_back(b);
    
    for (int i = 2; i < n; ++i) {
        int sum = 0;
        for (int j = 0; j < vec.size(); ++j) {
            sum += vec[j];
        }
        
        vec.push_back(sum);
    }
    
    for (int i = 0; i < n; ++i) {
        cout << vec[i] << " ";
    }
    
    return 0;
}
