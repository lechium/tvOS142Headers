/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:52 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CSAssetDownloadingOption : NSObject {

	BOOL _allowVoiceTriggerAssetDownloading;
	BOOL _allowEndpointAssetDownloading;
	BOOL _allowLanguageDetectorAssetDownloading;
	BOOL _allowAdBlockerAssetDownloading;
	BOOL _allowSpeakerRecognitionAssetDownloading;

}

@property (assign,nonatomic) BOOL allowVoiceTriggerAssetDownloading;                    //@synthesize allowVoiceTriggerAssetDownloading=_allowVoiceTriggerAssetDownloading - In the implementation block
@property (assign,nonatomic) BOOL allowEndpointAssetDownloading;                        //@synthesize allowEndpointAssetDownloading=_allowEndpointAssetDownloading - In the implementation block
@property (assign,nonatomic) BOOL allowLanguageDetectorAssetDownloading;                //@synthesize allowLanguageDetectorAssetDownloading=_allowLanguageDetectorAssetDownloading - In the implementation block
@property (assign,nonatomic) BOOL allowAdBlockerAssetDownloading;                       //@synthesize allowAdBlockerAssetDownloading=_allowAdBlockerAssetDownloading - In the implementation block
@property (assign,nonatomic) BOOL allowSpeakerRecognitionAssetDownloading;              //@synthesize allowSpeakerRecognitionAssetDownloading=_allowSpeakerRecognitionAssetDownloading - In the implementation block
-(id)description;
-(id)init;
-(BOOL)allowVoiceTriggerAssetDownloading;
-(void)setAllowVoiceTriggerAssetDownloading:(BOOL)arg1 ;
-(BOOL)allowEndpointAssetDownloading;
-(void)setAllowEndpointAssetDownloading:(BOOL)arg1 ;
-(BOOL)allowLanguageDetectorAssetDownloading;
-(void)setAllowLanguageDetectorAssetDownloading:(BOOL)arg1 ;
-(BOOL)allowAdBlockerAssetDownloading;
-(void)setAllowAdBlockerAssetDownloading:(BOOL)arg1 ;
-(BOOL)allowSpeakerRecognitionAssetDownloading;
-(void)setAllowSpeakerRecognitionAssetDownloading:(BOOL)arg1 ;
@end
