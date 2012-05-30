/* DO NOT EDIT - AUTOGENERATED */
/**
 * 				NativeBass Project
 *
 * Want to use BASS (www.un4seen.com) in the Java language ? NativeBass is made for you.
 * Copyright � 2007-2011 J�r�me JOUVIE
 *
 * Created on 02 jul. 2007
 * @version file v1.1.1
 * @author J�r�me JOUVIE (Jouvieje)
 * @site   http://jerome.jouvie.free.fr/
 * @mail   jerome.jouvie@gmail.com
 * 
 * 
 * INTRODUCTION
 * BASS is an audio library for use in Windows and Mac OSX software.
 * Its purpose is to provide developers with the most powerful and
 * efficient (yet easy to use), sample, stream (MP3, MP2, MP1, OGG, WAV, AIFF,
 * custom generated, and more via add-ons), MOD music (XM, IT, S3M, MOD, MTM, UMX),
 * MO3 music (MP3/OGG compressed MODs),
 * and recording functions. All in a tiny DLL, under 100KB* in size.
 * 
 * BASS official web site :
 * 		http://www.un4seen.com/
 * 
 * 
 * GNU LESSER GENERAL PUBLIC LICENSE
 * 
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * as published by the Free Software Foundation; either version 2.1 of the License,
 * or (at your option) any later version.
 * 
 * This library is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 * without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library; if not, write to the
 * Free Software Foundation, Inc.,
 * 59 Temple Place, Suite 330,
 * Boston, MA 02111-1307 USA 
 */

