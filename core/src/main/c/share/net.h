/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_nfsdb_misc_Net */

#ifndef _Included_com_nfsdb_misc_Net
#define _Included_com_nfsdb_misc_Net
#ifdef __cplusplus
extern "C" {
#endif
#undef com_nfsdb_misc_Net_ERETRY
#define com_nfsdb_misc_Net_ERETRY 0L
#undef com_nfsdb_misc_Net_EPEERDISCONNECT
#define com_nfsdb_misc_Net_EPEERDISCONNECT -1L
#undef com_nfsdb_misc_Net_EOTHERDISCONNECT
#define com_nfsdb_misc_Net_EOTHERDISCONNECT -2L
/*
 * Class:     com_nfsdb_misc_Net
 * Method:    accept
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_nfsdb_misc_Net_accept
        (JNIEnv *, jclass, jlong);

/*
 * Class:     com_nfsdb_misc_Net
 * Method:    available
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_nfsdb_misc_Net_available
        (JNIEnv *, jclass, jlong);

/*
 * Class:     com_nfsdb_misc_Net
 * Method:    bind
 * Signature: (JII)Z
 */
JNIEXPORT jboolean JNICALL Java_com_nfsdb_misc_Net_bind
        (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_nfsdb_misc_Net
 * Method:    configureNonBlocking
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_nfsdb_misc_Net_configureNonBlocking
        (JNIEnv *, jclass, jlong);

/*
 * Class:     com_nfsdb_misc_Net
 * Method:    getPeerIP
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_nfsdb_misc_Net_getPeerIP
        (JNIEnv *, jclass, jlong);

/*
 * Class:     com_nfsdb_misc_Net
 * Method:    getPeerPort
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_nfsdb_misc_Net_getPeerPort
        (JNIEnv *, jclass, jlong);

/*
 * Class:     com_nfsdb_misc_Net
 * Method:    listen
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_nfsdb_misc_Net_listen
        (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_nfsdb_misc_Net
 * Method:    recv
 * Signature: (JJI)I
 */
JNIEXPORT jint JNICALL Java_com_nfsdb_misc_Net_recv
        (JNIEnv *, jclass, jlong, jlong, jint);

/*
 * Class:     com_nfsdb_misc_Net
 * Method:    send
 * Signature: (JJI)I
 */
JNIEXPORT jint JNICALL Java_com_nfsdb_misc_Net_send
        (JNIEnv *, jclass, jlong, jlong, jint);

/*
 * Class:     com_nfsdb_misc_Net
 * Method:    setRcvBuf
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_nfsdb_misc_Net_setRcvBuf
        (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_nfsdb_misc_Net
 * Method:    setSndBuf
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_nfsdb_misc_Net_setSndBuf
        (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_nfsdb_misc_Net
 * Method:    socketTcp
 * Signature: (Z)J
 */
JNIEXPORT jlong JNICALL Java_com_nfsdb_misc_Net_socketTcp
        (JNIEnv *, jclass, jboolean);

/*
 * Class:     com_nfsdb_misc_Net
 * Method:    getEwouldblock
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_nfsdb_misc_Net_getEwouldblock
        (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
