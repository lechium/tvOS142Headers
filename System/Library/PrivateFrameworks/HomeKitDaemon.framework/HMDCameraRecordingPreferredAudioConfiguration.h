/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:12 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSNumber;

@interface HMDCameraRecordingPreferredAudioConfiguration : NSObject {

	NSNumber* _bitRate;
	long long _sampleRate;

}

@property (readonly) NSNumber * bitRate;                //@synthesize bitRate=_bitRate - In the implementation block
@property (readonly) long long sampleRate;              //@synthesize sampleRate=_sampleRate - In the implementation block
-(id)description;
-(NSNumber *)bitRate;
-(long long)sampleRate;
-(id)initWithSampleRate:(long long)arg1 bitRate:(id)arg2 ;
@end

