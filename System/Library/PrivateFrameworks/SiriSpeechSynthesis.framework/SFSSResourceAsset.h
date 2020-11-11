/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:33 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface SFSSResourceAsset : NSObject {

	NSString* _assetPath;
	NSString* _language;
	long long _contentVersion;

}

@property (nonatomic,copy) NSString * assetPath;                      //@synthesize assetPath=_assetPath - In the implementation block
@property (nonatomic,copy,readonly) NSString * language;              //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) long long contentVersion;              //@synthesize contentVersion=_contentVersion - In the implementation block
+(id)generateResourceAssetFromResourceKeyString:(id)arg1 ;
-(id)key;
-(NSString *)language;
-(long long)contentVersion;
-(void)setAssetPath:(NSString *)arg1 ;
-(NSString *)assetPath;
-(id)init:(id)arg1 contentVersion:(long long)arg2 ;
@end
