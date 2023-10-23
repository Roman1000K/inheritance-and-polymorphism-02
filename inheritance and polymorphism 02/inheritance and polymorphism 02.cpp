#include <iostream>
#include <Windows.h>

class Triangle {
private:
    int a, b, c;
    int A, B, C;
    std::string name;

public:
    Triangle(int a, int b, int c, int A, int B, int C, std::string name) : a(a), b(b), c(c), A(A), B(B), C(C), name(name) {}

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
    RightTriangle(int a, int b, int c, int A, int B) : Triangle(a, b, c, A, B, 90, "Прямоугольный треугольник:") {}
};

class IsoscelesTriangle : public Triangle {
public:
    IsoscelesTriangle(int a, int c, int A, int B) : Triangle(a, c, a, A, B, A, "Равнобедренный треугольник:") {}
};

class EquilateralTriangle : public Triangle {
public:
    EquilateralTriangle(int a) : Triangle(a, a, a, 60, 60, 60, "Равносторонний треугольник:") {}
};


class Quadrilateral {
protected:
    int a, b, c, d;
    int A, B, C, D;
    std::string name;
public:
    Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D, std::string name) : a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D), name(name) {}

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
    Parallelogram(int a, int b, int A, int B, std::string name) : Quadrilateral(a, b, a, b, A, B, A, B, name) {}
};

class Rectangl : public Quadrilateral {
public:
    Rectangl(int a, int b, std::string name) : Quadrilateral(a, b, a, b, 90, 90, 90, 90, name) {}
};

class Square : public Rectangl {
public:
    Square(int a) : Rectangl(a, a, "Квадрат") {}
};


class Rhomb : public Parallelogram {
public:
    Rhomb(int a, int A, int B) : Parallelogram(a, a, A, B, "Ромб") {}
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

    Triangle triangle(10, 20, 30, 50, 60, 70, "Треугольник: ");
    print_info(&triangle);

    std::cout << std::endl;

    RightTriangle rightTriangle(10, 20, 30, 50, 60);
    print_info(&rightTriangle);

    std::cout << std::endl;

    IsoscelesTriangle isoscelesTriangle(10, 20, 50, 60);
    print_info(&isoscelesTriangle);

    std::cout << std::endl;

    EquilateralTriangle equilateralTriangle(10);
    print_info(&equilateralTriangle);

    std::cout << std::endl;

    Quadrilateral quadrilateral(10, 20, 30, 40, 50, 60, 70, 80, "Четырехугольник: ");
    print_info1(&quadrilateral);

    std::cout << std::endl;


    Rectangl rectangl(10, 20, "Прямоугольник: ");
    print_info1(&rectangl);

    std::cout << std::endl;

    Parallelogram parallelogram(20, 30, 30, 40, "Параллелограмм:");
    print_info1(&parallelogram);

    std::cout << std::endl;

    Square squre(20);
    print_info1(&squre);

    std::cout << std::endl;

    Rhomb rhomb(30, 40, 30);
    print_info1(&rhomb);

    return 0;
}