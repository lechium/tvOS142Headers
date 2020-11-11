/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:09 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class VSSpeechEngine, VSVoiceResourceAsset, NSObject;

@interface VSPrewarmService : NSObject {

	VSSpeechEngine* _cachedEngine;
	VSVoiceResourceAsset* _loadedResources;
	NSObject*<OS_dispatch_queue> _prewarmQueue;

}

@property (nonatomic,retain) VSSpeechEngine * cachedEngine;                          //@synthesize cachedEngine=_cachedEngine - In the implementation block
@property (nonatomic,retain) VSVoiceResourceAsset * loadedResources;                 //@synthesize loadedResources=_loadedResources - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> prewarmQueue;              //@synthesize prewarmQueue=_prewarmQueue - In the implementation block
+(id)sharedService;
-(id)init;
-(NSObject*<OS_dispatch_queue>)prewarmQueue;
-(void)setPrewarmQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)prewarmWithRequest:(id)arg1 ;
-(id)cachedEngineForVoice:(id)arg1 resources:(id)arg2 ;
-(id)loadEngineForVoice:(id)arg1 resources:(id)arg2 ;
-(void)handleVoiceSelectionPurge:(id)arg1 ;
-(VSSpeechEngine *)cachedEngine;
-(void)unloadEngine;
-(id)_cachedEngineForVoice:(id)arg1 resources:(id)arg2 ;
-(id)_engineForVoice:(id)arg1 resources:(id)arg2 ;
-(void)_loadVoiceResources:(id)arg1 forEngine:(id)arg2 ;
-(void)setCachedEngine:(VSSpeechEngine *)arg1 ;
-(void)setLoadedResources:(VSVoiceResourceAsset *)arg1 ;
-(void)waitUntilPrewarmFinish;
-(VSVoiceResourceAsset *)loadedResources;
@end

