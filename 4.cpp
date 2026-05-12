#include <iostream>
#include <vector>
#include <string>
using namespace std;

void greetUser(vector <string> names) {
    cout << "Hello, ";
    for (int i = 0; i < names.size(); i++) {
        cout << names[i];
        if (i < names.size() - 1) cout << " ";
    }
    cout << "! Nice to meet you!" << endl;
}

int main() {
    vector<string> names;
    int count;
    string name;

    cout << "How many names do you have? ";
    cin >> count;

    for (int i = 1; i <= count; i++) {
        cout << "Enter name " << i << ": ";
        cin >> name;
        names.push_back(name);
    }

    greetUser(names);

    return 0;
}