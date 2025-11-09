#include<iostream>
using namespace std;

// Base Class Triangle
class triangle 
{
protected:
	int *tl;
	int *tw;
public:
	triangle()
	{
		tl = new int;
		tw = new int;
	}
	triangle(int *l, int *w)
	{
		tl = l;
		tw = w;
	}
	void triangle_values(int *a, int *b)
	{
		tl = a;
		tw = b;
	}
};

//Base Class Square
class square
{
protected:
	int *sl;
	int *sw;
public:
	square()
	{
		
	}
	square(int *l, int *w)
	{
		sl= l;
		sw = w;
	}
	void square_values(int *a, int *b)
	{
		sl = a;
		sw = b;
	}
};

//Base Class Rectangle
class rectangle
{
protected:
	int *rl;
	int *rw;
public:
	rectangle()
	{
		
	}
	rectangle(int *l, int *w)
	{
		rl = l;
		rw = w;
	}
	void rectangle_values(int *a, int *b)
	{
		rl = a;
		rw = b;
	}
};

//Base Class Circle
class circle
{
protected:
	int *radius;
public:
	circle()
	{}
	circle(int *r)
	{
		radius = r;
	}
	void circle_values(int *a)
	{
		radius = a;
	}
};

// Derive Class Shape for :: Tri,Sqr,Rect,Cir
class shape :public triangle, public square, public rectangle, public circle
{
public:
	void triangle_area()
	{
		cout << "Area of Triangle is : " << 0.5**tl**tw << endl;
	}
	void square_area()
	{
		cout << "Area of Square is : " << *sl**sw << endl;
	}
	void rectangle_area()
	{
		cout << "Area of Rectangle is : " << *rl**rw << endl;
	}
	void circle_area()
	{
		cout << "Area of Circle is : " << 3.14**radius << endl;
	}
};
int main()
{
	shape obj;
	int *a, *b;
	a = new int;
	b = new int;
	cout << "[ Triangle ] \nTriangle Length : ";
	cin >> *a;
	cout << "Triangle Width : ";
	cin >> *b;
	obj.triangle_values(a, b);
	obj.triangle_area();
	cout << "\n[ Square ] Square Length : ";
	cin >> *a;
	obj.square_values(a, a);
	obj.square_area();
	cout << "\n[ Rectangle ] \nRectangle Length : ";
	cin >> *a;
	cout << "Rectangle Width : ";
	cin >> *b;
	obj.rectangle_values(a, b);
	obj.rectangle_area();
	cout << "\n[ Circle ] \nRadius of Circle : ";
	cin >> *a;
	obj.circle_values(a);
	obj.circle_area();
	
	return 0;
}