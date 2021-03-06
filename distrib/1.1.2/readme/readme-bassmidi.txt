BASSMIDI 2.4
Copyright (c) 2006-2011 Un4seen Developments Ltd. All rights reserved.

Files that you should have found in the BASSMIDI package
========================================================
Win32 version
-------------
BASSMIDI.TXT    This file
BASSMIDI.DLL    The BASSMIDI module
BASSMIDI.CHM    BASSMIDI documentation
C\              C/C++ API and examples...
  BASSMIDI.H      BASSMIDI C/C++ header file
  BASSMIDI.LIB    BASSMIDI import library
  BASSMIDI.DSW    Visual C++ workspace for examples
  MAKEFILE        Makefile for all examples
  MAKEFILE.IN     Makefile helper macros
  MIDITEST\       MIDI playback example
    MIDITEST.C
    MIDITEST.RC
    MIDITEST.DSP
    MAKEFILE
  SF2PACK\        Soundfont packer
    SF2PACK.C
    SF2PACK.DSP
    MAKEFILE
  SYNTH\          Real-time MIDI example
    SYNTH.C
    SYNTH.RC
    SYNTH.DSP
    MAKEFILE
  BIN\            Precompiled examples
    MIDITEST.EXE
    SF2PACK.EXE
    SYNTH.EXE
VB\             Visual Basic API and examples...
  BASSMIDI.BAS    BASSMIDI Visual Basic module
  MIDITEST\       MIDI playback example
    PRJMIDITEST.VBP
    FRMMIDITEST.FRM
    MODMIDITEST.BAS
DELPHI\         Delphi API and examples...
  BASSMIDI.PAS    BASSMIDI Delphi unit
  MIDITEST\       MIDI playback example
    MIDITEST.DPR
    UNIT1.PAS
    UNIT1.DFM
  SYNTH\          Real-time MIDI example
    SYNTH.DPR
    MAIN.PAS
    MAIN.DFM

NOTE: To run the example EXEs, first you will have to copy BASSMIDI.DLL and
      BASS.DLL into the same directory as them.

NOTE: To build the examples, you will need to copy the BASS API into the
      same directory as the BASSMIDI API.

MacOSX version
--------------
BASSMIDI.TXT    This file
LIBBASSMIDI.DYLIB  The BASSMIDI module
BASSMIDI.CHM    BASSMIDI documentation
BASSMIDI.H      BASSMIDI C/C++ header file
MAKEFILE        Makefile for all examples
MAKEFILE.IN     Makefile helper macros
BASSMIDI.XCODEPROJ  Xcode project for examples
MIDITEST\       MIDI playback example
  MIDITEST.C
  MAKEFILE
  MIDITEST.NIB
SF2PACK\        Soundfont packer
  SF2PACK.C
  MAKEFILE
SYNTH\          Real-time MIDI example
  SYNTH.C
  MAKEFILE
  SYNTH.NIB

NOTE: To view the documentation, you will need a CHM viewer, such as CHMOX
      which is included in the BASS package.

NOTE: To build the examples, you will need to copy the BASS API into the
      same directory as the BASSMIDI API.


What's the point?
=================
BASSMIDI is an extension to the BASS audio library, enabling the playing of
MIDI files and real-time events, using SF2 soundfonts to provide the sounds.


Requirements
============
BASS 2.4 is required.


Using BASSMIDI
==============
The MIDI format is used in very much the same way as any of the built-in BASS
stream formats - simply call the MIDI stream creation function instead of the
BASS built-in functions. The BASS plugin system (see BASS_PluginLoad) is also
supported.

SF2 soundfonts are used to provide the sounds. There are several soundfonts
available on the internet. One example (Chorium) is available from the BASS
webpage. On Win32, the Creative 28MB (28MBGM.SF2), 8MB (CT8MGM.SF2), 4MB
(CT4MGM.SF2), or 2MB (CT2MGM.SF2) soundfont will be used by default when
present in the Windows system directory.

Win32 version
-------------
To use BASSMIDI with Borland C++ Builder, you'll first have to create a
Borland C++ Builder import library for it. This is done by using the
IMPLIB tool that comes with Borland C++ Builder. Simply execute this:

	IMPLIB BASSMIDIBCB.LIB BASSMIDI.DLL

... and then use BASSMIDIBCB.LIB in your projects to import BASSMIDI.

To use BASSMIDI with LCC-Win32, you'll first have to create a compatible
import library for it. This is done by using the PEDUMP and BUILDLIB
tools that come with LCC-Win32. Run these 2 commands:

	PEDUMP /EXP BASSMIDI.LIB > BASSMIDILCC.EXP
	BUILDLIB BASSMIDILCC.EXP BASSMIDILCC.LIB

... and then use BASSMIDILCC.LIB in your projects to import BASSMIDI.

For the BASS functions that return strings (char*), VB users should use
the VBStrFromAnsiPtr function to convert the returned pointer into a VB
string.

