#include <iostream>
#include <cmath>
class Shape {
public:
    virtual double area() const = 0; 
};

class Rectangle : public Shape {
protected:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double area() const override {
        return width * height;
    }

 Rectangle operator+(const Rectangle& other) const {
        return Rectangle(width + other.width, height + other.height);
    }
};

class Square : public Rectangle {
public:
    Square(double side) : Rectangle(side, side) {}
};

class Circle : public Shape {
protected:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return M_PI * radius * radius;
    }

    Circle operator+(const Circle& other) const {
        return Circle(radius + other.radius);
    }
};

class Triangle : public Shape {
protected:
    double base;
    double height;

public:
    Triangle(double b, double h) : base(b), height(h) {}

    double area() const override {
        return 0.5 * base * height;
    }
};

int main() {
    Rectangle rectangle1(5, 4);
    Rectangle rectangle2(3, 2);
    Square square1(6);
    Square square2(3);
    Circle circle1(4);
    Circle circle2(2);
    Triangle triangle1(4, 3);
    Triangle triangle2(6, 5);

    std::cout << "Area of Rectangle 1: " << rectangle1.area() << std::endl;
    std::cout << "Area of Rectangle 2: " << rectangle2.area() << std::endl;
    std::cout << "Area of Square 1: " << square1.area() << std::endl;
    std::cout << "Area of Square 2: " << square2.area() << std::endl;
    std::cout << "Area of Circle 1: " << circle1.area() << std::endl;
    std::cout << "Area of Circle 2: " << circle2.area() << std::endl;
    std::cout << "Area of Triangle 1: " << triangle1.area() << std::endl;
    std::cout << "Area of Triangle 2: " << triangle2.area() << std::endl;

    Rectangle combinedRect = rectangle1 + rectangle2;
    Circle combinedCircle = circle1 + circle2;

    std::cout << "Combined Area of Rectangle 1 and Rectangle 2: " << combinedRect.area() << std::endl;
    std::cout << "Combined Area of Circle 1 and Circle 2: " << combinedCircle.area() << std::endl;

    return 0;
}
