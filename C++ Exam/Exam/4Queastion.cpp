#include <iostream>
#include <string>
using namespace std;


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


    virtual void displayDetails() const {
        cout << "Animal Name: " << name << ", Sound: " << sound << endl;
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

    void displayDetails() const override {
        cout << "Dog Name: " << getName() << ", Sound: " << getSound() << endl;
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

    void displayDetails() const override {
        cout << "Cat Name: " << getName() << ", Sound: " << getSound() << endl;
    }
};

int main() {
    Animal* animals[3];

  
    animals[0] = new Dog("Buddy");
    animals[1] = new Cat("Whiskers");
    animals[2] = new Dog("Rex");

    cout << "Animal Details:\n";
    for (int i = 0; i < 3; i++) {
        animals[i]->displayDetails();  
    }


    for (int i = 0; i < 3; i++) {
        delete animals[i];
    }

    return 0;
}
