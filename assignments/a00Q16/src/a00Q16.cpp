//============================================================================
// Name        : a00Q16.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

void print_circle_info(float radius);


int main() {
	print_circle_info(5.3);
	return 0;
}

void print_circle_info(float radius){

	std::cout << "the diameter of the circle is "
			<< 2*radius <<"\n";
	std::cout << "the circumference of the circle is "
				<< 2*3.14*radius <<"\n";
	std::cout << "the area of the circle is "
					<< 3.14*radius*radius <<"\n";
	std::cout << std::endl;
	return;
}
