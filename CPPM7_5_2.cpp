#include "CPPM7_5_2.h"

void print_info(Triangle* figure) {
	figure->get_info();
}
void print_info(Quadrilateral* figure) {
	figure->get_info();
}

void CPPM7_5_2() {
	Triangle triangle(10, 20, 30, 50, 60, 70);
	print_info(&triangle);
	RightTriangle rightTriangle(10, 20, 30, 50, 60);
	Triangle* ptr_rightTriangle = &rightTriangle;
	print_info(ptr_rightTriangle);
	IsoscelesTriangle isoscelesTriangle(10, 20, 50, 60);
	Triangle* ptr_isoscelesTriangle = &isoscelesTriangle;
	print_info(ptr_isoscelesTriangle);
	EquilateralTriangle equilateralTriangle(30, 60);
	Triangle* ptr_equilateralTriangle = &equilateralTriangle;
	print_info(ptr_equilateralTriangle);
	Quadrilateral quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
	print_info(&quadrilateral);
	Rectangle rectangle(10, 20);
	Quadrilateral* ptr_rectangle = &rectangle;
	print_info(ptr_rectangle);
	Square square(20);
	Quadrilateral* ptr_square = &square;
	print_info(ptr_square);
	Parallelogram parallelogram(20, 30, 30, 40);
	Quadrilateral* ptr_parallelogram = &parallelogram;
	print_info(ptr_parallelogram);
	Rhombus rhombus(30, 30, 40);
	Quadrilateral* ptr_rhombus = &rhombus;
	print_info(ptr_rhombus);
}
