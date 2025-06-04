#include <iostream>
using namespace std;

class Animal {
    public:
    virtual void makeSound() = 0;
    virtual ~Animal() {}
};

class Dog : public Animal {
public:
    void makeSound() {
        cout << "멍멍" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() {
        cout << "야옹" << endl;
    }
};

class Cow : public Animal {
public:
    void makeSound() {
        cout << "음메" << endl;
    }
};

int main() {
    Animal* ani[3];
    Dog d;
    Cat c;
    Cow w;
    ani[0] = &d;
    ani[1] = &c;
    ani[2] = &w;
    for (int i = 0; i < 3; i++)
        ani[i]->makeSound();
}