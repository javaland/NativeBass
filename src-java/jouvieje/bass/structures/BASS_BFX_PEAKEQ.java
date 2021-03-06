/* DO NOT EDIT - AUTOGENERATED */
/**
 * 				NativeBass Project
 *
 * Want to use BASS (www.un4seen.com) in the Java language ? NativeBass is made for you.
 * Copyright @ 2007-2011 Jérôme Jouvie
 *
 * Created on 02 jul. 2007
 * @version file v1.1.1
 * @author Jérôme Jouvie (Jouvieje)
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

package jouvieje.bass.structures;

import jouvieje.bass.*;
import jouvieje.bass.exceptions.*;
import jouvieje.bass.callbacks.*;
import jouvieje.bass.*;
import jouvieje.bass.defines.*;
import jouvieje.bass.enumerations.*;
import jouvieje.bass.structures.*;
import java.nio.*;
import jouvieje.bass.*;
import jouvieje.bass.enumerations.*;
import jouvieje.bass.structures.*;
import jouvieje.bass.utils.*;

public class BASS_BFX_PEAKEQ extends Pointer {
	/**
	 * Create a view of the <code>Pointer</code> object as a <code>BASS_BFX_PEAKEQ</code> object.<br>
	 * This view is valid only if the memory holded by the <code>Pointer</code> holds a BASS_BFX_PEAKEQ object.
	 */
	public static BASS_BFX_PEAKEQ asBASS_BFX_PEAKEQ(Pointer pointer) {
		long address = Pointer.getPointer(pointer);
		if(address == 0) return null;
		return new BASS_BFX_PEAKEQ(address);
	}
	/**
	 * Allocate a new <code>BASS_BFX_PEAKEQ</code>.<br>
	 * The call <code>isNull()</code> on the object created will return false.<br>
	 * <pre><code>  BASS_BFX_PEAKEQ obj = BASS_BFX_PEAKEQ.allocate();
	 *  (obj == null) <=> obj.isNull() <=> false
	 * </code></pre>
	 */
	public static BASS_BFX_PEAKEQ allocate() {
		final long pointer = StructureJNI.BASS_BFX_PEAKEQ_new();
		if(pointer == 0) throw new OutOfMemoryError();
		return new BASS_BFX_PEAKEQ(pointer);
	}

	protected BASS_BFX_PEAKEQ(long pointer) {
		super(pointer);
	}

	/**
	 * Create an object that holds a null <code>BASS_BFX_PEAKEQ</code>.<br>
	 * The call <code>isNull()</code> on the object created will returns true.<br>
	 * <pre><code>  BASS_BFX_PEAKEQ obj = new BASS_BFX_PEAKEQ();
	 *  (obj == null) <=> false
	 *  obj.isNull() <=> true
	 * </code></pre>
	 * To creates a new <code>BASS_BFX_PEAKEQ</code>, use the static "constructor" :
	 * <pre><code>  BASS_BFX_PEAKEQ obj = BASS_BFX_PEAKEQ.allocate();</code></pre>
	 * @see BASS_BFX_PEAKEQ#allocate()
	 */
	public BASS_BFX_PEAKEQ() {
		super();
	}

	public void release() {
		if(pointer != 0) {
			StructureJNI.BASS_BFX_PEAKEQ_delete(pointer);
		}
		pointer = 0;
	}

	/**
	 * [0...............n] more bands means more memory & cpu usage
	 */
	public int getBand() {
		if(pointer == 0) throw new NullPointerException();
		int javaResult = StructureJNI.BASS_BFX_PEAKEQ_get_lBand(pointer);
		return javaResult;
	}
	/**
	 * [0...............n] more bands means more memory & cpu usage
	 */
	public void setBand(int band) {
		if(pointer == 0) throw new NullPointerException();
		StructureJNI.BASS_BFX_PEAKEQ_set_lBand(pointer, band);
	}

	/**
	 * [0.1...........<10] in octaves - fQ is not in use (Bandwidth has a priority over fQ)
	 */
	public float getBandwidth() {
		if(pointer == 0) throw new NullPointerException();
		float javaResult = StructureJNI.BASS_BFX_PEAKEQ_get_fBandwidth(pointer);
		return javaResult;
	}
	/**
	 * [0.1...........<10] in octaves - fQ is not in use (Bandwidth has a priority over fQ)
	 */
	public void setBandwidth(float bandwidth) {
		if(pointer == 0) throw new NullPointerException();
		StructureJNI.BASS_BFX_PEAKEQ_set_fBandwidth(pointer, bandwidth);
	}

	/**
	 * [0...............1] the EE kinda definition (linear) (if Bandwidth is not in use)
	 */
	public float getQ() {
		if(pointer == 0) throw new NullPointerException();
		float javaResult = StructureJNI.BASS_BFX_PEAKEQ_get_fQ(pointer);
		return javaResult;
	}
	/**
	 * [0...............1] the EE kinda definition (linear) (if Bandwidth is not in use)
	 */
	public void setQ(float q) {
		if(pointer == 0) throw new NullPointerException();
		StructureJNI.BASS_BFX_PEAKEQ_set_fQ(pointer, q);
	}

	/**
	 * [1Hz..<info.freq/2] in Hz
	 */
	public float getCenter() {
		if(pointer == 0) throw new NullPointerException();
		float javaResult = StructureJNI.BASS_BFX_PEAKEQ_get_fCenter(pointer);
		return javaResult;
	}
	/**
	 * [1Hz..<info.freq/2] in Hz
	 */
	public void setCenter(float center) {
		if(pointer == 0) throw new NullPointerException();
		StructureJNI.BASS_BFX_PEAKEQ_set_fCenter(pointer, center);
	}

	/**
	 * [-15dB...0...+15dB] in dB
	 */
	public float getGain() {
		if(pointer == 0) throw new NullPointerException();
		float javaResult = StructureJNI.BASS_BFX_PEAKEQ_get_fGain(pointer);
		return javaResult;
	}
	/**
	 * [-15dB...0...+15dB] in dB
	 */
	public void setGain(float gain) {
		if(pointer == 0) throw new NullPointerException();
		StructureJNI.BASS_BFX_PEAKEQ_set_fGain(pointer, gain);
	}

	/**
	 * BASS_BFX_CHANxxx flag/s
	 */
	public int getChannel() {
		if(pointer == 0) throw new NullPointerException();
		int javaResult = StructureJNI.BASS_BFX_PEAKEQ_get_lChannel(pointer);
		return javaResult;
	}
	/**
	 * BASS_BFX_CHANxxx flag/s
	 */
	public void setChannel(int channel) {
		if(pointer == 0) throw new NullPointerException();
		StructureJNI.BASS_BFX_PEAKEQ_set_lChannel(pointer, channel);
	}

}