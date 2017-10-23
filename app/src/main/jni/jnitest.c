//
// Created by byc on 2017/10/20.
//

#include "com_example_byc_testndk_TestJni.h"
/*
 * Class:     com_example_byc_testndk_TestJni
 * Method:    getStringFromNative
 * Signature: ()Ljava/lang/String;
 */

JNIEXPORT jstring JNICALL Java_com_example_byc_testndk_TestJni_getStringFromNative
  (JNIEnv *env, jobject obj){
     return (*env)->NewStringUTF(env,"This just a test for Android Studio NDK JNI developer!");
  }