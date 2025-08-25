
# **EXP-11 Classes and Objects in C++**

## **Aim**

To study and implement the concept of **classes and objects** in C++, including class definition, object creation, member functions, data members, and practical applications in various programming scenarios.

---

## **Software Used**

* **IDE:** Visual Studio Code
---

## **Theory**

### **1. Classes and Objects**

* A **class** is a blueprint or template that defines the structure and behavior (data members and member functions) of objects.
* An **object** is an instance of a class created in memory during program execution.

```cpp
class Car {
public:
    string brand;
    string model;
    int year;
};
Car myCar; // Object creation
```

---

### **2. Access Specifiers**

* **public**: Members are accessible from anywhere in the program.
* **private**: Members are accessible only inside the class (default access level).
* **protected**: Members are accessible inside the class and by derived classes.

---

### **3. Member Functions**

* Functions that define the behavior of a class.
* Can be defined:

  * **Inside the class** (inline by default).
  * **Outside the class** using the scope resolution operator `::`.

```cpp
class Sample {
public:
    void display(); // declaration
};
void Sample::display() { // definition outside class
    cout << "Hello World";
}
```

---

### **4. Constructors and Destructors**

* **Constructor:** A special member function that initializes objects automatically when they are created.
* **Destructor:** Cleans up resources before the object is destroyed.

```cpp
class Demo {
public:
    Demo() { cout << "Constructor called"; }
    ~Demo() { cout << "Destructor called"; }
};
```

---

### **Importance of Classes and Objects**

* Encapsulation: Bundling data and methods together.
* Code Reusability: Classes can be reused in multiple programs.
* Modularity: Code becomes organized and easy to maintain.
* Data Hiding: Prevents unauthorized access using access specifiers.

---

## **Algorithms & Examples**

### **1. Calculator Using Class (`calculator using class.cpp`)**

**Algorithm:**

```
Step 1: Start
Step 2: Define class Calculator
        - public: int a, b
        - public: int add(), int subtract()
Step 3: Define external functions:
        - int multiply(Calculator obj)
        - float divide(Calculator obj)
Step 4: In main():
        - Create object calc
        - Input a, b
        - Call calc.add(), calc.subtract(), multiply(calc), divide(calc)
        - Display results
Step 5: End
```

**Sample Outcome:**

```
Enter two numbers: 10 5
Addition = 15
Subtraction = 5
Multiplication = 50
Division = 2
```

---

### **2. Car Details (`Car details.cpp`)**

**Algorithm:**

```
Step 1: Start
Step 2: Define class Car
        - public: string brand, model; int year; float price
        - public: void displayDetails()
Step 3: In main():
        - Create objects car1, car2
        - Assign values to their data members
        - Call car1.displayDetails(), car2.displayDetails()
Step 4: End
```

**Sample Outcome:**

```
Car 1: Toyota Corolla, 2020, Price: 10,00,000
Car 2: Honda City, 2021, Price: 12,50,000
```

---

### **3. Student Information (`students.cpp`)**

**Algorithm:**

```
Step 1: Start
Step 2: Define class Student
        - public: string name, branch, subject; int year; float cgpa
Step 3: In main():
        - Create objects s1, s2
        - Assign values to their data members
        - Display s1 and s2 details using cout
Step 4: End
```

**Sample Outcome:**

```
Student 1: John, CSE, Data Structures, 2nd Year, CGPA: 8.5
Student 2: Alice, ECE, Digital Electronics, 3rd Year, CGPA: 9.1
```

---

### **4. Rectangle Area Calculation (`Rect Area.cpp`)**

**Algorithm:**

```
Step 1: Start
Step 2: Define class Rectangle
        - public: float length, breadth
Step 3: Define external function:
        - float calculateArea(Rectangle obj)
Step 4: In main():
        - Create object rect
        - Input length and breadth
        - Call calculateArea(rect)
        - Display result
Step 5: End
```

**Sample Outcome:**

```
Enter length: 5
Enter breadth: 3
Area of Rectangle = 15
```

---

### **5. Cube Volume Calculation (`vol of cube.cpp`)**

**Algorithm:**

```
Step 1: Start
Step 2: Define class Cube
        - public: float side
        - public: float volume()
Step 3: Define external function:
        - float calculateVolume(Cube obj)
Step 4: In main():
        - Create object c
        - Input side
        - Call c.volume() and calculateVolume(c)
        - Display both results
Step 5: End
```

**Sample Outcome:**

```
Enter side: 4
Volume (member function) = 64
Volume (external function) = 64
```

---

### **6. Cuboid Volume with Private Members (`vol using pvt and pub.cpp`)**

**Algorithm:**

```
Step 1: Start
Step 2: Define class Cuboid
        - private: float height, width, length (with default values)
        - public: float volume()
Step 3: In main():
        - Create object cub
        - Call cub.volume()
        - Display result
Step 4: End
```

**Sample Outcome:**

```
Default Cuboid Volume = 120
```

---

## **Conclusion**

This experiment demonstrates the fundamental concepts of **Object-Oriented Programming (OOP) in C++** using classes and objects. The examples show:

* **Class creation** with data members and member functions.
* **Access specifiers** (public and private) for encapsulation.
* **Member functions inside and outside the class.**
* **Constructors and destructors** for automatic initialization and cleanup.
* **Practical applications** in:

  * Mathematical operations (Calculator)
  * Data representation (Car details, Student information)
  * Geometric calculations (Rectangle area, Cube and Cuboid volume)

By using classes, programs become **modular, reusable, and easier to maintain**, which are key principles of **object-oriented design**.

---
