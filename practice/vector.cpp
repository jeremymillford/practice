#include <vector>
#include <iostream>
using namespace std;

vector<int> vector_multiply(vector<int> &v, int factor) {
    for (int i = 0; i < v.size(); i++) {
        v[i] *= factor;
    }
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    vector_multiply(v, 2);
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}