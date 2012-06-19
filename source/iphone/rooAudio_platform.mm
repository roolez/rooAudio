/*
 * iphone-specific implementation of the rooAudio extension.
 * Add any platform-specific functionality here.
 */
/*
 * NOTE: This file was originally written by the extension builder, but will not
 * be overwritten (unless --force is specified) and is intended to be modified.
 */
#include "rooAudio_internal.h"

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>


AVAudioPlayer * audioPlayer = nil;


s3eResult rooAudioInit_platform()
{
    // Add any platform-specific initialisation code here
    return S3E_RESULT_SUCCESS;
}

void rooAudioTerminate_platform()
{
    // Add any platform-specific termination code here
}

void rooAudio_init_platform()
{
}

void rooAudio_play_platform(const char * filename)
{
    if(audioPlayer)
        [audioPlayer release];
    
    
    NSString * s = [NSString stringWithUTF8String:filename];
    NSURL *url = [NSURL fileURLWithPath:[NSString stringWithFormat:s, [[NSBundle mainBundle] resourcePath]]];
	
	NSError *error;
	audioPlayer = [[AVAudioPlayer alloc] initWithContentsOfURL:url error:&error];
	
	if (audioPlayer == nil){
		NSLog([error description]);				
    }else {
        audioPlayer.numberOfLoops = -1;
		[audioPlayer play];    
    }
}

void rooAudio_stop_platform()
{
    if(audioPlayer){
        [audioPlayer stop];
    }
}
