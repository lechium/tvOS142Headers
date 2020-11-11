/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:07 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFAudio/AVFAudio-Structs.h>
@interface AVAudioEnvironmentDistanceAttenuationParameters : NSObject {

	void* _impl;

}

@property (assign,nonatomic) long long distanceAttenuationModel; 
@property (assign,nonatomic) float referenceDistance; 
@property (assign,nonatomic) float maximumDistance; 
@property (assign,nonatomic) float rolloffFactor; 
-(id)init;
-(void)dealloc;
-(id)initWithEnvironment:(AVAudioEnvironmentNodeImpl*)arg1 ;
-(void)setDistanceAttenuationModel:(long long)arg1 ;
-(long long)distanceAttenuationModel;
-(void)setMaximumDistance:(float)arg1 ;
-(float)maximumDistance;
-(void)setReferenceDistance:(float)arg1 ;
-(float)referenceDistance;
-(void)setRolloffFactor:(float)arg1 ;
-(float)rolloffFactor;
@end
