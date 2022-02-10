#include <iostream>
 #include "Array.hpp"

template<typename T>
void print(Array<T> origin, Array<T> t1, Array<T> t2, int len)
{
	std::cout << "origin: ";
	for (int i = 0; i < len; i++)
		std::cout << origin[i] << " ";
	std::cout << std::endl;
	std::cout << "tmp_1: ";
	for (int i = 0; i < len; i++)
		std::cout << t1[i] << " ";
	std::cout << std::endl;
	std::cout << "temp_2: ";
	for (int i = 0; i < len; i++)
		std::cout << t2[i] << " ";
	std::cout << std::endl;
}

int main(void)
{
	std::cout << "==== ARRAY<int> ====" << std::endl;
	Array<int> arr_int(10);
	// initialize
	for (int i = 0; i < arr_int.size(); i++)
		arr_int[i] = i;
	// copy, Assignment
	Array<int> temp_int1 = arr_int;
	Array<int> temp_int2(temp_int1);
	print(arr_int, temp_int1, temp_int2, arr_int.size());

	std::cout << "==== ARRAY<float> ====" << std::endl;
	Array<float> arr_float(8);
	// initialize
	for (int i = 0; i < arr_float.size(); i++)
		arr_float[i] = i + 0.42f;
	// copy, Assignment
	Array<float> tmp_float1 = arr_float;
	Array<float> tmp_float2(tmp_float1);
	print(arr_float, tmp_float1, tmp_float2, arr_float.size());

	std::cout << "==== ARRAY<char> ====" << std::endl;
	Array<char> arr_char(20);
	// initialize
	for (int i = 0; i < arr_char.size(); i++)
		arr_char[i] = i + 'a';
	// copy, Assignment
	Array<char> tmp_char1 = arr_char;
	Array<char> tmp_char2(tmp_char1);
	print(arr_char, tmp_char1, tmp_char2, arr_char.size());

	// exception
	std::cout << "==== exception ====" << std::endl;
	try
	{
		arr_int[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		arr_int[42] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
/*
#define MAX_VAL 750
int main(int, char**)
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	//SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete [] mirror;//
	return 0;
} */
