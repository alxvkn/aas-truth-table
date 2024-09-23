#include <iostream>
#include <cstdio>

int main (int argc, char *argv[]) {
    bool a, b;

    std::cout << " A     | B     | \"И\"   | \"ИЛИ\" | \"И-НЕ\" |  \"ИЛИ-НЕ\" | \"ИСКЛЮЧАЮЩЕЕ ИЛИ\"" << std::endl;

    a = 0, b = 0;
    printf(" %d     | %d     | %d     | %d     | %d      | %d         | %d     \n", a, b,  a and b, a or b, not (a and b), not (a or b), a != b);

    a = 0, b = 1;
    printf(" %d     | %d     | %d     | %d     | %d      | %d         | %d     \n", a, b,  a and b, a or b, not (a and b), not (a or b), a != b);

    a = 1, b = 0;
    printf(" %d     | %d     | %d     | %d     | %d      | %d         | %d     \n", a, b,  a and b, a or b, not (a and b), not (a or b), a != b);

    a = 1, b = 1;
    printf(" %d     | %d     | %d     | %d     | %d      | %d         | %d     \n", a, b,  a and b, a or b, not (a and b), not (a or b), a != b);

    return 0;
}
