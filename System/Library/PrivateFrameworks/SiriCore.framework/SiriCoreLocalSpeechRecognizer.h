/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:28 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AFSpeechServiceDelegate.h>

@protocol OS_dispatch_queue, SiriCoreLocalSpeechRecognizerDelegate;
@class NSObject, NSXPCConnection, NSString, NSError, NSData;

@interface SiriCoreLocalSpeechRecognizer : NSObject <AFSpeechServiceDelegate> {

	BOOL _recognitionActive;
	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _esConnection;
	BOOL _hasRecognizedAnything;
	unsigned char _instanceUUID[16];
	NSString* _currentLanguage;
	NSError* _recognitionError;
	NSString* _preheatedProfileAssetPath;
	NSData* _preheatedProfile;
	id<SiriCoreLocalSpeechRecognizerDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) id<SiriCoreLocalSpeechRecognizerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profilePathForLanguage:(id)arg1 errorOut:(id*)arg2 ;
+(void)resetCacheAndCompileAllAssets;
+(id)speechProfileDataLastModifiedDataForLanguage:(id)arg1 ;
+(id)dictionaryWithContentsProfilePathForLanguage:(id)arg1 errorOut:(id*)arg2 ;
+(id)installedAssetSizeWithError:(id*)arg1 ;
+(id)purgeInstalledAssetsExceptLanguages:(id)arg1 error:(id*)arg2 ;
+(id)offlineDictationStatusIgnoringCache:(BOOL)arg1 error:(id*)arg2 ;
-(id)init;
-(void)invalidate;
-(id<SiriCoreLocalSpeechRecognizerDelegate>)delegate;
-(id)_service;
-(id)_connection;
-(void)getOfflineDictationStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)sendSpeechCorrectionInfo:(id)arg1 interactionIdentifier:(id)arg2 ;
-(void)preheatSpeechRecognitionWithLanguage:(id)arg1 modelOverrideURL:(id)arg2 ;
-(void)addAudioPacket:(id)arg1 ;
-(void)finishAudio;
-(void)createSpeechProfileWithLanguage:(id)arg1 modelOverridePath:(id)arg2 JSONData:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)getOfflineDictationStatusIgnoringCache:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)fetchAssetsForLanguage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchUserDataForLanguage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)runAdaptationRecipeEvaluation:(id)arg1 recordData:(id)arg2 attachments:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)readProfileAndUserDataWithLanguage:(id)arg1 allowOverride:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)writeDESRecord;
-(void)invalidatePersonalizedLM;
-(void)runEvaluationWithDESRecordDatas:(id)arg1 language:(id)arg2 recipe:(id)arg3 fidesPersonalizedLMPath:(id)arg4 fidesPersonalizedLMTrainingAsset:(id)arg5 scrubResult:(BOOL)arg6 completion:(/*^block*/id)arg7 ;
-(oneway void)speechServiceDidRecognizeTokens:(id)arg1 ;
-(oneway void)speechServiceDidProcessAudioDuration:(double)arg1 ;
-(oneway void)speechServiceDidRecognizeRawEagerRecognitionCandidate:(id)arg1 ;
-(oneway void)speechServiceDidRecognizePackage:(id)arg1 ;
-(oneway void)speechServiceDidFinishRecognitionWithStatistics:(id)arg1 error:(id)arg2 ;
-(id)_newConnection;
-(id)initWithDelegate:(id)arg1 instanceUUID:(unsigned char)arg2 ;
-(id)_serviceWithFunctionName:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(id)_synchronousServiceWithErrorHandler:(/*^block*/id)arg1 ;
-(void)startSpeechRecognitionWithLanguage:(id)arg1 interactionIdentifier:(id)arg2 task:(id)arg3 context:(id)arg4 narrowband:(BOOL)arg5 detectUtterances:(BOOL)arg6 maximumRecognitionDuration:(double)arg7 farField:(BOOL)arg8 secureOfflineOnly:(BOOL)arg9 censorSpeech:(BOOL)arg10 originalAudioFileURL:(id)arg11 overrides:(id)arg12 modelOverrideURL:(id)arg13 applicationName:(id)arg14 shouldStoreAudioOnDevice:(BOOL)arg15 didStartHandler:(/*^block*/id)arg16 ;
-(void)updateSpeechProfileWithLanguage:(id)arg1 modelOverridePath:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)resetDESWithCompletion:(/*^block*/id)arg1 ;
-(void)deleteAllDESRecordsForDictationPersonalization;
-(unsigned char*)instanceUUID;
-(void)removePersonalizedLMForFidesOnly:(BOOL)arg1 ;
@end

