#ifndef _ASCII2BIN_JNI_H_
#define _ASCII2BIN_JNI_H_

#include "Ascii2Bin.h"
#include <jni.h>


//Java wrapped functions for export to JNI
extern "C"{
JNIEXPORT jstring JNICALL Java_cresco_ai_asciitobindroid_math_StringConverter_calculateBinFromAsciiStringJNI( JNIEnv*,jobject,jstring);
JNIEXPORT jstring JNICALL Java_cresco_ai_asciitobindroid_math_StringConverter_calculateAsciiFromBinStringJNI( JNIEnv*,jobject,jstring);
} //end extern "C"

#endif /*_ASCII2BIN_JNI_H_ def*/
