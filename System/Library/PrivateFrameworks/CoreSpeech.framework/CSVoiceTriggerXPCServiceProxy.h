/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:54 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableSet, NSHashTable;

@interface CSVoiceTriggerXPCServiceProxy : NSObject {

	BOOL _isPhraseSpotterBypassed;
	BOOL _isRaiseToSpeakBypassed;
	NSMutableSet* _activationAssertions;
	NSHashTable* _observers;

}

@property (nonatomic,retain) NSMutableSet * activationAssertions;              //@synthesize activationAssertions=_activationAssertions - In the implementation block
@property (assign,nonatomic) BOOL isPhraseSpotterBypassed;                     //@synthesize isPhraseSpotterBypassed=_isPhraseSpotterBypassed - In the implementation block
@property (assign,nonatomic) BOOL isRaiseToSpeakBypassed;                      //@synthesize isRaiseToSpeakBypassed=_isRaiseToSpeakBypassed - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                          //@synthesize observers=_observers - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSHashTable *)observers;
-(void)setObservers:(NSHashTable *)arg1 ;
-(void)registerObserver:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
-(void)enableVoiceTrigger:(BOOL)arg1 withAssertion:(id)arg2 timestamp:(double)arg3 ;
-(void)setPhraseSpotterBypassing:(BOOL)arg1 timeout:(double)arg2 ;
-(void)setRaiseToSpeakBypassing:(BOOL)arg1 timeout:(double)arg2 ;
-(void)notifyVoiceTriggeredSiriSessionCancelled;
-(id)fetchVoiceTriggerStats;
-(NSMutableSet *)activationAssertions;
-(void)setActivationAssertions:(NSMutableSet *)arg1 ;
-(void)notifyServiceConnectionLost;
-(BOOL)isPhraseSpotterBypassed;
-(void)setIsPhraseSpotterBypassed:(BOOL)arg1 ;
-(BOOL)isRaiseToSpeakBypassed;
-(void)setIsRaiseToSpeakBypassed:(BOOL)arg1 ;
@end
