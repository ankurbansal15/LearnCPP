#include <iostream>
#include <deque>
using namespace std;
int main() {
    cout << "Learn Deque" << endl;
    deque<int> d;
    d.push_back(2);
    d.push_front(1);
    for (int i : d) {
        cout << i << endl;
    }
    cout << d[1] << endl;
    cout << d.empty() << endl;
    cout << d.size() << endl;
    d.erase(d.begin(), d.begin()+1);
    cout << d.size() << endl;
    cout << "-------------" << endl;
    for (int i : d) {
        cout << i << endl;
    }
    return 0;
}