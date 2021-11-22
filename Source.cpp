#include "menu.h"
#include <string>
int main()
{
	int n = 0;
	std::string string_1;
	std::cout << "Enter the first string:";
	std::cin >> string_1;
	int len1 = string_1.size();
	std::string string_2;
	std::cout << "Enter the second string:";
	std::cin >> string_2;
	int len2 = string_2.size();
	int choise = 0;
	std::cout << "Choise a type of strings:" << std::endl;
	std::cout << "1)Int" << std::endl;
	std::cout << "2)Double" << std::endl;
	std::cout << "3)Char" << std::endl;
	std::cin >> choise;
	if (choise == 1)
	{
		std::vector<int> v1;
		for (int i = 0; i < string_1.size(); i++)
		{
			v1.push_back(string_1[i] - '0');
		}
		Mystring<int> A(v1);
		std::vector <int> v2;
		for (int i = 0; i < string_2.size(); i++)
		{
			v2.push_back(string_2[i] - '0');
		}
		Mystring<int> B(v2);
		std::cout << A << std::endl;
		std::cout << B;
		menuint(A, B);
	}
	else if (choise == 2)
	{
		vector<double> arr1;
		vector<double> arr2;
		int i = 0;
		while (i < len1)
		{
			std::string temp = string_1;
			std::string str;
			while ((temp[i] != ',') && (temp[i] != '\0'))
			{
				str.push_back(temp[i]);
				i++;
			}
			double result = stod(str);
			arr1.push_back(result);
			i++;
		}
		Mystring <double> A(arr1);
		i = 0;
		while (i < len2)
		{
			std::string temp = string_2;
			std::string str;
			while ((temp[i] != ',') && (temp[i] != '\0'))
			{
				str.push_back(temp[i]);
				i++;
			}
			double result = stod(str);
			arr2.push_back(result);
			i++;
		}
		Mystring < double > B(arr2);
		std::cout << A << std::endl;
		std::cout << B;
		menudouble(A, B);
	}
	else if (choise == 3)
	{
		std::vector<char> v1;
		for (int i = 0; i < string_1.size(); i++)
		{
			v1.push_back(string_1[i]);
		}
		std::vector<char> v2;
		for (int i = 0; i < string_2.size(); i++)
		{
			v2.push_back(string_2[i]);
		}
		Mystring < char > A(v1);
		Mystring < char > B(v2);
		std::cout << A << std::endl;
		std::cout << B;
		menuchar(A, B);
	}
	return 0;
}