#include <iostream>
#include <vector>
using namespace std;
void printVector(vector<int> &a) {
    for (int i = 0;i<a.size();i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main() {
    vector<int> v;
    // vector<int> v(5);
    // vector<int> v(5,1);
    printVector(v);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    printVector(v);
    cout << v.at(2) << endl;
    cout << v.capacity() << endl;
    cout << v.size() << endl;
    cout << v.front() << endl;
    cout << v.back() << endl;
    v.pop_back();
    cout << v.back() << endl;
    v.clear();
    cout << v.capacity() << endl;
    cout << v.size() << endl;
    cout << *v.begin() << " " << *v.end() << endl;
    return 0;
}