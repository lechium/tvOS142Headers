/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:06 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFAudio/AVFAudio-Structs.h>
#import <AVFAudio/AVAudioUnitEffect.h>

@interface AVAudioUnitDistortion : AVAudioUnitEffect

@property (assign,nonatomic) float preGain; 
@property (assign,nonatomic) float wetDryMix; 
-(id)init;
-(void)setWetDryMix:(float)arg1 ;
-(float)wetDryMix;
-(void)loadFactoryPreset:(long long)arg1 ;
-(AUPreset*)FillOutAUPreset:(long long)arg1 ;
-(void)setPreGain:(float)arg1 ;
-(float)preGain;
@end
