#include <iostream>

int main();

int main(){

	for(int i=0; i <7; i++){
		for(int j=0; j<8; j++){
			if ((i+j)%2==0){
				std::cout << "o ";
			}else{
				std::cout << "+ ";
			}
		}
		std::cout << "\n";
	}

	return 0;
}
