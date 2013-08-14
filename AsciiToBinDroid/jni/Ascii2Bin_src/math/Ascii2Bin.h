/*
 * Ascii2Bin_Main.h
 *
 *  Created on: Jan 3, 2013
 *      Author: creswell
 */

#ifndef ASCII2BIN_MAIN_H_
#define ASCII2BIN_MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <sstream>



class Ascii2Bin{
private:
	std::string asciiString;
	std::string binaryString;

public:
	//Con/de 'structors
	Ascii2Bin();
	~Ascii2Bin();

	//Accessors
	std::string getAsciiString();
	void setAsciiString(std::string);
	std::string getBinaryString();
	void setBinaryString(std::string);

	//Control and Mutation function
	std::string calculateBinFromAsciiString(std::string);
	std::string calculateAsciiFromBinString(std::string);


};


#endif /* ASCII2BIN_MAIN_H_ */
