/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:44 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AudioServerApplication.framework/AudioServerApplication
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AudioServerApplication/AudioServerApplication-Structs.h>
@class NSArray, NSString, ASAAudioDevice;

@interface ASAPlaythrough : NSObject {

	/*function pointer*/void* _procID;
	SCD_Struct_AS0* _ioContext;
	NSArray* _channelMapping;
	unsigned _aggregateID;
	NSString* _aggregateUID;
	BOOL _playing;
	ASAAudioDevice* _audioDevice;

}

@property (retain) ASAAudioDevice * audioDevice;              //@synthesize audioDevice=_audioDevice - In the implementation block
@property (assign) BOOL playing;                              //@synthesize playing=_playing - In the implementation block
-(void)dealloc;
-(BOOL)start;
-(BOOL)stop;
-(BOOL)playing;
-(void)setPlaying:(BOOL)arg1 ;
-(id)initWithDevice:(id)arg1 usingChannelMapping:(id)arg2 ;
-(void)_createIOContext;
-(ASAAudioDevice *)audioDevice;
-(void)_destroyIOContext;
-(void)_freeIOContext:(SCD_Struct_AS0*)arg1 ;
-(id)initWithDevices:(id)arg1 usingMasterDevice:(id)arg2 andClockDeviceUID:(id)arg3 withName:(id)arg4 isPrivate:(BOOL)arg5 usingChannelMapping:(id)arg6 ;
-(void)setAudioDevice:(ASAAudioDevice *)arg1 ;
@end

