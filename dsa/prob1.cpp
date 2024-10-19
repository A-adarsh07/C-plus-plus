#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v(6);
    cout << "Enter 6 elements for the vector:" << endl;
    for (int i = 0; i < 6; i++) {
        cin >> v[i];
    }

    cout << "Enter the element to count:" << endl;
    int x;
    cin >> x;

    int count = 0;
    for (int i = 0; i < 6; i++) {
        if (v[i] == x) {
            count++;
        }
    }

    cout << "The element " << x << " appears " << count << " times." << endl;

    return 0;
}