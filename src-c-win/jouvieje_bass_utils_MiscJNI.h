/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class jouvieje_bass_utils_MiscJNI */

#ifndef _Included_jouvieje_bass_utils_MiscJNI
#define _Included_jouvieje_bass_utils_MiscJNI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     jouvieje_bass_utils_MiscJNI
 * Method:    getBufferAddress
 * Signature: (Ljava/nio/Buffer;I)J
 */
JNIEXPORT jlong JNICALL Java_jouvieje_bass_utils_MiscJNI_getBufferAddress
  (JNIEnv *, jclass, jobject, jint);

/*
 * Class:     jouvieje_bass_utils_MiscJNI
 * Method:    newDirectByteBuffer
 * Signature: (JJ)Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_jouvieje_bass_utils_MiscJNI_newDirectByteBuffer
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     jouvieje_bass_utils_MiscJNI
 * Method:    Pointer_toString
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_jouvieje_bass_utils_MiscJNI_Pointer_1toString
  (JNIEnv *, jclass, jlong);

/*
 * Class:     jouvieje_bass_utils_MiscJNI
 * Method:    asInt
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_jouvieje_bass_utils_MiscJNI_asInt
  (JNIEnv *, jclass, jlong);

/*
 * Class:     jouvieje_bass_utils_MiscJNI
 * Method:    asFloat
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_jouvieje_bass_utils_MiscJNI_asFloat
  (JNIEnv *, jclass, jlong);

/*
 * Class:     jouvieje_bass_utils_MiscJNI
 * Method:    asDouble
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_jouvieje_bass_utils_MiscJNI_asDouble
  (JNIEnv *, jclass, jlong);

/*
 * Class:     jouvieje_bass_utils_MiscJNI
 * Method:    new_ObjectPointer
 * Signature: (Ljava/lang/Object;)J
 */
JNIEXPORT jlong JNICALL Java_jouvieje_bass_utils_MiscJNI_new_1ObjectPointer
  (JNIEnv *, jclass, jobject);

/*
 * Class:     jouvieje_bass_utils_MiscJNI
 * Method:    get_ObjectPointer
 * Signature: (J)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_jouvieje_bass_utils_MiscJNI_get_1ObjectPointer
  (JNIEnv *, jclass, jlong);

/*
 * Class:     jouvieje_bass_utils_MiscJNI
 * Method:    set_ObjectPointer
 * Signature: (JLjava/lang/Object;)V
 */
JNIEXPORT void JNICALL Java_jouvieje_bass_utils_MiscJNI_set_1ObjectPointer
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     jouvieje_bass_utils_MiscJNI
 * Method:    delete_ObjectPointer
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_jouvieje_bass_utils_MiscJNI_delete_1ObjectPointer
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
