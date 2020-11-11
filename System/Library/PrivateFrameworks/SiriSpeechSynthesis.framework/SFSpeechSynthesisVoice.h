/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:33 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSLocale, NSString, SFSSVoiceAsset, SFSSResourceAsset;

@interface SFSpeechSynthesisVoice : NSObject {

	BOOL _isDefault;
	NSLocale* _locale;
	NSString* _gender;
	NSString* _name;
	SFSSVoiceAsset* _voiceAsset;
	SFSSResourceAsset* _resourceAsset;

}

@property (nonatomic,readonly) BOOL isDefault;                               //@synthesize isDefault=_isDefault - In the implementation block
@property (nonatomic,retain) SFSSVoiceAsset * voiceAsset;                    //@synthesize voiceAsset=_voiceAsset - In the implementation block
@property (nonatomic,retain) SFSSResourceAsset * resourceAsset;              //@synthesize resourceAsset=_resourceAsset - In the implementation block
@property (nonatomic,readonly) NSLocale * locale;                            //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) NSString * gender;                            //@synthesize gender=_gender - In the implementation block
@property (nonatomic,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
+(void)initialize;
+(id)supportedLocales;
+(id)supportedVoicesByLocale:(id)arg1 ;
+(id)getVoiceByName:(id)arg1 ;
+(id)getDefaultVoiceByLocale:(id)arg1 ;
-(NSString *)name;
-(NSLocale *)locale;
-(NSString *)gender;
-(BOOL)isDefault;
-(void)setVoiceAsset:(SFSSVoiceAsset *)arg1 ;
-(void)setResourceAsset:(SFSSResourceAsset *)arg1 ;
-(SFSSVoiceAsset *)voiceAsset;
-(SFSSResourceAsset *)resourceAsset;
-(id)init:(id)arg1 gender:(id)arg2 name:(id)arg3 isDefault:(BOOL)arg4 ;
@end

