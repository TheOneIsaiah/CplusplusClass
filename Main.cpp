//Rectabgl Area (Assignment 2 c++)
//Isaiah Doran

#include <iostream>
#include <conio.h>

using namespace std;

int GetWidthFromUser();
int GetLenghtFromUser();
int CalculateArea(int width, int length);
void DisplayArea(int area);

int main() {

	int width = GetWidthFromUser();
	int length = GetLenghtFromUser();
	int area = CalculateArea(width, length);
	DisplayArea(area);


	(void)_getch();
	return 0;
}

int GetWidthFromUser() {
	int width = 0;
	cout << "Enter the Width of the rectangle: ";
	cin >> width;

	return width;
}

int GetLenghtFromUser() {
	int length = 0;
	cout << "Enter the length of the rectangle: ";
	cin >> length;

	return length;
}

int CalculateArea(int width, int length ) {

	return length * width; //area of a rectangle is just length times width not x .5 thats for a triangle

}

void DisplayArea(int area) {

	cout << "Your rectangle has an area of " << area << ".";
}