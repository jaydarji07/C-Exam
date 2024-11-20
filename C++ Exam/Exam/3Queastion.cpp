#include <iostream>
#include <string>
using namespace std;

// Base class: Animal
class Animal {
private:
    string name;
    string sound;

public:
    void setName(const string& n) { name = n; }

    string getName() const { return name; }

    void setSound(const string& s) { sound = s; }

    string getSound() const { return sound; }

    virtual void makeSound() const {
        cout << name << " makes a sound: " << sound << endl;
    }

    
    virtual ~Animal() {}
};


class Dog : public Animal {
public:
    Dog(const string& n) {
        setName(n);
        setSound("Woof");
    }

    void makeSound() const override {
        cout << getName() << " barks: " << getSound() << endl;
    }
};


class Cat : public Animal {
public:
    Cat(const string& n) {
        setName(n);
        setSound("Meow");
    }

    void makeSound() const override {
        cout << getName() << " meows: " << getSound() << endl;
    }
};


int main() {
    
    Dog dog("Buddy");
    Cat cat("Whiskers");

    cout << "Animal Sounds:\n";
    dog.makeSound(); 
    cat.makeSound(); 

    return 0;
}
