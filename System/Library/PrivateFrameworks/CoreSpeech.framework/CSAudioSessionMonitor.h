/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:53 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreSpeech/CSEventMonitor.h>
#import <libobjc.A.dylib/CSAudioSessionEventProvidingDelegate.h>

@class NSString;

@interface CSAudioSessionMonitor : CSEventMonitor <CSAudioSessionEventProvidingDelegate> {

	unsigned long long _audioSessionState;

}

@property (assign,getter=getAudioSessionState,nonatomic) unsigned long long audioSessionState;              //@synthesize audioSessionState=_audioSessionState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)_stopMonitoring;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)audioSessionEventProvidingWillSetAudioSessionActive:(BOOL)arg1 ;
-(void)audioSessionEventProvidingDidSetAudioSessionActive:(BOOL)arg1 ;
-(unsigned long long)getAudioSessionState;
-(void)setAudioSessionState:(unsigned long long)arg1 ;
@end

