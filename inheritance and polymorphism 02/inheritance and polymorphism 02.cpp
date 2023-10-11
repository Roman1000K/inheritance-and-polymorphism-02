#include <iostream>
#include <Windows.h>

class Triangle {
private:
    int a, b, c;
    int A, B, C;

public:
    Triangle(int a, int b, int c, int A, int B, int C) : a(a), b(b), c(c), A(A), B(B), C(C) {}
  
    int get_a()  {return a;}
    int get_b()  {return b;}
    int get_c()  {return c;}
    int get_A()  {return A;}
    int get_B()  {return B;}
    int get_C()  {return C;}
  };

class RightTriangle : public Triangle {
public:
    RightTriangle(int a, int b, int c, int A, int B) : Triangle(a, b, c, A, B, 90) {}    
};

class IsoscelesTriangle : public Triangle {
    public:
     IsoscelesTriangle(int a, int c, int A, int B) : Triangle(a, c, a, A, B, A) {}
    };

class EquilateralTriangle : public Triangle {
    public:
        EquilateralTriangle(int a) : Triangle(a, a, a, 60, 60, 60) {}
    };

    
    class Quadrilateral {
    protected:
        int a, b, c, d;
        int A, B, C, D;
    public:
        Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D) : a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D) {}
    
        int get_a()  { return a; }
        int get_b()  { return b; }
        int get_c()  { return c; }
        int get_d()  { return d; }
        int get_A()  { return A; }
        int get_B()  { return B; }
        int get_C()  { return C; }
        int get_D()  { return D; }
        
    };

    class Parallelogram : public Quadrilateral {
    public:
        Parallelogram(int a, int b, int A, int B) : Quadrilateral(a, b, a, b, A, B, A, B) {}
    };

    class Rectangl : public Quadrilateral {
    public:
        Rectangl(int a, int b) : Quadrilateral(a, b, a, b, 90, 90, 90, 90) {}
    };

    class Square : public Rectangl {
    public:
        Square(int a) : Rectangl(a, a) {}
    };
    

    class Rhomb : public Parallelogram {
    public:
        Rhomb(int a, int A, int B) : Parallelogram(a, a, A, B) {}
    };

void print_info(Triangle* shape) {
    std::cout << "Стороны: a=" << shape->get_a() << " b=" << shape->get_b() << " c=" << shape->get_c() << std::endl;

    std::cout << "Углы: A=" << shape->get_A() << " B=" << shape->get_B() << " C=" << shape->get_C() << std::endl;
}

void print_info1(Quadrilateral* shape) {
    std::cout << "Стороны: a=" << shape->get_a() << " b=" << shape->get_b() << " c=" << shape->get_c() << " d=" << shape->get_d() << std::endl;

    std::cout << "Углы: A=" << shape->get_A() << " B=" << shape->get_B() << " C=" << shape->get_C() << " D=" << shape->get_D() << std::endl;
}


int main() {


       SetConsoleCP(1251);
       SetConsoleOutputCP(1251);
    
    Triangle triangle(10, 20, 30, 50, 60, 70);
    std::cout << "Треугольник:" << std::endl;
    print_info(&triangle);

    std::cout << std::endl;

    RightTriangle rightTriangle(10, 20, 30, 50, 60);
    std::cout << "Прямоугольный треугольник:" << std::endl;
    print_info(&rightTriangle);

    std::cout << std::endl;

    IsoscelesTriangle isoscelesTriangle(10, 20, 50, 60);
    std::cout << "Равнобедренный треугольник:" << std::endl;
    print_info(&isoscelesTriangle);

    std::cout << std::endl;

    EquilateralTriangle equilateralTriangle(10);
    std::cout << "Равносторонний треугольник:" << std::endl;
    print_info(&equilateralTriangle);

    std::cout << std::endl;

    Quadrilateral quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
    std::cout << "Четырехугольник:" << std::endl;
    print_info1(&quadrilateral);

    std::cout << std::endl;    


    Rectangl rectangl(10, 20);
    std::cout << "Прямоугольник:" << std::endl;
    print_info1(&rectangl);

    std::cout << std::endl;

    Parallelogram parallelogram(20, 30, 30, 40);
    std::cout << "Параллелограмм:" << std::endl;
    print_info1(&parallelogram); 

    std::cout << std::endl;

    Square squre(20);
    std::cout << "Квадрат:" << std::endl;
    print_info1(&squre);

    std::cout << std::endl;

    Rhomb rhomb(30, 40, 30);
    std::cout << "Ромб:" << std::endl;
    print_info1(&rhomb);

       return 0;
}