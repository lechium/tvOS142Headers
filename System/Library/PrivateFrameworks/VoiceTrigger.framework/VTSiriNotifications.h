/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:37 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <VoiceTrigger/VoiceTrigger-Structs.h>
@class VTSiriPHash;

@interface VTSiriNotifications : NSObject {

	CFNotificationCenterRef _center;
	VTSiriPHash* _hasher;

}
-(id)init;
-(void)broadcastAudioPayload:(id)arg1 numSamples:(unsigned long long)arg2 superVectorScore:(double)arg3 absoluteTime:(unsigned long long)arg4 ;
@end

