/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:08 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceOverServices.framework/VoiceOverServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface VOSScreenreaderMode : NSObject {

	NSString* _rawValue;

}

@property (nonatomic,readonly) NSString * rawValue; 
@property (nonatomic,readonly) NSString * localizedName; 
+(id)allModes;
+(id)Invalid;
+(id)Default;
+(id)Handwriting;
+(id)BrailleScreenInput;
+(id)modeWithStringValue:(id)arg1 ;
-(id)description;
-(NSString *)localizedName;
-(NSString *)rawValue;
-(id)_initWithRawValue:(id)arg1 ;
@end

