#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    int choice;

    do {
        cout << "\n1. Add Element\n2. Display Vector\n3. Vector Size\n4. Exit\nChoice: ";
        cin >> choice;

        if (choice == 1) {
            int val;
            cout << "Enter an integer: ";
            cin >> val;
            v.push_back(val);
        } else if (choice == 2) {
            cout << "Vector: ";
            for (int n : v) cout << n << " ";
            cout << endl;
        } else if (choice == 3) {
            cout << "Size: " << v.size() << endl;
        }
    } while (choice != 4);

    return 0;
}