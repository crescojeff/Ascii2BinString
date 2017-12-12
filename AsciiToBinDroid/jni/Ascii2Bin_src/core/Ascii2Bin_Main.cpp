/*
 * Ascii2Bin_Main.cpp
 *
 *  Created on: Jan 3, 2013
 *      Author: Jeff Creswell
 */

#include "../math/Ascii2Bin.h"

int main(int argc, char** argv){
	Ascii2Bin* ascii2bin_ptr = new Ascii2Bin();
	std::string tempString(argv[1]);
	ascii2bin_ptr->setAsciiString(tempString);
	ascii2bin_ptr->calculateBinFromAsciiString("test");
	ascii2bin_ptr->calculateAsciiFromBinString("01010100010001010101001101010100");
	return 0; //success condition
}


