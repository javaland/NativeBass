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

public class BASS_BFX_VOLUME extends Pointer {
	/**
	 * Create a view of the <code>Pointer</code> object as a <code>BASS_BFX_VOLUME</code> object.<br>
	 * This view is valid only if the memory holded by the <code>Pointer</code> holds a BASS_BFX_VOLUME object.
	 */
	public static BASS_BFX_VOLUME asBASS_BFX_VOLUME(Pointer pointer) {
		long address = Pointer.getPointer(pointer);
		if(address == 0) return null;
		return new BASS_BFX_VOLUME(address);
	}
	/**
	 * Allocate a new <code>BASS_BFX_VOLUME</code>.<br>
	 * The call <code>isNull()</code> on the object created will return false.<br>
	 * <pre><code>  BASS_BFX_VOLUME obj = BASS_BFX_VOLUME.allocate();
	 *  (obj == null) <=> obj.isNull() <=> false
	 * </code></pre>
	 */
	public static BASS_BFX_VOLUME allocate() {
		final long pointer = StructureJNI.BASS_BFX_VOLUME_new();
		if(pointer == 0) throw new OutOfMemoryError();
		return new BASS_BFX_VOLUME(pointer);
	}

	protected BASS_BFX_VOLUME(long pointer) {
		super(pointer);
	}

	/**
	 * Create an object that holds a null <code>BASS_BFX_VOLUME</code>.<br>
	 * The call <code>isNull()</code> on the object created will returns true.<br>
	 * <pre><code>  BASS_BFX_VOLUME obj = new BASS_BFX_VOLUME();
	 *  (obj == null) <=> false
	 *  obj.isNull() <=> true
	 * </code></pre>
	 * To creates a new <code>BASS_BFX_VOLUME</code>, use the static "constructor" :
	 * <pre><code>  BASS_BFX_VOLUME obj = BASS_BFX_VOLUME.allocate();</code></pre>
	 * @see BASS_BFX_VOLUME#allocate()
	 */
	public BASS_BFX_VOLUME() {
		super();
	}

	public void release() {
		if(pointer != 0) {
			StructureJNI.BASS_BFX_VOLUME_delete(pointer);
		}
		pointer = 0;
	}

	/**
	 * BASS_BFX_CHANxxx flag/s or 0 for global volume control
	 */
	public int getChannel() {
		if(pointer == 0) throw new NullPointerException();
		int javaResult = StructureJNI.BASS_BFX_VOLUME_get_lChannel(pointer);
		return javaResult;
	}
	/**
	 * BASS_BFX_CHANxxx flag/s or 0 for global volume control
	 */
	public void setChannel(int channel) {
		if(pointer == 0) throw new NullPointerException();
		StructureJNI.BASS_BFX_VOLUME_set_lChannel(pointer, channel);
	}

	/**
	 * [0....1....n] linear
	 */
	public float getVolume() {
		if(pointer == 0) throw new NullPointerException();
		float javaResult = StructureJNI.BASS_BFX_VOLUME_get_fVolume(pointer);
		return javaResult;
	}
	/**
	 * [0....1....n] linear
	 */
	public void setVolume(float volume) {
		if(pointer == 0) throw new NullPointerException();
		StructureJNI.BASS_BFX_VOLUME_set_fVolume(pointer, volume);
	}

}