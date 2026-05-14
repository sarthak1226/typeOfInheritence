#include <iostream>
using namespace std;

/* ---------------- SINGLE INHERITANCE ---------------- */

class Animal {
public:
    void eat() {
        cout << "Animal eats\n";
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks\n";
    }
};

/* ---------------- MULTILEVEL INHERITANCE ---------------- */

class A {
public:
    void showA() {
        cout << "Class A\n";
    }
};

class B : public A {
public:
    void showB() {
        cout << "Class B\n";
    }
};

class C : public B {
public:
    void showC() {
        cout << "Class C\n";
    }
};

/* ---------------- MULTIPLE INHERITANCE ---------------- */

class Father {
public:
    void fatherProperty() {
        cout << "Father's Property\n";
    }
};

class Mother {
public:
    void motherProperty() {
        cout << "Mother's Property\n";
    }
};

class Child : public Father, public Mother {
public:
    void childProperty() {
        cout << "Child's Property\n";
    }
};

/* ---------------- HIERARCHICAL INHERITANCE ---------------- */

class Vehicle {
public:
    void start() {
        cout << "Vehicle starts\n";
    }
};

class Car : public Vehicle {
public:
    void carType() {
        cout << "This is a Car\n";
    }
};

class Bike : public Vehicle {
public:
    void bikeType() {
        cout << "This is a Bike\n";
    }
};

/* ---------------- HYBRID INHERITANCE ---------------- */
/*
Hybrid = Combination of more than one inheritance type
Here:
    Person
      /   \
   Student Teacher
      \   /
    Assistant
*/

class Person {
public:
    void info() {
        cout << "I am a Person\n";
    }
};

class Student : virtual public Person {
public:
    void study() {
        cout << "Student studies\n";
    }
};

class Teacher : virtual public Person {
public:
    void teach() {
        cout << "Teacher teaches\n";
    }
};

class Assistant : public Student, public Teacher {
public:
    void work() {
        cout << "Assistant works\n";
    }
};

int main() {

    cout << "----- SINGLE INHERITANCE -----\n";
    Dog d;
    d.eat();
    d.bark();

    cout << "\n----- MULTILEVEL INHERITANCE -----\n";
    C objC;
    objC.showA();
    objC.showB();
    objC.showC();

    cout << "\n----- MULTIPLE INHERITANCE -----\n";
    Child ch;
    ch.fatherProperty();
    ch.motherProperty();
    ch.childProperty();

    cout << "\n----- HIERARCHICAL INHERITANCE -----\n";
    Car c1;
    Bike b1;

    c1.start();
    c1.carType();

    b1.start();
    b1.bikeType();

    cout << "\n----- HYBRID INHERITANCE -----\n";
    Assistant a1;
    a1.info();
    a1.study();
    a1.teach();
    a1.work();

    return 0;
}