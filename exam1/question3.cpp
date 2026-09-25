#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
    string color;
    int number;

public:
    Car(string c, int n)
    {
        color = c;
        number = n;
    }

    ~Car()
    {
    }

    void display()
    {
        cout << "color: " << color << endl;
        cout << "number: " << number << endl;
    }
};

int main()
{
    Car car1("red", 123);
    Car car2("blue", 456);

    car1.display();
    car2.display();

    return 0;
}