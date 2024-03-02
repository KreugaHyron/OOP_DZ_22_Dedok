#include <iostream>
using namespace std;
class Square {
protected:
	double side;
public:
	Square(double s) : side(s) {}
	double getSide() const {
		return side;
	}
	double getArea() const {
		return side * side;
	}
};
class Circle : public Square {
public:
	Circle(double diameter) : Square(diameter) {}
	double getDiameter() const {
		return side;
	}
	double getRadius() const {
		return side / 2;
	}
	double getArea() const {
		return 3.14 * side * side;
	}
};
class Wheels {
protected:
	int numberofwheels;
public:
	Wheels(int num) : numberofwheels(num) {}
	int getWheels() const {
		return numberofwheels;
	}
};
class Engine {
protected:
	int horsepower;
public:
	Engine(int hp) : horsepower(hp) {}
	int getHorsepower() const {
		return horsepower;
	}
};
class Doors {
protected:
	int numberofdoors;
public:
	Doors(int num) : numberofdoors(num) {}
	int getDoors() const {
		return numberofdoors;
	}
};
class Car : public Wheels, public Engine, public Doors {
public:
	Car(int wheels, int hp, int doors) : Wheels(wheels), Engine(hp), Doors(doors) {}
	void print() const {
		cout << "Number of wheels: " << getWheels() << endl;
		cout << "Horsepower: " << getHorsepower() << endl;
		cout << "Number of doors: " << getDoors() << endl;
	}
};
int main()
{
	//Task1
	Circle circle(5);
	cout << "Diameter: " << circle.getDiameter() << endl;
	cout << "Radius: " << circle.getRadius() << endl;
	cout << "Area: " << circle.getArea() << endl;
	cout << "Area of the square: " << circle.Square::getArea() << endl;
	cout << "\n";
	//Task2
	Car car(4, 200, 5);
	car.print();
	return 0;
}

