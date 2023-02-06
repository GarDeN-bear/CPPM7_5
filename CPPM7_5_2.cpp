#include "CPPM7_5_2.h"

void CPPM7_5_2() {
	Triangle triangle(10, 20, 30, 50, 60, 70);
	triangle.get_info();
	RightTriangle rightTriangle(10, 20, 30, 50, 60);
	rightTriangle.get_info();
	IsoscelesTriangle isoscelesTriangle(10, 20, 50, 60);
	isoscelesTriangle.get_info();
	EquilateralTriangle equilateralTriangle(30, 60);
	equilateralTriangle.get_info();
	Quadrilateral quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
	quadrilateral.get_info();
	Rectangle rectangle(10, 20);
	rectangle.get_info();
	Square square(20);
	square.get_info();
	Parallelogram parallelogram(20, 30, 30, 40);
	parallelogram.get_info();
	Rhombus rhombus(30, 30, 40);
	rhombus.get_info();
}
template <typename T> void print_info(T &figure) {
	std::cout << figure.name << ":\n";
	figure.get_info();
}