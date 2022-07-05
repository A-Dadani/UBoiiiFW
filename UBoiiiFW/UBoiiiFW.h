#pragma once

#include <iostream>

template<typename... Arg>
void print(Arg... args)
{
	([&]()
		{
			std::cout << args;
		}(), ...);
}

template<typename T>
void input(T& in)
{
	std::cin >> in;
}