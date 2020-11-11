/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:28 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFCore/AVFCore-Structs.h>
@class NSString, AVScheduledAudioParameters, AVWeakReference, NSError;

@interface AVSampleBufferAudioRendererInternal : NSObject {

	NSString* audioOutputDeviceUniqueID;
	NSString* audioTimePitchAlgorithm;
	SCD_Struct_AV38* mediaDataRequester;
	float rate;
	float volume;
	BOOL muted;
	AVScheduledAudioParameters* scheduledAudioParameters;
	OpaqueCMTimebaseRef readOnlyControlTimebase;
	AVWeakReference* weakReferenceToSynchronizer;
	AVWeakReference* weakReferenceToSelf;
	long long status;
	NSError* error;
	OpaqueFigSampleBufferAudioRendererRef figAudioRenderer;

}
@end

