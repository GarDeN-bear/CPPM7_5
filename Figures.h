#pragma once
#include <iostream>

// ����� ������
class Figure {
public:
	void get_sides_count() {
		std::cout << name << ": " << sides_count << "\n";
	}
	virtual void print_info() {
		std::cout << name << ":\n";
		if (check() == 1) {
			std::cout << "����������" << "\n";
		}
		std::cout << "���������� ������: " << sides_count << "\n";
		std::cout << "\n";
	}
	virtual bool check() {
		return 1;
	}
	virtual void get_info() {
		std::cout << name << ":\n";
		std::cout << "���������� ������: " << sides_count << "\n";
		std::cout << "\n";
	}
protected:
	std::string name = "������";
	int sides_count = 0;
};

// ����� �����������
class Triangle : public Figure {
public:
	Triangle() {
		name = "�����������";
		sides_count = 3;
		a = 0;
		b = 0;
		c = 0;
		A = 0;
		B = 0;
		C = 0;
	}
	Triangle(double a_, double b_, double c_, double A_, double B_, double C_) {
		name = "�����������";
		sides_count = 3;
		a = a_;
		b = b_;
		c = c_;
		A = A_;
		B = B_;
		C = C_;
	}
	void get_info() override {
		std::cout << name << ":\n";
		std::cout << "�������: " << "a=" << a
			<< " b=" << b << " c=" << c << "\n";
		std::cout << "����: " << "A=" << A
			<< " B=" << B << " C=" << C << "\n";
		std::cout << std::endl;
	}
	virtual void print_info() override { 
		std::cout << name << ":\n";
		if (check() == true) {
			std::cout << "����������" << "\n";
		}
		else {
			std::cout << "������������" << "\n";
		}
		std::cout << "���������� ������: " << sides_count << "\n";
		get_info();
	}
	virtual bool check() override {
		if (A + B + C == 180) {
			return 1;
		}
		else {
			return 0;
		}
	}
protected:
	double a, b, c;
	double A, B, C;
};

//������������� �����������
class RightTriangle : public Triangle {
public:
	RightTriangle(double a_, double b_, double c_, double A_, double B_) {
		name = "������������� �����������";
		a = a_;
		b = b_;
		c = c_;
		A = A_;
		B = B_;
		C = 90;
	}
};

//�������������� �����������
class IsoscelesTriangle : public Triangle {
public:
	IsoscelesTriangle(double a_, double b_, double A_, double B_) {
		name = "�������������� �����������";
		a = a_;
		b = b_;
		c = a;
		A = A_;
		B = B_;
		C = A;
	}
};

//�������������� �����������
class EquilateralTriangle : public Triangle {
public:
	EquilateralTriangle(double a_, double A_) {
		name = "�������������� �����������";
		a = a_;
		b = a;
		c = a;
		A = A_;
		B = A;
		C = A;
	}
};

// ����� ��������������
class Quadrilateral : public Figure {
public:
	Quadrilateral() {
		name = "��������������";
		sides_count = 4;
		a = 0;
		b = 0;
		c = 0;
		A = 0;
		B = 0;
		C = 0;
	}
	Quadrilateral(double a_, double b_, double c_, double d_, double A_, double B_, double C_, double D_) {
		name = "��������������";
		sides_count = 4;
		a = a_;
		b = b_;
		c = c_;
		d = d_;
		A = A_;
		B = B_;
		C = C_;
		D = D_;
	}
	void get_info() override {
		std::cout << name << ":\n";
		std::cout << "�������: " << "a=" << a
			<< " b=" << b << " c=" << c << " d=" << d << "\n";
		std::cout << "����: " << "A=" << A
			<< " B=" << B << " C=" << C << " D=" << D << "\n";
		std::cout << std::endl;
	}

	virtual void print_info() override {
		std::cout << name << ":\n";
		if (check() == true) {
			std::cout << "����������" << "\n";
		}
		else {
			std::cout << "������������" << "\n";
		}
		std::cout << "���������� ������: " << sides_count << "\n";
		get_info();
	}
	virtual bool check() override {
		if (A + B + C + D == 360) {
			return 1;
		}
		else {
			return 0;
		}
	}
protected:
	double a, b, c, d;
	double A, B, C, D;
};

//�������������
class Rectangle : public Quadrilateral {
public: 
	Rectangle(double a_, double b_) {
		name = "�������������";
		a = a_;
		b = b_;
		c = a;
		d = b;
		A = 90;
		B = A;
		C = A;
		D = A;
	}
};

//�������
class Square : public Quadrilateral {
public:
	Square(double a_) {
		name = "�������";
		a = a_;
		b = a;
		c = a;
		d = a;
		A = 90;
		B = A;
		C = A;
		D = A;
	}
};

// ��������������
class Parallelogram : public Quadrilateral {
public:
	Parallelogram(double a_, double b_, double A_, double B_) {
		name = "��������������";
		a = a_;
		b = b_;
		c = a;
		d = b;
		A = A_;
		B = B_;
		C = A;
		D = B;
	}
};

//����
class Rhombus : public Quadrilateral {
public:
	Rhombus(double a_, double A_, double B_) {
		name = "����";
		a = a_;
		b = a;
		c = a;
		d = a;
		A = A_;
		B = B_;
		C = A;
		D = B;
	}
};