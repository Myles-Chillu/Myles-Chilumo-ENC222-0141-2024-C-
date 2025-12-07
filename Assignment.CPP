#include <iostream>
using namespace std;

class Friend {
private:
    string name;
    int age;

public:
    //attributes
    Friend(string n, int a) {  // constructor
        name = n;
        age = a;
    }
     //behavior
    void greet() {
        cout << "Hi, I am " << name << "!" << endl;
    }

    void showAge() {
        cout << "And by the way, I'm " << age << " years old." << endl;
    }
};

int main() {
    Friend f("Myles", 20);
    f.greet();
    f.showAge();
    return 0;
}