#include "NativeBass.h"
#include "bass.h"
#include "bassenc.h"
#include "bassflac.h"
#include "bassmidi.h"
#include "bassmix.h"
#include "basswv.h"
#include "bass_aac.h"
#include "bass_ac3.h"
#include "bass_alac.h"
#include "bass_fx.h"
#include "bass_mpc.h"
#include "bass_spx.h"
#include "Utils.h"
#include "Pointer.h"
#include "JavaObject.h"
#include "jouvieje_bass_enumerations_EnumerationJNI.h"
#include "CallbackManager.h"

				/* BASS_ATTRIB */

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1BASS_1ATTRIB_1TEMPO(JNIEnv *java_env, jclass jcls) {
	return (jint)BASS_ATTRIB_TEMPO;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1BASS_1ATTRIB_1TEMPO_1PITCH(JNIEnv *java_env, jclass jcls) {
	return (jint)BASS_ATTRIB_TEMPO_PITCH;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1BASS_1ATTRIB_1TEMPO_1FREQ(JNIEnv *java_env, jclass jcls) {
	return (jint)BASS_ATTRIB_TEMPO_FREQ;
}

				/* BASS_ATTRIB_TEMPO_OPTION */

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1BASS_1ATTRIB_1TEMPO_1OPTION_1USE_1AA_1FILTER(JNIEnv *java_env, jclass jcls) {
	return (jint)BASS_ATTRIB_TEMPO_OPTION_USE_AA_FILTER;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1BASS_1ATTRIB_1TEMPO_1OPTION_1AA_1FILTER_1LENGTH(JNIEnv *java_env, jclass jcls) {
	return (jint)BASS_ATTRIB_TEMPO_OPTION_AA_FILTER_LENGTH;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1BASS_1ATTRIB_1TEMPO_1OPTION_1USE_1QUICKALGO(JNIEnv *java_env, jclass jcls) {
	return (jint)BASS_ATTRIB_TEMPO_OPTION_USE_QUICKALGO;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1BASS_1ATTRIB_1TEMPO_1OPTION_1SEQUENCE_1MS(JNIEnv *java_env, jclass jcls) {
	return (jint)BASS_ATTRIB_TEMPO_OPTION_SEQUENCE_MS;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1BASS_1ATTRIB_1TEMPO_1OPTION_1SEEKWINDOW_1MS(JNIEnv *java_env, jclass jcls) {
	return (jint)BASS_ATTRIB_TEMPO_OPTION_SEEKWINDOW_MS;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1BASS_1ATTRIB_1TEMPO_1OPTION_1OVERLAP_1MS(JNIEnv *java_env, jclass jcls) {
	return (jint)BASS_ATTRIB_TEMPO_OPTION_OVERLAP_MS;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1BASS_1ATTRIB_1TEMPO_1OPTION_1PREVENT_1CLICK(JNIEnv *java_env, jclass jcls) {
	return (jint)BASS_ATTRIB_TEMPO_OPTION_PREVENT_CLICK;
}

				/* BASS_BFX_BQF */

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1BASS_1BFX_1BQF_1LOWPASS(JNIEnv *java_env, jclass jcls) {
	return (jint)BASS_BFX_BQF_LOWPASS;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1BASS_1BFX_1BQF_1HIGHPASS(JNIEnv *java_env, jclass jcls) {
	return (jint)BASS_BFX_BQF_HIGHPASS;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1BASS_1BFX_1BQF_1BANDPASS(JNIEnv *java_env, jclass jcls) {
	return (jint)BASS_BFX_BQF_BANDPASS;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1BASS_1BFX_1BQF_1BANDPASS_1Q(JNIEnv *java_env, jclass jcls) {
	return (jint)BASS_BFX_BQF_BANDPASS_Q;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1BASS_1BFX_1BQF_1NOTCH(JNIEnv *java_env, jclass jcls) {
	return (jint)BASS_BFX_BQF_NOTCH;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1BASS_1BFX_1BQF_1ALLPASS(JNIEnv *java_env, jclass jcls) {
	return (jint)BASS_BFX_BQF_ALLPASS;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1BASS_1BFX_1BQF_1PEAKINGEQ(JNIEnv *java_env, jclass jcls) {
	return (jint)BASS_BFX_BQF_PEAKINGEQ;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1BASS_1BFX_1BQF_1LOWSHELF(JNIEnv *java_env, jclass jcls) {
	return (jint)BASS_BFX_BQF_LOWSHELF;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1BASS_1BFX_1BQF_1HIGHSHELF(JNIEnv *java_env, jclass jcls) {
	return (jint)BASS_BFX_BQF_HIGHSHELF;
}

				/* BASS_FX_BFX */

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1BASS_1FX_1BFX_1ROTATE(JNIEnv *java_env, jclass jcls) {
	return (jint)BASS_FX_BFX_ROTATE;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1BASS_1FX_1BFX_1ECHO(JNIEnv *java_env, jclass jcls) {
	return (jint)BASS_FX_BFX_ECHO;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1BASS_1FX_1BFX_1FLANGER(JNIEnv *java_env, jclass jcls) {
	return (jint)BASS_FX_BFX_FLANGER;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1BASS_1FX_1BFX_1VOLUME(JNIEnv *java_env, jclass jcls) {
	return (jint)BASS_FX_BFX_VOLUME;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1BASS_1FX_1BFX_1PEAKEQ(JNIEnv *java_env, jclass jcls) {
	return (jint)BASS_FX_BFX_PEAKEQ;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1BASS_1FX_1BFX_1REVERB(JNIEnv *java_env, jclass jcls) {
	return (jint)BASS_FX_BFX_REVERB;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1BASS_1FX_1BFX_1LPF(JNIEnv *java_env, jclass jcls) {
	return (jint)BASS_FX_BFX_LPF;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1BASS_1FX_1BFX_1MIX(JNIEnv *java_env, jclass jcls) {
	return (jint)BASS_FX_BFX_MIX;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1BASS_1FX_1BFX_1DAMP(JNIEnv *java_env, jclass jcls) {
	return (jint)BASS_FX_BFX_DAMP;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1BASS_1FX_1BFX_1AUTOWAH(JNIEnv *java_env, jclass jcls) {
	return (jint)BASS_FX_BFX_AUTOWAH;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1BASS_1FX_1BFX_1ECHO2(JNIEnv *java_env, jclass jcls) {
	return (jint)BASS_FX_BFX_ECHO2;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1BASS_1FX_1BFX_1PHASER(JNIEnv *java_env, jclass jcls) {
	return (jint)BASS_FX_BFX_PHASER;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1BASS_1FX_1BFX_1ECHO3(JNIEnv *java_env, jclass jcls) {
	return (jint)BASS_FX_BFX_ECHO3;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1BASS_1FX_1BFX_1CHORUS(JNIEnv *java_env, jclass jcls) {
	return (jint)BASS_FX_BFX_CHORUS;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1BASS_1FX_1BFX_1APF(JNIEnv *java_env, jclass jcls) {
	return (jint)BASS_FX_BFX_APF;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1BASS_1FX_1BFX_1COMPRESSOR(JNIEnv *java_env, jclass jcls) {
	return (jint)BASS_FX_BFX_COMPRESSOR;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1BASS_1FX_1BFX_1DISTORTION(JNIEnv *java_env, jclass jcls) {
	return (jint)BASS_FX_BFX_DISTORTION;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1BASS_1FX_1BFX_1COMPRESSOR2(JNIEnv *java_env, jclass jcls) {
	return (jint)BASS_FX_BFX_COMPRESSOR2;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1BASS_1FX_1BFX_1VOLUME_1ENV(JNIEnv *java_env, jclass jcls) {
	return (jint)BASS_FX_BFX_VOLUME_ENV;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1BASS_1FX_1BFX_1BQF(JNIEnv *java_env, jclass jcls) {
	return (jint)BASS_FX_BFX_BQF;
}

				/* BASS_FX_BPM_TRAN */

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1BASS_1FX_1BPM_1TRAN_1X2(JNIEnv *java_env, jclass jcls) {
	return (jint)BASS_FX_BPM_TRAN_X2;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1BASS_1FX_1BPM_1TRAN_12FREQ(JNIEnv *java_env, jclass jcls) {
	return (jint)BASS_FX_BPM_TRAN_2FREQ;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1BASS_1FX_1BPM_1TRAN_1FREQ2(JNIEnv *java_env, jclass jcls) {
	return (jint)BASS_FX_BPM_TRAN_FREQ2;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1BASS_1FX_1BPM_1TRAN_12PERCENT(JNIEnv *java_env, jclass jcls) {
	return (jint)BASS_FX_BPM_TRAN_2PERCENT;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1BASS_1FX_1BPM_1TRAN_1PERCENT2(JNIEnv *java_env, jclass jcls) {
	return (jint)BASS_FX_BPM_TRAN_PERCENT2;
}

				/* EAX_ENVIRONMENT */

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1EAX_1ENVIRONMENT_1GENERIC(JNIEnv *java_env, jclass jcls) {
	return (jint)EAX_ENVIRONMENT_GENERIC;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1EAX_1ENVIRONMENT_1PADDEDCELL(JNIEnv *java_env, jclass jcls) {
	return (jint)EAX_ENVIRONMENT_PADDEDCELL;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1EAX_1ENVIRONMENT_1ROOM(JNIEnv *java_env, jclass jcls) {
	return (jint)EAX_ENVIRONMENT_ROOM;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1EAX_1ENVIRONMENT_1BATHROOM(JNIEnv *java_env, jclass jcls) {
	return (jint)EAX_ENVIRONMENT_BATHROOM;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1EAX_1ENVIRONMENT_1LIVINGROOM(JNIEnv *java_env, jclass jcls) {
	return (jint)EAX_ENVIRONMENT_LIVINGROOM;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1EAX_1ENVIRONMENT_1STONEROOM(JNIEnv *java_env, jclass jcls) {
	return (jint)EAX_ENVIRONMENT_STONEROOM;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1EAX_1ENVIRONMENT_1AUDITORIUM(JNIEnv *java_env, jclass jcls) {
	return (jint)EAX_ENVIRONMENT_AUDITORIUM;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1EAX_1ENVIRONMENT_1CONCERTHALL(JNIEnv *java_env, jclass jcls) {
	return (jint)EAX_ENVIRONMENT_CONCERTHALL;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1EAX_1ENVIRONMENT_1CAVE(JNIEnv *java_env, jclass jcls) {
	return (jint)EAX_ENVIRONMENT_CAVE;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1EAX_1ENVIRONMENT_1ARENA(JNIEnv *java_env, jclass jcls) {
	return (jint)EAX_ENVIRONMENT_ARENA;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1EAX_1ENVIRONMENT_1HANGAR(JNIEnv *java_env, jclass jcls) {
	return (jint)EAX_ENVIRONMENT_HANGAR;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1EAX_1ENVIRONMENT_1CARPETEDHALLWAY(JNIEnv *java_env, jclass jcls) {
	return (jint)EAX_ENVIRONMENT_CARPETEDHALLWAY;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1EAX_1ENVIRONMENT_1HALLWAY(JNIEnv *java_env, jclass jcls) {
	return (jint)EAX_ENVIRONMENT_HALLWAY;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1EAX_1ENVIRONMENT_1STONECORRIDOR(JNIEnv *java_env, jclass jcls) {
	return (jint)EAX_ENVIRONMENT_STONECORRIDOR;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1EAX_1ENVIRONMENT_1ALLEY(JNIEnv *java_env, jclass jcls) {
	return (jint)EAX_ENVIRONMENT_ALLEY;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1EAX_1ENVIRONMENT_1FOREST(JNIEnv *java_env, jclass jcls) {
	return (jint)EAX_ENVIRONMENT_FOREST;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1EAX_1ENVIRONMENT_1CITY(JNIEnv *java_env, jclass jcls) {
	return (jint)EAX_ENVIRONMENT_CITY;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1EAX_1ENVIRONMENT_1MOUNTAINS(JNIEnv *java_env, jclass jcls) {
	return (jint)EAX_ENVIRONMENT_MOUNTAINS;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1EAX_1ENVIRONMENT_1QUARRY(JNIEnv *java_env, jclass jcls) {
	return (jint)EAX_ENVIRONMENT_QUARRY;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1EAX_1ENVIRONMENT_1PLAIN(JNIEnv *java_env, jclass jcls) {
	return (jint)EAX_ENVIRONMENT_PLAIN;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1EAX_1ENVIRONMENT_1PARKINGLOT(JNIEnv *java_env, jclass jcls) {
	return (jint)EAX_ENVIRONMENT_PARKINGLOT;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1EAX_1ENVIRONMENT_1SEWERPIPE(JNIEnv *java_env, jclass jcls) {
	return (jint)EAX_ENVIRONMENT_SEWERPIPE;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1EAX_1ENVIRONMENT_1UNDERWATER(JNIEnv *java_env, jclass jcls) {
	return (jint)EAX_ENVIRONMENT_UNDERWATER;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1EAX_1ENVIRONMENT_1DRUGGED(JNIEnv *java_env, jclass jcls) {
	return (jint)EAX_ENVIRONMENT_DRUGGED;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1EAX_1ENVIRONMENT_1DIZZY(JNIEnv *java_env, jclass jcls) {
	return (jint)EAX_ENVIRONMENT_DIZZY;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1EAX_1ENVIRONMENT_1PSYCHOTIC(JNIEnv *java_env, jclass jcls) {
	return (jint)EAX_ENVIRONMENT_PSYCHOTIC;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1EAX_1ENVIRONMENT_1COUNT(JNIEnv *java_env, jclass jcls) {
	return (jint)EAX_ENVIRONMENT_COUNT;
}

				/* STREAMPROC_SPECIAL */

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1STREAMPROC_1DUMMY(JNIEnv *java_env, jclass jcls) {
#define STREAMPROC_DUMMY 0
	return (jint)STREAMPROC_DUMMY;
}

JNIEXPORT jint JNICALL Java_jouvieje_bass_enumerations_EnumerationJNI_get_1STREAMPROC_1PUSH(JNIEnv *java_env, jclass jcls) {
#define STREAMPROC_PUSH -1
	return (jint)STREAMPROC_PUSH;
}


