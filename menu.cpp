#pragma once
#include "menu.h"
void menudouble(Mystring<double> A, Mystring<double> B)
{
	bool ex = true;
	int choise;
	while (ex)
	{
		std::cout << "1)" << A;
		std::cout << std::endl;
		std::cout << "2)" << B << std::endl;
		std::cout << "\n";
		std::cout << "Choise the menu item:" << std::endl;
		std::cout << "1)Changing an item by index" << std::endl;
		std::cout << "2)Equality check" << std::endl;
		std::cout << "3)Concotenation" << std::endl;
		std::cout << "4)Get the substring" << std::endl;
		std::cout << "5)Multiplying a string by number" << std::endl;
		std::cout << "6)Exit" << std::endl;
		std::cin >> choise;
		//system("cls");
		std::cout << "1)" << A << std::endl;
		std::cout << "2)" << B << std::endl;
		switch (choise)
		{

		case 1://Changing an item by index
		{
			int number;
			std::cout << "Which line would you like to change:" << std::endl;
			std::cin >> number;
			int index;
			double character;
			std::cout << "Enter the element index:" << std::endl;
			std::cin >> index;
			std::cout << "Enter the element:" << std::endl;
			std::cin >> character;
			system("cls");
			if (number == 1)
			{
				try
				{
					A[index] = character;
				}
				catch (const char* err)
				{
					std::cout << err << std::endl;
				}
			}
			if (number == 2)
			{
				try
				{
					B[index] = character;
				}
				catch (const char* err)
				{
					std::cout << err << std::endl;
				}
			}
			break;
		}

		case 2://Equality check
		{
			system("cls");
			if (A == B)
			{
				std::cout << "Strings are equal" << std::endl;
			}
			else
				std::cout << "Strings are not equal" << std::endl;
			break;
		}

		case 3://Concotenation
		{
			system("cls");
			Mystring<double> Result = A + B;
			std::cout << Result << " - Result string" << std::endl;

			break;
		}

		case 4://Get the substring
		{
			int number;
			std::cout << "Number of string,which you want to get substring:" << std::endl;
			std::cin >> number;
			int start;
			int stop;
			std::cout << "Enter the start index" << std::endl;
			std::cin >> start;
			std::cout << "Enter the lenght" << std::endl;
			std::cin >> stop;
			system("cls");
			if (number == 1)
			{
				try
				{
					Mystring<double> D = A(start,stop);
					std::cout << D << " - Result string" << std::endl;
				}
				catch (const char* err)
				{
					std::cout << err << std::endl;
				}
			}
			if (number == 2)
			{
				try
				{
					Mystring<double> D = B(start, stop);
					std::cout << D << " - Result string" << std::endl;
				}
				catch (const char* err)
				{
					std::cout << err << std::endl;
				}
			}
			break;
		}

		case 5://Multiplying a string by number
		{
			int number;
			int count;
			std::cout << "Which line would you like to multiplying:" << std::endl;
			std::cin >> number;
			std::cout << "Number to multiply:" << std::endl;
			std::cin >> count;
			system("cls");
			if (number == 1)
			{
				try
				{
					Mystring<double> D = A * count;
					std::cout << D << " - Result string" << std::endl;
				}
				catch (const char* err)
				{
					std::cout << err << std::endl;
				}
			}
			if (number == 2)
			{
				try
				{
					Mystring<double> D = B * count;
					std::cout << D << " - Result string" << std::endl;
				}
				catch (const char* err)
				{
					std::cout << err << std::endl;
				}
			}
			break;
		}

		case 6://Exit
		{
			system("cls");
			ex = false;
		}
		}
	}
}
void menuint(Mystring<int> A, Mystring<int> B)
{
	bool ex = true;
	int choise;
	while (ex)
	{
		std::cout << "1)" << A << std::endl;
		std::cout << "2)" << B << std::endl;
		std::cout << "\n";
		std::cout << "Choise the menu item:" << std::endl;
		std::cout << "1)Changing an item by index" << std::endl;
		std::cout << "2)Equality check" << std::endl;
		std::cout << "3)Concotenation" << std::endl;
		std::cout << "4)Get the substring" << std::endl;
		std::cout << "5)Multiplying a string by number" << std::endl;
		std::cout << "6)Exit" << std::endl;
		std::cin >> choise;
		//system("cls");
		std::cout << "1)" << A << std::endl;
		std::cout << "2)" << B << std::endl;
		switch (choise)
		{

		case 1://Changing an item by index
		{
			int number;
			std::cout << "Which line would you like to change:" << std::endl;
			std::cin >> number;
			int index;
			int character;
			std::cout << "Enter the element index:" << std::endl;
			std::cin >> index;
			std::cout << "Enter the element:" << std::endl;
			std::cin >> character;
			system("cls");
			if (number == 1)
			{
				try
				{
					A[index] = character;
				}
				catch (const char* err)
				{
					std::cout << err << std::endl;
				}
			}
			if (number == 2)
			{
				try
				{
					B[index] = character;
				}
				catch (const char* err)
				{
					std::cout << err << std::endl;
				}
			}
			break;
		}

		case 2://Equality check
		{
			system("cls");
			if (A == B)
			{
				std::cout << "Strings are equal" << std::endl;
			}
			else
				std::cout << "Strings are not equal" << std::endl;
			break;
		}

		case 3://Concotenation
		{
			system("cls");
			Mystring<int> Result = A + B;
			std::cout << Result << " - Result string" << std::endl;
			break;
		}

		case 4://Get the substring
		{
			int number;
			std::cout << "Number of string,which you want to get substring:" << std::endl;
			std::cin >> number;
			int start;
			int stop;
			std::cout << "Enter the start index" << std::endl;
			std::cin >> start;
			std::cout << "Enter the lenght" << std::endl;
			std::cin >> stop;
			system("cls");
			if (number == 1)
			{
				try
				{
					Mystring<int> D = A(start, stop);
					std::cout << D << " - Result string" << std::endl;
				}
				catch (const char* err)
				{
					std::cout << err << std::endl;
				}
			}
			if (number == 2)
			{
				try
				{
					Mystring<int> D = B(start, stop);
					std::cout << D << " - Result string" << std::endl;
				}
				catch (const char* err)
				{
					std::cout << err << std::endl;
				}
			}
			break;
		}

		case 5://Multiplying a string by number
		{
			int number;
			int count;
			std::cout << "Which line would you like to multiplying:" << std::endl;
			std::cin >> number;
			std::cout << "Number to multiply:" << std::endl;
			std::cin >> count;
			system("cls");
			if (number == 1)
			{
				try
				{
					Mystring<int> D = A * count;
					std::cout << D << " - Result string" << std::endl;
				}
				catch (const char* err)
				{
					std::cout << err << std::endl;
				}
			}
			if (number == 2)
			{
				try
				{
					Mystring<int> D = B * count;
					std::cout << D << " - Result string" << std::endl;
				}
				catch (const char* err)
				{
					std::cout << err << std::endl;
				}
			}
			break;
		}

		case 6://Exit
		{
			system("cls");
			ex = false;
			break;
		}
		}
	}
}
void menuchar(Mystring<char> A, Mystring<char> B)
{
	bool ex = true;
	int choise;
	while (ex)
	{
		std::cout << "1)" << A << std::endl;
		std::cout << "2)" << B << std::endl;
		std::cout << "\n";
		std::cout << "Choise the menu item:" << std::endl;
		std::cout << "1)Changing an item by index" << std::endl;
		std::cout << "2)Equality check" << std::endl;
		std::cout << "3)Concotenation" << std::endl;
		std::cout << "4)Get the substring" << std::endl;
		std::cout << "5)Multiplying a string by number" << std::endl;
		std::cout << "6)Exit" << std::endl;
		std::cin >> choise;
		//system("cls");
		std::cout << "1)" << A << std::endl;
		std::cout << "2)" << B << std::endl;
		switch (choise)
		{

		case 1://Changing an item by index
		{
			int number;
			std::cout << "Which line would you like to change:" << std::endl;
			std::cin >> number;
			int index;
			char character;
			std::cout << "Enter the element index:" << std::endl;
			std::cin >> index;
			std::cout << "Enter the element:" << std::endl;
			std::cin >> character;
			system("cls");
			if (number == 1)
			{
				try
				{
					A[index] = character;
				}
				catch (const char* err)
				{
					std::cout << err << std::endl;
				}
			}
			if (number == 2)
			{
				try
				{
					B[index] = character;
				}
				catch (const char* err)
				{
					std::cout << err << std::endl;
				}
			}
			break;
		}

		case 2://Equality check
		{
			system("cls");
			if (A == B)
			{
				std::cout << "Strings are equal" << std::endl;
			}
			else
				std::cout << "Strings are not equal" << std::endl;
			break;
		}

		case 3://Concotenation
		{
			system("cls");
			Mystring<char> Result = A + B;
			std::cout << Result << " - Result string" << std::endl;

			break;
		}

		case 4://Get the substring
		{
			int number;
			std::cout << "Number of string,which you want to get substring:" << std::endl;
			std::cin >> number;
			int start;
			int stop;
			std::cout << "Enter the start index" << std::endl;
			std::cin >> start;
			std::cout << "Enter the stop index" << std::endl;
			std::cin >> stop;
			system("cls");
			if (number == 1)
			{
				try
				{
					Mystring<char> D = A(start, stop);
					std::cout << D << " - Result string" << std::endl;
				}
				catch (const char* err)
				{
					std::cout << err << std::endl;
				}
			}
			if (number == 2)
			{
				try
				{
					Mystring<char> D = B(start,stop);
					std::cout << D << " - Result string" << std::endl;
				}
				catch (const char* err)
				{
					std::cout << err << std::endl;
				}
			}
			break;
		}

		case 5://Multiplying a string by number
		{
			int number;
			int count;
			std::cout << "Which line would you like to multiplying:" << std::endl;
			std::cin >> number;
			std::cout << "Number to multiply:" << std::endl;
			std::cin >> count;
			system("cls");
			if (number == 1)
			{
				try
				{
					Mystring<char> D = A * count;
					std::cout << D << " - Result string" << std::endl;
				}
				catch (const char* err)
				{
					std::cout << err << std::endl;
				}
			}
			if (number == 2)
			{
				try
				{
					Mystring<char> D = B * count;
					std::cout << D << " - Result string" << std::endl;
				}
				catch (const char* err)
				{
					std::cout << err << std::endl;
				}
			}
			break;
		}

		case 6://Exit
		{
			system("cls");
			ex = false;
		}
		}
	}
}