MacOSX version
--------------
A separate "LIB" file is not required for OSX. Using XCode, you can simply
add the DYLIB file to the project. Or using a makefile, you can build your
programs like this, for example:

	gcc yoursource -L. -lbass -lbassmidi -o yourprog

As with LIBBASS.DYLIB, the LIBBASSMIDI.DYLIB file must be put in the same
directory as the executable (it can't just be somewhere in the path). See
the example projects/makefiles.

LIBBASSMIDI.DYLIB is a universal binary, with support for both PowerPC and
Intel Macs. If you want PowerPC-only or Intel-only versions, the included
makefile can create them for you, by typing "make ppc" or "make i386".

TIP: The BASSMIDI.CHM file should be put in the same directory as the BASS.CHM
     file, so that the BASSMIDI documentation can be accessed from within the
     BASS documentation.

NOTE: You may need to "Unblock" the BASSENC.CHM file in its "Properties" to
      view it on Windows 7.


Latest Version
==============
The latest versions of BASSMIDI & BASS can be found at the BASS website:

	www.un4seen.com


Licence
=======
BASSMIDI is free to use with BASS.

TO THE MAXIMUM EXTENT PERMITTED BY APPLICABLE LAW, BASSMIDI IS PROVIDED
"AS IS", WITHOUT WARRANTY OF ANY KIND, EITHER EXPRESSED OR IMPLIED,
INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF MERCHANTABILITY
AND/OR FITNESS FOR A PARTICULAR PURPOSE. THE AUTHORS SHALL NOT BE HELD
LIABLE FOR ANY DAMAGE THAT MAY RESULT FROM THE USE OF BASSMIDI. YOU USE
BASSMIDI ENTIRELY AT YOUR OWN RISK.

Usage of BASSMIDI indicates that you agree to the above conditions.

All trademarks and other registered names contained in the BASSMIDI
package are the property of their respective owners.


History
=======
These are the major (and not so major) changes at each version stage.
There are of course bug fixes and other little improvements made along
the way too! To make upgrading simpler, all functions affected by a
change to the BASSMIDI interface are listed.

2.4.6 - 30/3/2011
-----------------
* MIDI input device support
	BASS_MIDI_InGetDeviceInfo
	BASS_MIDI_InInit
	BASS_MIDI_InFree
	BASS_MIDI_InStart
	BASS_MIDI_InStop
	MIDIINPROC
	SYNTH example updated
* Multiple event processing including support for raw MIDI data
	BASS_MIDI_StreamEvents
* CPU usage limiting
	BASS_ATTRIB_MIDI_CPU (BASS_ChannelSetAttribute option)
* Scale/octave tuning
	MIDI_EVENT_SCALETUNING (BASS_MIDI_StreamEvent/s)
* Soft pedal event
	MIDI_EVENT_SOFT (BASS_MIDI_StreamEvent/s)
* Random panning
	MIDI_EVENT_PAN (BASS_MIDI_StreamEvent/s)
* System reset event
	MIDI_EVENT_SYSTEM/EX (BASS_MIDI_StreamEvent/s)
* Resetting of overridden drum key pan/reverb/chorus back to normal
	MIDI_EVENT_DRUM_PAN/REVERB/CHORUS (BASS_MIDI_StreamEvent)
* Retrieval of drum key event values
	BASS_MIDI_StreamGetEvent
* All events initialized to a MIDI file's 1st tick values
	BASS_MIDI_StreamGetEvent
* Adjustable MIDI channel count
	BASS_ATTRIB_MIDI_CHANS (BASS_ChannelSetAttribute option)
* Adjustable voice limit
	BASS_ATTRIB_MIDI_VOICES (BASS_ChannelSetAttribute option)
* Preloaded presets are not automatically compacted
	BASS_MIDI_FontLoad
	BASS_CONFIG_MIDI_COMPACT (BASS_SetConfig option)
* Multiple instances of a soundfont
	BASS_MIDI_FontInit
* Xcode examples project added for OSX

2.4.5 - 8/2/2010
----------------
* Key signature retrieval
	BASS_MIDI_MARK_KEYSIG (BASS_MIDI_StreamGetMark type)
	BASS_SYNC_MIDI_KEYSIG (BASS_ChannelSetSync type)
* Tempo event initialized to MIDI file's 1st tick value
	MIDI_EVENT_TEMPO (BASS_MIDI_StreamGetEvent)
* UTF-16 support on OSX
	BASS_UNICODE (BASS_MIDI_StreamCreateFile/BASS_MIDI_FontInit/Pack/Unpack flag)

2.4.4 - 24/8/2009
-----------------
* Attack & release time events
	MIDI_EVENT_ATTACK/RELEASE (BASS_MIDI_StreamEvent)
* Drum key level NRPN event
	MIDI_EVENT_DRUM_LEVEL (BASS_MIDI_StreamEvent)
* MIDI file event retrieval
	BASS_MIDI_StreamGetEvents
* Time signature retrieval
	BASS_MIDI_MARK_TIMESIG (BASS_MIDI_StreamGetMark type)
	BASS_SYNC_MIDI_TIMESIG (BASS_ChannelSetSync type)
* Default soundfont configuration
	BASS_CONFIG_MIDI_DEFFONT (BASS_SetConfig option)

2.4.3 - 19/3/2009
-----------------
* Possibility of applying DSP/FX to individual MIDI channels
	BASS_MIDI_StreamGetChannel
* Per-track volume control
	BASS_ATTRIB_MIDI_TRACK_VOL (BASS_ChannelSetAttribute option)
* Support for all tracks in format 2 MIDI files
	BASS_MIDI_StreamCreateFile/User/URL

2.4.2 - 28/10/2008
------------------
* Decaying of old sound when seeking
	BASS_MIDI_DECAYSEEK (BASS_MIDI_StreamCreateFile/User/URL flag)
	MIDITEST example updated (C version)
* End decaying now also applies when looping
	BASS_MIDI_DECAYEND (BASS_MIDI_StreamCreateFile/User/URL flag)
* Support for 28MBGM.SF2 and CT8MGM.SF2 as default soundfonts

2.4.1 - 9/7/2008
----------------
* Ticks-per-beat retrieval
	BASS_ATTRIB_MIDI_PPQN (BASS_ChannelGetAttribute option)

2.4 - 2/4/2008
--------------
* Tick-based positioning
	BASS_POS_MIDI_TICK (BASS_ChannelGetLength/GetPosition/SetPosition mode)
	BASS_SYNC_MIDI_TICK (BASS_ChannelSetSync type)
* Preset name retrieval
	BASS_MIDI_FontGetPreset
* Text markers
	BASS_MIDI_MARK_TEXT (BASS_MIDI_StreamGetMark type)
	BASS_SYNC_MIDI_TEXT (BASS_ChannelSetSync type)
* Individual marker retrieval
	BASS_MIDI_StreamGetMark
	BASS_MIDI_StreamGetMarks *removed*
* Marker index passed to marker sync callbacks
	BASS_SYNC_MIDI_MARKER/CUE/LYRIC
* Use of BASS_Init sample rate
	BASS_MIDI_StreamCreate/File/User/URL
* Support for updated user file stream system
	BASS_MIDI_StreamCreateFileUser
* 64-bit file positioning
	BASS_MIDI_StreamCreateFile
* Callback "user" parameters changed to pointers
	BASS_MIDI_StreamCreateURL
	BASS_MIDI_StreamCreateFileUser

2.3.0.3 - 10/7/2007
-------------------
* Syncing on events
	BASS_SYNC_MIDI_EVENT (BASS_ChannelSetSync type)

2.3.0.2 - 26/2/2007
-------------------
* Reverb and chorus
	MIDI_EVENT_REVERB/CHORUS (BASS_MIDI_StreamEvent)
	MIDI_EVENT_REVERB_TIME/DELAY/LOCUTOFF/HICUTOFF/LEVEL (BASS_MIDI_StreamEvent)
	MIDI_EVENT_CHORUS_DELAY/DEPTH/RATE/FEEDBACK/LEVEL/REVERB (BASS_MIDI_StreamEvent)
	BASS_MIDI_NOFX (BASS_MIDI_StreamCreate/File/User/URL flag)
* Resonant low-pass filters
	MIDI_EVENT_CUTOFF/RESONANCE (BASS_MIDI_StreamEvent)
* Portamento
	MIDI_EVENT_PORTAMENTO/TIME/NOTE (BASS_MIDI_StreamEvent)
* Fine-tuning
	MIDI_EVENT_FINETUNE/COARSETUNE (BASS_MIDI_StreamEvent)
* Drum key specific parameters
	MIDI_EVENT_DRUM_FINETUNE/COARSETUNE/PAN/REVERB/CHORUS/CUTOFF/RESONANCE (BASS_MIDI_StreamEvent)
* Support for mono channel mode
	MIDI_EVENT_MODE (BASS_MIDI_StreamEvent)
* Support for master volume
	MIDI_EVENT_MASTERVOL (BASS_MIDI_StreamEvent)
* Channel level control
	MIDI_EVENT_MIXLEVEL (BASS_MIDI_StreamEvent)
* Channel transposing
	MIDI_EVENT_TRANSPOSE (BASS_MIDI_StreamEvent)
* Retrieval of current event values
	BASS_MIDI_StreamGetEvent
* Soundfont volume control
	BASS_MIDI_FontSetVolume/GetVolume
* Track number added to markers and syncs
	BASS_MIDI_MARK (track member)
	BASS_SYNC_MIDI_MARKER/CUE/LYRIC

2.3.0.1 - 1/12/2006
-------------------
* Optionally apply matching soundfonts to all banks
	BASS_CONFIG_MIDI_AUTOFONT (BASS_SetConfig option)
* Support for 0 length notes

2.3 - 14/11/2006
----------------
* First release


Bug reports, Suggestions, Comments, Enquiries, etc...
=====================================================
If you have any of the aforementioned please visit the BASS forum at
the website.

