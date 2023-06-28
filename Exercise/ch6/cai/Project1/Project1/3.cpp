#include <iostream>

struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void show(box& b);
void set_v(box* pb);
void change(box& b);

//int main()
//{
//	box b = {
//		"ikun",
//		2.5,
//		2.5,
//		2.5,
//		2.5 * 2.5 * 2.5
//	};
//	change(b);
//	return 0;
//}

void show(box& b)
{
	using namespace std;
	cout << "Maker: " << b.maker << endl;
	cout << "Height is: " << b.height << endl;
	cout << "Width is: " << b.width << endl;
	cout << "Length is: " << b.length << endl;
	cout << "Volume is :" << b.volume << endl;
}

void set_v(box* pb)
{
	pb->volume = pb->height * pb->width * pb->length;
}

void change(box& b)
{
	using namespace std;
	cout << "Please input the new height: ";
	cin >> b.height;
	cout << "Please input the new width: ";
	cin >> b.width;
	cout << "Please input the new length: ";
	cin >> b.length;
	set_v(&b);
	show(b);
}