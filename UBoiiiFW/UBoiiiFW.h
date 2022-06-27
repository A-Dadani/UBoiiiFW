#pragma once

#include <iostream>

namespace UBoiii
{
	template<typename T>
	void print(T arg)
	{
		std::cout << arg;
	}

	template<typename T, typename... S>
	void print(T dif,S... args)
	{
		std::cout << dif;
		std::cout << args...;
	}
}