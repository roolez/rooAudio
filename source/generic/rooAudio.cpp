/*
Generic implementation of the rooAudio extension.
This file should perform any platform-indepedentent functionality
(e.g. error checking) before calling platform-dependent implementations.
*/

/*
 * NOTE: This file was originally written by the extension builder, but will not
 * be overwritten (unless --force is specified) and is intended to be modified.
 */


#include "rooAudio_internal.h"
s3eResult rooAudioInit()
{
    //Add any generic initialisation code here
    return rooAudioInit_platform();
}

void rooAudioTerminate()
{
    //Add any generic termination code here
    rooAudioTerminate_platform();
}

void rooAudio_init()
{
	rooAudio_init_platform();
}

void rooAudio_play(const char * filename)
{
	rooAudio_play_platform(filename);
}

void rooAudio_stop()
{
	rooAudio_stop_platform();
}
