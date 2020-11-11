/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:29 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMCameraStreamAudioPreferences, HMCameraStreamVideoPreferences;

@interface HMCameraStreamPreferences : NSObject <NSSecureCoding> {

	HMCameraStreamAudioPreferences* _audioPreferences;
	HMCameraStreamVideoPreferences* _videoPreferences;
	long long _minimumRequiredAvailableOrInUseStreams;

}

@property (nonatomic,readonly) HMCameraStreamAudioPreferences * audioPreferences;              //@synthesize audioPreferences=_audioPreferences - In the implementation block
@property (nonatomic,readonly) HMCameraStreamVideoPreferences * videoPreferences;              //@synthesize videoPreferences=_videoPreferences - In the implementation block
@property (assign) long long minimumRequiredAvailableOrInUseStreams;                           //@synthesize minimumRequiredAvailableOrInUseStreams=_minimumRequiredAvailableOrInUseStreams - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HMCameraStreamAudioPreferences *)audioPreferences;
-(HMCameraStreamVideoPreferences *)videoPreferences;
-(long long)minimumRequiredAvailableOrInUseStreams;
-(id)initWithAudioPreferences:(id)arg1 videoPreferences:(id)arg2 ;
-(void)setMinimumRequiredAvailableOrInUseStreams:(long long)arg1 ;
@end

