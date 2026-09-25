#include <iostream>
using namespace std;

struct Student
{
	char name[50];
	int id;
	float score;
};

void input(Student* p)
{
	cout << "name: ";
	cin >> p->name;

	cout << "id: ";
	cin >> p->id;

	cout << "score: ";
	cin >> p->score;

}

void display(Student* p)
{
	cout << "name: " << p->name << endl;
	cout << "id: " << p->id << endl;
	cout << "score: " << p->score << endl;
}

int main()
{
	Student* p = new Student;

	input(p);

	display(p);

	delete p;

	return 0;

}