#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> colors;
    string color, answer;

    cout << "Enter your favorite color: ";
    cin >> color;
    colors.push_back(color);

    do {
        cout << "Would you like to add another color? (yes/no): ";
        cin >> answer;
        if (answer == "yes") {
            cout << "Enter a color: ";
            cin >> color;
            colors.push_back(color);
        }
    } while (answer == "yes");

    cout << "\nYour favorite colors:\n";
    for (const string& c : colors) {
        cout << "- " << c << endl;
    }

    return 0;
}