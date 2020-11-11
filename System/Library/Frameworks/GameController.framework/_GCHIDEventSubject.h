/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:13 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameController/GameController-Structs.h>
#import <libobjc.A.dylib/_GCHIDEventSource.h>

@class NSDictionary, NSString;

@interface _GCHIDEventSubject : NSObject <_GCHIDEventSource> {

	os_unfair_lock_s _lock;
	NSDictionary* _handlersByService;
	AB _stopped;

}

@property (getter=isStopped) BOOL stopped; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)isStopped;
-(void)setStopped:(BOOL)arg1 ;
-(id)observeHIDEvents:(/*^block*/id)arg1 forService:(id)arg2 ;
-(id)observeHIDEvents:(/*^block*/id)arg1 ;
-(void)publishHIDEvent:(IOHIDEventRef)arg1 ;
@end

