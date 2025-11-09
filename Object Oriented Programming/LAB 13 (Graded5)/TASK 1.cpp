// TASK 1 

#include <iostream>
using namespace std;

//Base Class (SHAPE)
class Shape {
protected:
	int width, height;
public:
	Shape(int a = 0, int b = 0){
		width = a;
		height = b;
	}
	virtual int area() {            // Runtime Polymorphism (overide by derive classes below)
		cout << "Area :  " << width * height << endl;
		return width * height;
	}
	virtual ~Shape(){}
};

// Square
class Square : public Shape {
public:
	Square(int a = 0, int b = 0) :Shape(a, b) { }
	int area() {
		cout << "Square : " << width * width << endl;
		return (width * width);
	}
	virtual ~Square(){}
};

// Rectangle
class Rectangle : public Shape {
public:
	Rectangle(int a = 0, int b = 0) :Shape(a, b) { }

	int area() {
		cout << "Rectangle : " << width * height << endl;
		return (width * height);
	}
	virtual ~Rectangle(){}
};

// Triangle
class Triangle : public Shape {
public:
	Triangle(int a = 0, int b = 0) :Shape(a, b) { }

	int area() {
		cout << "Triangle : " << (width * height) / 2 << endl;
		return (width * height / 2);
	}
	virtual ~Triangle(){}
};


// Circle
class Circle : public Shape {
public:
	Circle(int a = 0, int b = 0) :Shape(a, b) { }

	int area() {
		cout << "Circle : " << 3.142*(width*width) << endl;
		return (width * height);
	}
	virtual ~Circle(){}
};

// Rectangle
class Rhombus : public Shape {
public:
	Rhombus(int a = 0, int b = 0) :Shape(a, b) { }

	int area() {
		cout << "Rhombus : " << (width * height)+2 << endl;
		return (width * height);
	}
	virtual ~Rhombus(){}
};

int main() {
	Shape *shape;
	Rectangle rec(10, 7);
	Triangle  tri(10, 5);
	Square    squ(3, 3);
	Circle    cir(3);
	Rhombus   rho(3,3);
	
	//delete shape;

    cout<<"Area of : ";
    cout<<"_____________________\n"<<endl;
    
	shape = &squ;    // Adress of Shape obj
	shape->area();  // Using THIS-> calling virtual function of basecalass for each object
    //delete squ;
    
	shape = &rec;
	shape->area();
    //delete rec;

	shape = &tri;
	shape->area();
    //delete tri;

	shape = &cir;
	shape->area();
	//delete cir;
	
	shape = &rho;
	shape->area();
    //delete rho;
    
	return 0;
}