
#include <iostream>
#include <vector>
using namespace std;

/*
#define A 10

void sum(int *x, int *y, int *z)
{
    *z = *x + *y;
    cout << z << endl;
}

int main()
{
    int z;
    int a = A, b = 3;
    sum(&a,&b,&z); 
    cout << z << endl;
    return 0;
}


int main()
{
    struct X
    {
        int a = 1, b = 2;
    };

    struct Y
    {
        int a = 10, b = 20;
    };

    X X;
    Y Y;

    cout << X.a+X.b << endl;
    cout << Y.a+Y.b << endl;

    return 0;
}
*/

class abc
{
    int x,y;
    public:
        abc()
        {
            x = y = 5;
        }

        abc(int a)
        {
            y = x = a;
        }

        abc(int a, int b)
        {
            x = a; y = b;
        }

        abc(abc &n)
        {
            x = n.x; y = n.y;
        }

        void display()
        {
            cout << x << " " << y << endl;
        }
};

int main()
{
    abc x1;
    abc x2(1);
    abc x3(2,3);
    abc x4(x1);

    x1.display();
    x2.display();
    x3.display();
    x4.display();
    return 0;
}