#include <iostream>
#include <array>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Basic Array " << arr[2] << endl;
    array<int, 3> array2 = {1, 2, 4};
    int size = array2.size();
    for (int i = 0; i < size; i++) {
        cout << array2[i] << endl;
    }
    cout << array2.at(2) << endl;
    cout << array2.empty() << endl;
    cout << array2.front() << endl;
    cout << array2.back() << endl;
    return 0;
}
