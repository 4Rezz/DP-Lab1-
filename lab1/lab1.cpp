#include <iostream>

using namespace std;

void zavdannia1()
{
    cout << "Z: 1" << endl;
    bool p, q;
    cout << "Value of p: "; cin >> p;
    cout << "Value of q: ";  cin >> q;
    if (p == true && q == true) //кон’юнкції
        cout << "p and q: true" << endl;
    else cout << "p and q: false" << endl;

    if (p == true || q == true) //диз’юнкції
        cout << "p or q: true" << endl;
    else cout << "p or q: false" << endl;

    if (p == true ^ q == true) //альтернативного «або»
        cout << "p xor q: true" << endl;
    else cout << "p xor q: false" << endl;

    if (!p == true || q == true) //імплікації p -> q
        cout << "p -> q: true" << endl;
    else cout << "p -> q: false" << endl;

    if (p == true || !q == true) //імплікації q -> p
        cout << "q -> p: true" << endl;
    else cout << "q -> p: false" << endl;

    if ((!p == true || q == true) && (p == true || !q == true)) //еквіваллентності p ~ q
        cout << "p ~ q: true" << endl;
    else cout << "p ~ q: false" << endl;

    }
void print(int* x)
{
    for (int i = 0; i < 8; i++)
        cout << x[i];
    cout << endl;
}
void oper_or(int* f, int* s, int* operation)
{
    for (int i = 0; i < 8; i++)
    {
        if (f[i] == 1 || s[i] == 1)
            operation[i] = 1;
        else
            operation[i] = 0;
    }
}
void oper_and(int* f, int* s, int* operation)
{
    for (int i = 0; i < 8; i++)
    {
        if (f[i] == 1 && s[i] == 1)
            operation[i] = 1;
        else
            operation[i] = 0;
    }
}
void oper_xor(int* f, int* s, int* operation)
{
    for (int i = 0; i < 8; i++)
    {
        if (f[i] == 1 && s[i] == 1 || f[i] == 0 && s[i] == 0)
            operation[i] = 0;
        else
            operation[i] = 1;
    }
}
    void zavdannia2()
    {
        cout << endl << "Z: 2" << endl;
        const int n = 8;
        int f[n] = { 1, 1, 0, 0, 1, 0, 1, 0 };
        int s[n] = { 0, 1, 0, 1, 0, 0, 1, 1 };
        int operation[n];
        print(f);
        print(s);
        cout << "or:" << endl;
        oper_or(f, s, operation);
        print(operation);
        cout << "and:" << endl;
        oper_and(f, s, operation);
        print(operation);
        cout << "xor:" << endl;
        oper_xor(f, s, operation);
        print(operation);
    }

int main()
{
    //завдання 1
    zavdannia1();

    //завдання 2
    zavdannia2();
}