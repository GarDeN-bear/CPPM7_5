#include "CPPM7_5_3.h"

void CPPM7_5_3() {
	Figure figure;
	figure.print_info();

	Triangle triangle(10, 20, 30, 50, 60, 70);
	Figure* Figure_triangle = &triangle;
	Figure_triangle->print_info();

	RightTriangle rightTriangle1(10, 20, 30, 50, 60);
	Figure* Figure_rightTriangle1 = &rightTriangle1;
	Figure_rightTriangle1->print_info();

	RightTriangle rightTriangle2(10, 20, 30, 50, 40);
	Figure* Figure_rightTriangle2 = &rightTriangle2;
	Figure_rightTriangle2->print_info();

	IsoscelesTriangle isoscelesTriangle(10, 20, 50, 60);
	Figure* Figure_isoscelesTriangle = &isoscelesTriangle;
	Figure_isoscelesTriangle->print_info();

	EquilateralTriangle equilateralTriangle(30, 60);
	Figure* Figure_equilateralTriangle = &equilateralTriangle;
	Figure_equilateralTriangle->print_info();

	Quadrilateral quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
	Figure* Figure_quadrilateral = &quadrilateral;
	Figure_quadrilateral->print_info();

	Rectangle rectangle(10, 20);
	Figure* Figure_rectangle = &rectangle;
	Figure_rectangle->print_info();

	Square square(20);
	Figure* Figure_square = &square;
	Figure_square->print_info();

	Parallelogram parallelogram(20, 30, 30, 40);
	Figure* Figure_parallelogram = &parallelogram;
	Figure_parallelogram->print_info();

	Rhombus rhombus(30, 30, 40);
	Figure* Figure_rhombus = &rhombus;
	Figure_rhombus->print_info();
}