// Homework_17.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class vector
{
public:
    vector() :
        a(0.0f),
        b(0.0f),
        c(0.0f)
    {
    }

    ~vector() = default;

    void SetVector(const double x, const double y, const double z)
    {
        a = x;
        b = y;
        c = z;
    }

    double GetModuleVector()
    {
        return sqrt(a * a + b * b + c * c);
    }

    void ShowVector()
    {
        std::cout << "A: " << a << " B: " << b << " C: " << c << '\n';
    }


private:
    double a;
    double b;
    double c;
};

int main()
{
    vector p1;
    vector p2;

    int n, m, b;
    std::cin >> n >> m >> b;

    p1.SetVector(n, m, b);
    p2.ShowVector();

    std::cout << "Module Vector: " << p1.GetModuleVector();
}