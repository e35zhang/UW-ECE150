#include <iostream>
#include <cmath>

#ifndef MARMOSET_TESTING


int main();

#endif


double horizontal_velocity(double velocity, double theta);

double vertical_velocity(double velocity, double theta);

double gravity();

double computed_range(double velocity, double theta, double h);




#ifndef MARMOSET_TESTING

int main(){


	// Part A
	double angles[12] = {10, 20, 25.5, 30, 40, 50, 55.5, 60, 70, 75.5, 80, 90};

	for(int i=0; i<12; i++){
		double range = computed_range(600, angles[i], 0);
		std::cout << "The range the banana reaches for the launch angle of " <<angles[i] << " degrees is " << range << std::endl;

	}



//	//Part B
//	double max_range = 0;
//	for(int i=0; i<12; i++){
//			double theta = angles[i]/180*3.14159265358979;
//			double range = computed_range(600, theta, 10);
//			if (range > max_range){
//				max_range = range;
//			}
//		}
//
//		std::cout << max_range;
//		std::cout << std::endl;


	return 0;
}

#endif


double horizontal_velocity(double velocity, double theta){
	return velocity * std::cos(theta/180*3.14159265358979);
}

double vertical_velocity(double velocity, double theta){
	return velocity * std::sin(theta/180*3.14159265358979);
}

double gravity(){
	return 9.80665;
}

double computed_range(double velocity, double theta, double h){
	double vx = horizontal_velocity(velocity, theta);
	double vy = vertical_velocity(velocity,  theta);
	double g = gravity();
	return vx*vy/g + vx * std::sqrt(vy*vy + 2 * g * h)/g;
}







