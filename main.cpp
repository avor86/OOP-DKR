#include <iostream>
#include "log.h"
#include "Vektor.h"
#include <sstream>
using namespace std;
int main()
{
	Vector vector1, vector2;
	Logger logs("logs.txt");
	logs.Write("Program start");
	while (1)
	{
		Vector sum_of_vectos, substruction_of_vectos;
		int choice = -1, value = 0;
		cout << "What do you want to do?" << endl;
		cout << "1 - Set or get values of vector" << endl;
		cout << "2 - Calculate module of vector" << endl;
		cout << "3 - Mutiply values of vector by a number" << endl;
		cout << "4 - Calculate dot product of two vectors" << endl;
		cout << "5 - Get sum of vectors" << endl;
		cout << "6 - Subtract two vectors" << endl;
		cout << "7 - Check if vectors are collinear" << endl;
		cout << "8 - Checkif vectors are orthogonal" << endl;
		cout << "9 - encryption/decryption" << endl;
		cout << "10 - open logs" << endl;
		cout << "11 - Exit" << endl;
		cin >> choice;
		while (choice < 0 || choice>11)
		{
			cout << "Wrong, choose number between 1 and 11" << endl;
			cin >> choice;
		}
		system("CLS");
		if (choice == 11)
		{
			break;
		}
		else
		{
			switch (choice)
			{
			case 1:
				while (1)
				{
					choice = -1;
					cout << "What do you want to do?" << endl;
					cout << "1 - Set value" << endl;
					cout << "2 - Get value" << endl;
					cout << "3 - Exit" << endl;
					cin >> choice;
					while (choice < 0 || choice>3)
					{
						cout << "Wrong, choose number between 1 and 3" << endl;
						cin >> choice;
					}
					system("CLS");
					if (choice == 3)
					{
						break;
					}
					else
					{
						switch (choice)
						{
						case 1:
							while (1)
							{
								choice = -1;
								cout << "What vector do you want to set values for" << endl;
								cout << "1 - Vector 1" << endl;
								cout << "2 - Vector 2" << endl;
								cout << "3 - Back" << endl;
								cin >> choice;
								while (choice < 0 || choice>3)
								{
									cout << "Wrong, choose number between 1 and 3" << endl;
									cin >> choice;
								}
								system("CLS");
								if (choice == 3)
								{
									break;
								}
								else
								{
									switch (choice)
									{
									case 1:
										while (1)
										{
											cout << "What do you want to set" << endl;
											cout << "1 - Set X" << endl;
											cout << "2 - Set Y" << endl;
											cout << "3 - Back" << endl;
											choice = -1;
											cin >> choice;
											while (choice < 0 || choice>3)
											{
												cout << "Wrong, choose number between 1 and 3" << endl;
												cin >> choice;
											}
											system("CLS");
											if (choice == 3)
											{
												break;
											}
											else
											{
												int value = 0;
												switch (choice)
												{
												case 1:
													cout << "What value do you want to change X for:";
													cin >> value;
													vector1.Set_x(value);
													logs.Write("Set value X of Vector 1");
													break;
												case 2:
													cout << "What value do you want to change Y for:";
													cin >> value;
													vector1.Set_y(value);
													logs.Write("Set value Y of Vector 1");
													break;
												}
												system("CLS");
											}
										}
										break;
									case 2:
										while (1)
										{
											cout << "What do you want to change" << endl;
											cout << "1 - Set X" << endl;
											cout << "2 - Set Y" << endl;
											cout << "3 - Back" << endl;
											choice = -1;
											cin >> choice;
											while (choice < 0 || choice>3)
											{
												cout << "Wrong, choose number between 1 and 3" << endl;
												cin >> choice;
											}
											system("CLS");
											if (choice == 3)
											{
												break;
											}
											else
											{
												switch (choice)
												{
												case 1:
													cout << "What value do you want to change X for:";
													cin >> value;
													vector2.Set_x(value);
													logs.Write("changed value X of Vector 2");
													break;
												case 2:
													cout << "What value do you want to change Y for:";
													cin >> value;
													vector2.Set_y(value);
													logs.Write("Set value Y of Vector 2");
													break;
												}
												system("CLS");
											}
										}
										break;
									}
								}
							}
							break;
						case 2:
							while (1)
							{
								choice = -1;
								cout << "What vector do you want to get values from" << endl;
								cout << "1 - Vector 1" << endl;
								cout << "2 - Vector 2" << endl;
								cout << "3 - Back" << endl;
								cin >> choice;
								while (choice < 0 || choice>3)
								{
									cout << "Wrong, choose number between 1 and 3" << endl;
									cin >> choice;
								}
								system("CLS");
								if (choice == 3)
								{
									break;
								}
								else
								{
									switch (choice)
									{
									case 1:
										cout << "Vector 1 has the following values:" << endl;
										cout << "X: " << vector1.Get_x() << endl;
										cout << "Y: " << vector1.Get_y() << endl;
										logs.Write("Got values of Vector 1");
										break;
									case 2:
										cout << "Vector 2 has the following values:" << endl;
										cout << "X: " << vector2.Get_x() << endl;
										cout << "Y: " << vector2.Get_y() << endl;
										logs.Write("Got values of Vector 2");
										break;
									}
									system("pause");
									system("CLS");
								}
							}
							break;
						}

					}
				}
				break;
			case 2:
				choice = -1;
				cout << "What vector do you want to calculate module for?" << endl;
				cout << "1 - Vector 1" << endl;
				cout << "2 - Vector 2" << endl;
				cout << "3 - Back" << endl;
				cin >> choice;
				while (choice < 0 || choice>3)
				{
					cout << "Wrong, choose number between 1 and 3" << endl;
					cin >> choice;
				}
				system("CLS");
				if (choice == 3)
				{
					break;
				}
				else
				{
					switch (choice)
					{
					case 1:
						cout << "Module of vector 1:" << vector1.Calculate_Module() << endl;
						logs.Write("Calculated module of Vector 1");
						break;
					case 2:
						cout << "Module of vector 2:" << vector2.Calculate_Module() << endl;
						logs.Write("Calculated module of Vector 2");
						break;
					}
					system("pause");
					system("CLS");
				}
				break;
			case 3:
				choice = -1;
				cout << "For what vector do you want to multiply values?" << endl;
				cout << "1 - Vector 1" << endl;
				cout << "2 - Vector 2" << endl;
				cout << "3 - Back" << endl;
				cin >> choice;
				while (choice < 0 || choice>3)
				{
					cout << "Wrong, choose number between 1 and 3" << endl;
					cin >> choice;
				}
				system("CLS");
				if (choice == 3)
				{
					break;
				}
				else
				{
					switch (choice)
					{
					case 1:
						cout << "What value do you want to multiply values of vector 1 by:";
						cin >> value;
						vector1.Number_Multiplication(value);
						cout << "Than our values look like this:" << endl;
						cout << "X:" << vector1.Get_x() << endl;
						cout << "Y:" << vector2.Get_y() << endl;
						logs.Write("Multiplyed values of Vector 1");
						break;
					case 2:
						cout << "What value do you want to multiply values of vector 2 by:";
						cin >> value;
						vector2.Number_Multiplication(value);
						cout << "Than our values look like this:" << endl;
						cout << "X:" << vector2.Get_x() << endl;
						cout << "Y:" << vector2.Get_y() << endl;
						logs.Write("Multiplyed values of Vector 2");
						break;
					}
					system("pause");
					system("CLS");
				}
				break;
			case 4:
				cout << "Dot product of two vectors:" << vector1.Calculate_Dot_Product(vector2) << endl;
				logs.Write("Got do product of two vectors");
				break;
			case 5:
				sum_of_vectos = vector1.Add_Vectors(vector2);
				cout << "Sum of vectors:" << endl;
				cout << "X:" << sum_of_vectos.Get_x() << endl;
				cout << "Y:" << sum_of_vectos.Get_y() << endl;
				logs.Write("Calculated sum of vectors");
				system("pause");
				system("CLS");
				break;
			case 6:
				substruction_of_vectos = vector1.Subtract_Vectors(vector2);
				cout << "Substruction of vectors:" << endl;
				cout << "X:" << substruction_of_vectos.Get_x() << endl;
				cout << "Y:" << substruction_of_vectos.Get_y() << endl;
				logs.Write("Calculated substruction of vectors");
				system("pause");
				system("CLS");
				break;
			case 7:
				cout << "Vectors are ";
				vector1.Check_If_Collinear(vector2);
				system("pause");
				system("CLS");
				logs.Write("Checked if vectors are collinear");
				break;
			case 8:
				cout << "Vectors are ";
				vector1.Check_If_Orthogonal(vector2);
				system("pause");
				system("CLS");
				logs.Write("Checked if vectors are orthogonal");
				break;
			case 9:
				while (1)
				{
					choice = -1;
					cout << "What do you want"<<endl;
					cout << "1-Encrypt" << endl;
					cout << "2-Decrypt" << endl;
					cout << "3-Exit" << endl;
					cin >> choice;
					while (choice < 0 || choice>3)
					{
						cout << "Wrong, choose number between 1 and 3" << endl;
						cin >> choice;
					}
					system("CLS");
					if (choice == 3)
					{
						break;
					}
					else
					{
						switch (choice)
						{
						case 1:
							while (1)
							{
								cout << "What vector do you want to encrypt" << endl;
								cout << "1 - Vector 1" << endl;
								cout << "2 - Vector 2" << endl;
								cout << "3-Exit" << endl;
								cin >> choice;
								while (choice < 0 || choice>3)
								{
									cout << "Wrong, choose number between 1 and 3" << endl;
									cin >> choice;
								}
								system("CLS");
								if (choice == 3)
								{
									break;
								}
								else
								{
									switch (choice)
									{
									case 1:
										vector1.File_encrypt();
										logs.Write("Encrypted vector 1");
										break;
									case 2:
										vector2.File_encrypt();
										logs.Write("Encrypted vector 2");
										break;
									}
									cout << "Done" << endl;
									system("pause");
									system("CLS");
									break;
								}
							}
							break;
						case 2:
							while (1)
							{
								cout << "In what vector should decrypted values go" << endl;
								cout << "1 - Vector 1" << endl;
								cout << "2 - Vector 2" << endl;
								cout << "3-Exit" << endl;
								cin >> choice;
								while (choice < 0 || choice>3)
								{
									cout << "Wrong, choose number between 1 and 3" << endl;
									cin >> choice;
								}
								system("CLS");
								if (choice == 3)
								{
									break;
								}
								else
								{
									switch (choice)
									{
									case 1:
										vector1.File_decrypt();
										cout << "Values of vector1:" << endl;
										cout << "X:" << vector1.Get_x() << endl;
										cout << "Y:" << vector1.Get_y() << endl;
										logs.Write("Decrypted file into vector 1");
										break;
									case 2:
										vector2.File_decrypt();
										cout << "Values of vector2:" << endl;
										cout << "X:" << vector2.Get_x() << endl;
										cout << "Y:" << vector2.Get_y() << endl;
										logs.Write("Decrypted file into vector 2");
										break;
									}
									system("pause");
									system("CLS");
								}
							}
							break;
						}
					}
				}
				break;
			}
		}
	}
	logs.Write("Program end");
	return 0;
}
