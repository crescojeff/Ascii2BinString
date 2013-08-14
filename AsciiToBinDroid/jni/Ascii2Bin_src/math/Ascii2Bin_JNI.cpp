#include "Ascii2Bin_JNI.h"

//Here comes the java mess...
//Java wrapped functions for export to JNI
extern "C"{
JNIEXPORT jstring JNICALL Java_cresco_ai_asciitobindroid_math_StringConverter_calculateBinFromAsciiStringJNI( JNIEnv* env,jobject jobj,jstring jstr){
	Ascii2Bin* ascii2bin_ptr = new Ascii2Bin();
	const char *cstr_ptr = env->GetStringUTFChars(jstr, 0);
	//char cap[1024];
	std::string cppString(cstr_ptr);
	//strcpy(cap, cstr_ptr);
	env->ReleaseStringUTFChars(jstr, cstr_ptr);
	cppString = ascii2bin_ptr->calculateBinFromAsciiString(cppString);
	delete ascii2bin_ptr;
	return env->NewStringUTF(cppString.c_str());

}
JNIEXPORT jstring JNICALL Java_cresco_ai_asciitobindroid_math_StringConverter_calculateAsciiFromBinStringJNI( JNIEnv* env,jobject jobj, jstring jstr ){
		Ascii2Bin* ascii2bin_ptr = new Ascii2Bin(); //should be automatically destroyed when it goes out of scope from this function... not quite sure though
		const char *cstr_ptr = env->GetStringUTFChars(jstr, 0);
		//char cap[1024];
		std::string cppString(cstr_ptr);
		//strcpy(cap, cstr_ptr);
		env->ReleaseStringUTFChars(jstr, cstr_ptr);
		cppString = ascii2bin_ptr->calculateAsciiFromBinString(cppString);
		delete ascii2bin_ptr;
		return env->NewStringUTF(cppString.c_str());
}

}//end extern "C"
