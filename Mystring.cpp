#pragma once
#include <iostream>
#include <vector>
using namespace std;
template <class T>
class Mystring
{
private:
	std::vector<T> data;
public:

	Mystring<T>(){}
	Mystring<T>(std::vector<T> v)
	{
		data = v;
	}
	~Mystring()
	{
		data.clear();
	}

	T& operator [] (int index)
	{
		if (index < 0 || index >= data.size())
		{
			throw "Invalid index";
		}
		return data[index];
	}

	friend Mystring operator + (const Mystring& str1, const Mystring& str2)
	{
		Mystring result;
		result = str1;
		auto iter2 = str2.data.begin();
		for (iter2 = str2.data.begin(); iter2 != str2.data.end(); iter2++)
		{
			result.data.push_back(*iter2);
		}
		return result;
	}

	friend Mystring operator * (Mystring& str, int count)
	{
		if (count < 0)
		{
			throw "Multiplying a string by negative number";
		}
		Mystring result;
		for (int k = 0; k < count; k++)
		{
			auto iter = str.data.begin();
			for (iter = str.data.begin(); iter != str.data.end(); ++iter)
			{
				result.data.push_back(*iter);
			}
		}
		return result;
	}

	friend Mystring operator * (int count, Mystring& str)
	{
		return operator * (str, count);
	}

	Mystring operator ()(int start, int stop)
	{
		if (start < 0 || start > data.size())
		{
			throw "Incorrect substring parameters";
		}
		if (stop < 0 || stop > data.size() || stop < start)
		{
			throw "Incorrect substring parameters";
		}
		Mystring str;
		auto iter = str.data.begin();
		for (iter = data.begin() + start; iter != data.begin()+stop; ++iter)
		{
			str.data.push_back(*iter);
		}
		//str.insert(data.begin(),data.begin() + start, data.begin() + stop);
		return str;
	}


	bool operator == (Mystring& str)
	{
		if (data.size() != str.data.size())
		{
			return false;
		}
		auto iter1 = data.begin();
		auto iter2 = str.data.begin();
		while (iter1 != data.end())
		{
			if (*iter1 != *iter2)
			{
				return false;
			}
			++iter1;
			++iter2;
		}
		return true;
	}

	bool operator !=(Mystring& str)
	{
		return !(operator ==(str));
	}

	friend std::ostream& operator << (std::ostream& out, const Mystring& str)
	{
		out << "MyString: { ";
		for (int i = 0; i < str.data.size(); i++)
		{
			out << "'";
			out << str.data[i];
			out << "'";
			if (i != str.data.size() - 1)
			{
				out << ", ";
			}
		}
		out << " } ";
		return out;
	}
};