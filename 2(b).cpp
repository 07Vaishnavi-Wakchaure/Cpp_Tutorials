#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter a age: ";
    cin >> age;

    switch(age) {
        case 18:
            cout << "You are teenager" << endl;
            break;
        case 21:
            cout << "You are an adult" << endl;
            break;
        case 70:
            cout << "You are an old" << endl;
            break;
        default:
            cout << "Invalid option" << endl;
    }

    return 0;
}
