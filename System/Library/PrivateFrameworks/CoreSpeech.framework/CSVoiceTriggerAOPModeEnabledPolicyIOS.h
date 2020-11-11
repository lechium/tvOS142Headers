/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:54 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreSpeech/CSPolicy.h>
#import <libobjc.A.dylib/CSSiriClientBehaviorMonitorDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface CSVoiceTriggerAOPModeEnabledPolicyIOS : CSPolicy <CSSiriClientBehaviorMonitorDelegate> {

	NSObject*<OS_dispatch_queue> _recordStateQueue;
	BOOL _isSiriClientConsideredAsRecord;
	NSString* _pendingRecordingStopUUID;

}

@property (assign,nonatomic) BOOL isSiriClientConsideredAsRecord;              //@synthesize isSiriClientConsideredAsRecord=_isSiriClientConsideredAsRecord - In the implementation block
@property (nonatomic,retain) NSString * pendingRecordingStopUUID;              //@synthesize pendingRecordingStopUUID=_pendingRecordingStopUUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)_subscribeEventMonitors;
-(void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3 ;
-(void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(BOOL)arg3 option:(id)arg4 withEventUUID:(id)arg5 ;
-(void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2 ;
-(void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2 withEventUUID:(id)arg3 ;
-(void)siriClientBehaviorMonitor:(id)arg1 didChangedRecordState:(BOOL)arg2 withEventUUID:(id)arg3 withContext:(id)arg4 ;
-(void)_addVoiceTriggerAOPModeEnabledConditions;
-(void)_addConditionsForIOSBargeIn;
-(void)_addConditionsForIOSAOP;
-(BOOL)_isSpeechDetectionDevicePresent;
-(BOOL)isSiriClientConsideredAsRecord;
-(void)setIsSiriClientConsideredAsRecord:(BOOL)arg1 ;
-(void)setPendingRecordingStopUUID:(NSString *)arg1 ;
-(NSString *)pendingRecordingStopUUID;
@end

