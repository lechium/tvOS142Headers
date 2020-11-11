/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:37 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SSRAssetProviding.h>

@class SSRTrialClientHost, CSAsset, NSString;

@interface SSRTrialAssetProvider : NSObject <SSRAssetProviding> {

	BOOL _validAssetsAvailable;
	SSRTrialClientHost* _trialClientHost;
	CSAsset* _currentAsset;

}

@property (nonatomic,retain) SSRTrialClientHost * trialClientHost;              //@synthesize trialClientHost=_trialClientHost - In the implementation block
@property (assign,nonatomic) BOOL validAssetsAvailable;                         //@synthesize validAssetsAvailable=_validAssetsAvailable - In the implementation block
@property (nonatomic,retain) CSAsset * currentAsset;                            //@synthesize currentAsset=_currentAsset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setCurrentAsset:(CSAsset *)arg1 ;
-(CSAsset *)currentAsset;
-(id)_getMetaDictFromResourcePath:(id)arg1 ;
-(BOOL)_isCurrentLanguageSupported:(id)arg1 inLocaleList:(id)arg2 ;
-(BOOL)_validateTrialAssetFiles:(id)arg1 resourcePath:(id)arg2 ;
-(void)_fetchTreatmentFactorsForLocale:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(unsigned long long)getAssetProviderType;
-(id)installedAssetOfType:(unsigned long long)arg1 forLanguageCode:(id)arg2 ;
-(SSRTrialClientHost *)trialClientHost;
-(void)setTrialClientHost:(SSRTrialClientHost *)arg1 ;
-(BOOL)validAssetsAvailable;
-(void)setValidAssetsAvailable:(BOOL)arg1 ;
@end
