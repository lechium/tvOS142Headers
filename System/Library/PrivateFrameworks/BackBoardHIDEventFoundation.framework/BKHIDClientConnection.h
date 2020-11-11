/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:57 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/BackBoardHIDEventFoundation.framework/BackBoardHIDEventFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BackBoardHIDEventFoundation/BackBoardHIDEventFoundation-Structs.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class NSString, BSCompoundAssertion;

@interface BKHIDClientConnection : NSObject <BSInvalidatable> {

	IOHIDEventSystemConnectionRef _connection;
	long long _versionedPID;
	int _pid;
	unsigned _task;
	NSString* _bundleID;
	os_unfair_lock_s _lock;
	BSCompoundAssertion* _observerAssertion;
	atomic_flag _invalid;

}

@property (nonatomic,copy,readonly) NSString * bundleID;              //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) int pid;                               //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) long long versionedPID;                //@synthesize versionedPID=_versionedPID - In the implementation block
@property (nonatomic,readonly) unsigned task;                         //@synthesize task=_task - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)connectionWithConnection:(IOHIDEventSystemConnectionRef)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)dealloc;
-(void)invalidate;
-(NSString *)bundleID;
-(IOHIDEventSystemConnectionRef)connection;
-(id)initWithConnection:(IOHIDEventSystemConnectionRef)arg1 ;
-(int)pid;
-(long long)versionedPID;
-(unsigned)task;
-(id)addDisconnectionObserverBlock:(/*^block*/id)arg1 ;
@end

