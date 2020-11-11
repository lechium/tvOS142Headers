/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AFSettingsConnection, NSString, NSArray;

@interface PBSSiriSettings : NSObject {

	AFSettingsConnection* _connection;
	BOOL _dictationEnabled;
	BOOL _siriEnabled;
	BOOL _offeredEnableAssistant;
	BOOL _offeredEnableDictation;
	unsigned long long _dataSharingOptInStatus;
	NSString* _language;

}

@property (assign,getter=isSiriEnabled,nonatomic) BOOL siriEnabled;                        //@synthesize siriEnabled=_siriEnabled - In the implementation block
@property (assign,getter=isDictationEnabled,nonatomic) BOOL dictationEnabled;              //@synthesize dictationEnabled=_dictationEnabled - In the implementation block
@property (getter=isSiriAvailable,nonatomic,readonly) BOOL siriAvailable; 
@property (assign,nonatomic) BOOL offeredEnableAssistant;                                  //@synthesize offeredEnableAssistant=_offeredEnableAssistant - In the implementation block
@property (assign,nonatomic) BOOL offeredEnableDictation;                                  //@synthesize offeredEnableDictation=_offeredEnableDictation - In the implementation block
@property (assign,nonatomic) unsigned long long dataSharingOptInStatus;                    //@synthesize dataSharingOptInStatus=_dataSharingOptInStatus - In the implementation block
@property (nonatomic,copy) NSString * language;                                            //@synthesize language=_language - In the implementation block
@property (nonatomic,copy,readonly) NSArray * availableLanguages; 
@property (nonatomic,copy,readonly) NSArray * allAvailableLanguages; 
+(id)sharedInstance;
+(long long)_afDataSharingEnabledForOptInStatus:(unsigned long long)arg1 ;
+(unsigned long long)_dataSharingOptInStatusForAFDataSharingOptInStatus:(long long)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(NSArray *)availableLanguages;
-(void)_reloadSettings;
-(unsigned long long)dataSharingOptInStatus;
-(void)setDataSharingOptInStatus:(unsigned long long)arg1 ;
-(void)setSiriEnabled:(BOOL)arg1 ;
-(void)setDictationEnabled:(BOOL)arg1 ;
-(void)deleteSiriHistoryWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isSiriEnabled;
-(void)prefsChanged:(id)arg1 ;
-(BOOL)isDictationSupportedForSystemLanguage:(id)arg1 ;
-(BOOL)isSirisupportedForStoreFrontID:(id)arg1 ;
-(id)bestSiriLanguageForStoreFrontID:(id)arg1 ;
-(id)preferredSystemLanguageForSiriLanguage:(id)arg1 ;
-(id)bestSiriLanguageForSystemLanguage:(id)arg1 ;
-(id)bestDictationLanguageForSystemLanguage:(id)arg1 ;
-(BOOL)isDictationEnabled;
-(void)setOfferedEnableAssistant:(BOOL)arg1 ;
-(void)setOfferedEnableDictation:(BOOL)arg1 ;
-(BOOL)isSiriAvailable;
-(NSArray *)allAvailableLanguages;
-(BOOL)isSiriSupportedForSystemLanguage:(id)arg1 ;
-(BOOL)offeredEnableAssistant;
-(BOOL)offeredEnableDictation;
@end

