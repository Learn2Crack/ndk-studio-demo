
#include <jni.h>

jstring Java_com_learn2crack_ndkdemo_MainActivity_stringFromJNI( JNIEnv* env,jobject thiz ) {

        return (*env)->NewStringUTF(env, "Hello Learn2Crack from JNI !");
}