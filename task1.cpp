#include<iostream>
using namespace std;
class rectangle
{
private:
	int length;
	int width;
	int area;
public:
	rectangle()
	{
		length = 0;
		width = 0;
		area = 0;
	}
	rectangle(int length, int width)
	{
		this->length = length;
		this->width = width;
	}
	void set_length(int length)
	{
		if (length <= 0)
		{
			cout << "length should be greater than 0" << endl;
		}
		else
		{
			this->length = length;
		}
	}
	void set_width(int width)
	{
		if (width <= 0 )
		{
			cout << "width should be greater than 0" << endl;
		}
		else
		{
			this->width = width;
		}
	}
	void calculate_area(int len, int width)
	{
		area = len * width;
	}
	int get_len()
	{
		return length;
	}
	int get_width()
	{
		return width;
	}
	int get_area()
	{
		return area;
	}
	void set_values(int length, int width)
	{
		this->length = length;
		this->width = width;
		area = length * width;
	}
	bool is_square()
	{
		if (length == width)
		{
			return true;
		}
		return false;
	}
	void display(int l , int w)
	{
		for (int i = 0; i < l; i++)
		{
			for (int j = 0; j < w; j++)
			{
				cout << "0";
			}
			cout << endl;
		}
	}
};
class cuboid
{
private:
	int length;
	int width;
	int height;
	int area;
	int volume;
public:
	cuboid(int length, int width, int height)
	{
		this->length = length;
		this->width = width;
		this->height = height;
	}
	void set_length(int length)
	{
		if (length <= 0)
		{
			cout << "length should be greater than 0" << endl;
		}
		else
		{
			this->length = length;
		}
	}
	void set_width(int width)
	{
		if (width <= 0)
		{
			cout << "width should be greater than 0" << endl;
		}
		else
		{
			this->width = width;
		}
	}
	void set_height(int height)
	{
		if (height <= 0)
		{
			cout << "height should be greater than 0" << endl;
		}
		else
		{
			this->height = height;
		}
	}
	cuboid(const cuboid& obj1)
	{
		this->length = obj1.length;
		this->width = obj1.width;
		this->height = obj1.height;
	}
	int get_len()
	{
		return length;
	}
	int get_width()
	{
		return width;
	}
	int get_height()
	{
		return height;
	}
	void cal_area(int l, int w)
	{
		area = l * w;
	}
	void cal_volume(int l, int w, int h)
	{
		volume = l * w * h;
	}
	void display()
	{
		cout << "length of cube is: " << length << endl;
		cout << "width of cube is: " << width << endl;
		cout << "height of cube is: "<<height << endl;
	}
	bool is_cube()
	{
		if (length == width == height)
		{
			return true;
		}
		return false;
	}
};
int main()
{
	int l, w, choice;
	int l1, w1, h;
	cout << "enter length of rectangle" << endl;
	cin >> l;
	cout << "enter width of rectangle" << endl;
	cin >> w;
	cout << "enter length of cuboid" << endl;
	cin >> l1;
	cout << "enter width of cuboid" << endl;
	cin >> w1;
	cout << "enter height of cuboid" << endl;
	cin >> h;
	rectangle r1;
	rectangle r2(3, 9);
	r1.calculate_area(l, w);
	cuboid c1;
	cuboid c2(l1 w1, h);
	c2.set_length(10);
	c2.set_width(10);
	c2.set_height(10);
	while (choice != -1)
	{
		cout << "-----{ enter choice}-----" << endl;
		cout << "1 for rectangle area calculation" << endl;
		cout << "2 for get the length and width of rectangle" << endl;
		cout << "3 to know if it is a square" << endl;
		cout << "4 to display rectangle using 0" << endl;
		cout << "5 to get the values of length , width and height " << endl;
		cout << "6 for the volume of the cube" << endl;
		cout << "7 to know if it is a cube" << endl;
		cout << "-1 to exit the program" << endl;
		cin >> choice;
		if (choice == 1)
		{
			cout << r1.get_area() << endl;
		}
		if (choice == 2)
		{
			cout << "length of rectangle 1 is: " << r1.get_len << endl;
			cout << "width of rectangle 1 is: " << r1.get_width << endl;
		}
		if (choice == 3)
		{
			cout << "do entered values make a square : " << r1.is_square() << endl;
		}
		if (choice == 4)
		{
			r1.display(l, w);
		}
		if (choice == 5)
		{
			c2.display();
		}
		if (choice == 6)
		{
			cout << "volume of the cuboid is:" << c2.cal_volume << endl;
		}
		if (choice == 7)
		{
			cout << "do entered values make a cube: " << c2.is_cube << endl;
		}
		if (choice == -1)
		{
			break;
		}
	}
	system("pause");
	return 0;
}