#include <iostream>
#include <string>
#include <cmath>
using namespace std ;

    sumSqrt(double N){
    double A=1.0000 ;
    double B=1 ;
    
	if(N>0){
		while(A<=N){
			B+=1/sqrt(A);
			A++ ;
		}
		return B ;
	}
	
    }


int main()
{
    double a = sumSqrt(20);
    double b = sumSqrt(10);
    double c = sumSqrt(5);
    double d = sumSqrt(2);
    double e = sumSqrt(1);
    double f = sumSqrt(0);
    double g = sumSqrt(-1);
    double h = sumSqrt(-5);
    double i = sumSqrt(3);
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n" << h <<"\n" << i << "\n";

}
