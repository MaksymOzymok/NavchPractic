#include <iostream>
int main()
{ 
int i;
int sum;
sum = 0;
	for(i=1;i<=100;i++){
		if (i % 2 == 1){
			sum = sum + i*i*i;
			}

	}
std::cout<<sum ;

}
