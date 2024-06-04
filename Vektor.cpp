#include "Vektor.h"
#include "log.h"
#include <iostream>
#include <cmath>
using namespace std;

double Vector::Get_x()
{ 
	return x;
}
double Vector::Get_y()
{ 
	return y;
}
void Vector::Set_x(double Value)
{
	x = Value;
}
void Vector::Set_y(double Value)
{
	y = Value;
}
double Vector::Calculate_Module()
{
	return(sqrt(x * x + y * y));
}
double Vector::Calculate_Dot_Product(Vector& Another_Vector)
{
	return(x* Another_Vector.x+y* Another_Vector.y);
}
Vector Vector::Number_Multiplication(double Number)
{

	return Vector(x * Number, y * Number);
}
Vector Vector::Add_Vectors(Vector& Another_Vector)
{

	return Vector(x + Another_Vector.x, y + Another_Vector.y);
}
Vector Vector::Subtract_Vectors(Vector& Another_Vector)
{

	return Vector(x - Another_Vector.x, y - Another_Vector.y);
}
void Vector::Check_If_Collinear(Vector& Another_Vector)
{
	if ((x / Another_Vector.x) == (y / Another_Vector.y))
	{
		cout << "collinear" << endl;
	}
	else
	{
		cout << "not collinear" << endl;
	}
}
void Vector::Check_If_Orthogonal(Vector& Another_Vector)
{
	if (Calculate_Dot_Product(Another_Vector)==0)
	{
		cout << "orthogonal" << endl;
	}
	else
	{
		cout << "not orthogonal" << endl;
	}
}
void Vector::File_encrypt()
{
	ofstream outFile("encryption.txt");
	if (outFile.is_open()) 
	{
		outFile << (x + 2) * 10 << " " << (y + 2) * 10;
		outFile.close();
	}
	else 
	{
		cout << "Unable to open file for writing" << endl;
	}
}
void Vector::File_decrypt()
{
	ifstream outFile("encryption.txt");
	if (outFile.is_open()) 
	{
		double temp_x, temp_y;
		outFile >> temp_x >>temp_y;
		outFile.close();
		x = (temp_x / 10) - 2;
		y = (temp_y / 10) - 2;
	}
	else 
	{
		cout << "Unable to open file for writing" << endl;
	}
}