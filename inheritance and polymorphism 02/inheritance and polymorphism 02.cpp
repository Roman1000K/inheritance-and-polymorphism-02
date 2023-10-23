#include <iostream>
#include <Windows.h>

class Triangle {
protected:
    int a, b, c;
    int A, B, C;
    std::string name;

public:
    Triangle() :a(10), b(20), c(30), A(50), B(60), C(70), name("Треугольник") {}

    std::string get_name() { return name; }
    int get_a() { return a; }
    int get_b() { return b; }
    int get_c() { return c; }
    int get_A() { return A; }
    int get_B() { return B; }
    int get_C() { return C; }
};

class RightTriangle : public Triangle {
public:
    RightTriangle() {
        C = 90;
        name = "Прямоугольный треугольник:";
    }
};

class IsoscelesTriangle : public Triangle {
public:
    IsoscelesTriangle() {
        c = 10; C = 50;
        name = "Равнобедренный треугольник:";
    }
};

class EquilateralTriangle : public Triangle {
public:
    EquilateralTriangle() {
        a = 30; b = 30;
        A = 60; B = 60; C = 60;
        name = "Равносторонний треугольник:";
    }
};

class Quadrilateral {
protected:
    int a, b, c, d;
    int A, B, C, D;
    std::string name;
public:
    Quadrilateral() : a(10), b(20), c(30), d(40), A(50), B(60), C(70), D(80), name("Четырехугольник:") {}

    std::string get_name() { return name; }
    int get_a() { return a; }
    int get_b() { return b; }
    int get_c() { return c; }
    int get_d() { return d; }
    int get_A() { return A; }
    int get_B() { return B; }
    int get_C() { return C; }
    int get_D() { return D; }

};

class Parallelogram : public Quadrilateral {
public:
    Parallelogram() {
        a = 20; b = 30; c = 20; d = 30;
        A = 30; B = 40; C = 30; D = 40;
        name = "Параллелограмм:";
    }
};

class Rectangl : public Quadrilateral {
public:
    Rectangl() {
        a = 10; c = 10; d = 20;
        A = 90; B = 90; C = 90; D = 90;
        name = "Прямоугольник:";
    }
};

class Square : public Rectangl {
public:
    Square() {
        a = 20; c = 20;
        name = "Квадрат:";
    }
};

class Rhomb : public Parallelogram {
public:
    Rhomb() {
        a = 30; b = 30; c = 30; d = 30;
        name = "Ромб:";
    }
};

void print_info(Triangle* shape) {
    std::cout << shape->get_name() << std::endl;

    std::cout << "Стороны: a=" << shape->get_a() << " b=" << shape->get_b() << " c=" << shape->get_c() << std::endl;

    std::cout << "Углы: A=" << shape->get_A() << " B=" << shape->get_B() << " C=" << shape->get_C() << std::endl;
}

void print_info1(Quadrilateral* shape) {
    std::cout << shape->get_name() << std::endl;

    std::cout << "Стороны: a=" << shape->get_a() << " b=" << shape->get_b() << " c=" << shape->get_c() << " d=" << shape->get_d() << std::endl;

    std::cout << "Углы: A=" << shape->get_A() << " B=" << shape->get_B() << " C=" << shape->get_C() << " D=" << shape->get_D() << std::endl;
}

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Triangle triangle;
    print_info(&triangle);

    std::cout << std::endl;

    RightTriangle rightTriangle;
    print_info(&rightTriangle);

    std::cout << std::endl;

    IsoscelesTriangle isoscelesTriangle;
    print_info(&isoscelesTriangle);

    std::cout << std::endl;

    EquilateralTriangle equilateralTriangle;
    print_info(&equilateralTriangle);

    std::cout << std::endl;

    Quadrilateral quadrilateral;
    print_info1(&quadrilateral);

    std::cout << std::endl;

    Rectangl rectangl;
    print_info1(&rectangl);

    std::cout << std::endl;

    Parallelogram parallelogram;
    print_info1(&parallelogram);

    std::cout << std::endl;

    Square squre;
    print_info1(&squre);

    std::cout << std::endl;

    Rhomb rhomb;
    print_info1(&rhomb);

    return 0;
}