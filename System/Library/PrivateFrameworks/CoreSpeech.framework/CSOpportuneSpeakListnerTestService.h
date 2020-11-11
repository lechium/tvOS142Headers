/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:55 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CSOpportuneSpeakListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CSOpportuneSpeakListener, NSString;

@interface CSOpportuneSpeakListnerTestService : NSObject <CSOpportuneSpeakListenerDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	int _notifyToken;
	CSOpportuneSpeakListener* listener;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)start;
-(void)opportuneSpeakListener:(id)arg1 didStopUnexpectly:(BOOL)arg2 ;
-(void)opportuneSpeakListener:(id)arg1 hasRemoteVADAvailable:(BOOL)arg2 ;
-(void)opportuneSpeakListener:(id)arg1 hasVADAvailable:(BOOL)arg2 ;
-(void)receiveOpportuneSpeakListenerStart;
-(void)receiveOpportuneSpeakListenerStop;
@end

