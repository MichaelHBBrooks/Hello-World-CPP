/*
 * someClass.cpp
 *
 *  Created on: Dec 29, 2016
 *      Author: jinieren
 */

#include "someClass.h"
#include <iostream>

someClass::someClass(){
	std::cout << "created" << std::endl;
}

void someClass::printText(){
	std::cout << "test" << std::endl;
}
