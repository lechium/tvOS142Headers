/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:30 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFCore/AVFCore-Structs.h>
@class AVOutputSettingsAssistantInternal, NSDictionary, NSString;

@interface AVOutputSettingsAssistant : NSObject {

	AVOutputSettingsAssistantInternal* _internal;

}

@property (nonatomic,readonly) NSDictionary * audioSettings; 
@property (nonatomic,readonly) NSDictionary * videoSettings; 
@property (nonatomic,readonly) NSString * outputFileType; 
+(id)outputSettingsAssistantWithPreset:(id)arg1 ;
+(id)_allOutputSettingsPresets;
+(id)baseSettingsProviderForPreset:(id)arg1 ;
+(id)videoSettingsAdjusterForPreset:(id)arg1 ;
+(id)videoEncoderCapabilities;
+(BOOL)validatesSourceVideoMinFrameDuration;
+(id)availableOutputSettingsPresets;
-(id)init;
-(void)dealloc;
-(id)initWithPreset:(id)arg1 ;
-(NSString *)outputFileType;
-(NSDictionary *)audioSettings;
-(NSDictionary *)videoSettings;
-(id)videoEncoderSpecification;
-(const opaqueCMFormatDescriptionRef)sourceVideoFormat;
-(const opaqueCMFormatDescriptionRef)sourceAudioFormat;
-(SCD_Struct_AV6)sourceVideoAverageFrameDuration;
-(SCD_Struct_AV6)sourceVideoMinFrameDuration;
-(void)setSourceAudioFormat:(opaqueCMFormatDescriptionRef)arg1 ;
-(void)setSourceVideoFormat:(opaqueCMFormatDescriptionRef)arg1 ;
-(void)setSourceVideoAverageFrameDuration:(SCD_Struct_AV6)arg1 ;
-(void)setSourceVideoMinFrameDuration:(SCD_Struct_AV6)arg1 ;
-(void)setVideoEncoderSpecification:(id)arg1 ;
@end

