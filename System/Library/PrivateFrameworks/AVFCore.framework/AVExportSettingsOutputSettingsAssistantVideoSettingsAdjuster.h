/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:30 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVOutputSettingsAssistantVideoSettingsAdjuster.h>

@class NSString, NSDictionary;

@interface AVExportSettingsOutputSettingsAssistantVideoSettingsAdjuster : NSObject <AVOutputSettingsAssistantVideoSettingsAdjuster> {

	NSString* _outputSettingsPresetIdentifier;
	NSDictionary* _exportSettings;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(long long)averageBitRateForSourceFormatDescription:(opaqueCMFormatDescriptionRef)arg1 andTargetFrameRate:(float)arg2 andEncoderSpecification:(id)arg3 ;
-(id)colorSpaceFromSourceFormatDescriptions:(id)arg1 andRendererColorSpace:(id)arg2 ;
-(id)initWithOutputSettingsPreset:(id)arg1 ;
@end
