/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:01 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <DiagnosticsSupport/DiagnosticsSupport-Structs.h>
@class NSMutableSet, NSLock, DSTestAutomation, NSObject;

@interface DSHardwareButtonEventMonitor : NSObject {

	IOHIDEventSystemClientRef _buttonHIDSystemClient;
	BOOL _allowEvents;
	NSMutableSet* _buttonEventHandlers;
	NSLock* _eventHandlerChangeLock;
	DSTestAutomation* _testAutomation;
	NSObject*<OS_dispatch_queue> _buttonEventQueue;
	NSObject*<OS_dispatch_queue> _targetQueue;
	NSObject*<OS_dispatch_queue> _systemClientCreationQueue;

}

@property (nonatomic,retain) NSMutableSet * buttonEventHandlers;                                  //@synthesize buttonEventHandlers=_buttonEventHandlers - In the implementation block
@property (assign,nonatomic) BOOL allowEvents;                                                    //@synthesize allowEvents=_allowEvents - In the implementation block
@property (nonatomic,retain) NSLock * eventHandlerChangeLock;                                     //@synthesize eventHandlerChangeLock=_eventHandlerChangeLock - In the implementation block
@property (nonatomic,retain) DSTestAutomation * testAutomation;                                   //@synthesize testAutomation=_testAutomation - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> buttonEventQueue;                       //@synthesize buttonEventQueue=_buttonEventQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> targetQueue;                            //@synthesize targetQueue=_targetQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> systemClientCreationQueue;              //@synthesize systemClientCreationQueue=_systemClientCreationQueue - In the implementation block
-(id)init;
-(void)setTargetQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)removeTarget:(id)arg1 ;
-(void)stopWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)allowEvents;
-(NSObject*<OS_dispatch_queue>)targetQueue;
-(NSObject*<OS_dispatch_queue>)systemClientCreationQueue;
-(NSLock *)eventHandlerChangeLock;
-(NSMutableSet *)buttonEventHandlers;
-(id)_handlersForTarget:(id)arg1 ;
-(id)_handlersForEvent:(unsigned long long)arg1 ;
-(BOOL)_triggerHandlers:(id)arg1 event:(unsigned long long)arg2 ;
-(DSTestAutomation *)testAutomation;
-(void)startWithPriority:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)addTarget:(id)arg1 action:(SEL)arg2 forButtonEvents:(unsigned long long)arg3 propagate:(BOOL)arg4 ;
-(void)removeTarget:(id)arg1 action:(SEL)arg2 forButtonEvents:(unsigned long long)arg3 propagate:(BOOL)arg4 ;
-(BOOL)hasTarget:(id)arg1 ;
-(void)setButtonEventHandlers:(NSMutableSet *)arg1 ;
-(void)setAllowEvents:(BOOL)arg1 ;
-(void)setEventHandlerChangeLock:(NSLock *)arg1 ;
-(void)setTestAutomation:(DSTestAutomation *)arg1 ;
-(NSObject*<OS_dispatch_queue>)buttonEventQueue;
-(void)setButtonEventQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setSystemClientCreationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

