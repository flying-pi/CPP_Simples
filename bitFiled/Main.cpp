#include <iostream>

struct test{
    unsigned int a;
    unsigned int b;
    unsigned int c;
};

struct test_FielField{
    unsigned int a:3;
    unsigned int b:3;
    unsigned int c:3;
};

int main() {
    test t1;
    t1.a = 2;
    t1.b = 3;
    t1.c = 5;

    test_FielField t2;
    t2.a = 2;
    t2.b = 3;
    t2.c = 5;

    std::cout << "size of simle struct " << sizeof(t1) << std::endl;
    std::cout << "\t"<<t1.a << "\t" <<t1.b << "\t" << t1.c<<std::endl;
    std::cout << "size of simle struct " << sizeof(t2) << std::endl;
    std::cout << "\t"<<t2.a << "\t" <<t2.b << "\t" << t2.c;
    return 0;
}