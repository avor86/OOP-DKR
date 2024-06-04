#ifndef VECTOR_H
#define VECTOR_H
class Vector {
private:
	double x;
	double y;
public:
	Vector(double x = 0, double y = 0) :x(x), y(y) {}
	double Get_x();
	double Get_y();
	void Set_x(double);
	void Set_y(double);
	double Calculate_Module();
	double Calculate_Dot_Product(Vector& Another_Vector);
	Vector Add_Vectors(Vector& Another_Vector);
	Vector Subtract_Vectors(Vector& Another_Vector);
	Vector Number_Multiplication(double Number);
	void Check_If_Collinear(Vector& Another_Vector);
	void Check_If_Orthogonal(Vector& Another_Vector);
	void File_encrypt();
	void File_decrypt();
};
#endif