#include<iostream>
#include<cmath>


int main()

{
int x,y,z;
std::cin>>x;
std::cin>>y;
std::cin>>z;
float a;
float b;
a = (1 - exp(-z+1))/((1+ pow(z,0.4))*(pow(y,2)-sqrt(abs(sin(x)/cos(x)))));
std::cout<<a<<std::endl;
b = log10(abs(1+(pow(cos(y),4))))+(abs((x^2*y-10))^1/5)/10+(pow((1+x-sqrt(y)),-6))/6;
std::cout<<b<<std::endl;


}
