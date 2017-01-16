/**
 * The purpose of this project is to demonstrate how templates are built and function. This is a
 * simple example.
 */

#include<iostream>

class calc{
public:
	int add(int x, int y);
	int multiply(int x, int y);
};

int calc::add(int x, int y){
	return x+y;
}

int calc::multiply(int x, int y){
	return x*y;
}


template <class A_Type> class calcTemplate{
public:
	A_Type add(A_Type x, A_Type y);
	A_Type multiply(A_Type x, A_Type y);
};

template <class A_Type> A_Type calcTemplate<A_Type>::add(A_Type x, A_Type y){
	return x+y;
}

template <class A_Type> A_Type calcTemplate<A_Type>::multiply(A_Type x, A_Type y){
	return x*y;
}

int main(int argc, char* argv[]){
	using namespace std;

	int a = 5;
	int b = 6;
	calc calc_object;
	cout << "Calc class: a+b = " << calc_object.add(a,b) << endl;
	cout << "Calc class: a*b = " << calc_object.multiply(a,b) << endl;

	calcTemplate <double> calc_template_object;
	cout << "Template <double> Calc class: a+b = " << calc_template_object.add(a,b) << endl;
	cout << "Template <double> Calc class: a*b = " << calc_template_object.multiply(a,b) << endl;

	double c = 5.0;
	double d = 6.0;
	cout << "Template <double> Calc class: c+d = " << calc_template_object.add(c,d) << endl;
	cout << "Template <double> Calc class: c*d = " << calc_template_object.multiply(c,d) << endl;
	return 0;
}
