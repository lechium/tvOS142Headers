/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AFInvalidating.h>

@protocol OS_dispatch_queue, AFAssertionCoordinatorDelegate;
@class NSObject, NSMutableDictionary, NSString;

@interface AFAssertionCoordinator : NSObject <AFInvalidating> {

	NSObject*<OS_dispatch_queue> _queue;
	Aq _numberOfPendingAndActiveRecords;
	NSMutableDictionary* _recordsByUUID;
	id<AFAssertionCoordinatorDelegate> _delegate;
	NSString* _identifier;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)invalidate;
-(NSString *)identifier;
-(id)_records;
-(void)barrier:(/*^block*/id)arg1 ;
-(void)relinquishAssertionWithUUID:(id)arg1 context:(id)arg2 ;
-(unsigned long long)numberOfPendingAndActiveAssertions;
-(BOOL)_addRecord:(id)arg1 isFirstRecord:(BOOL*)arg2 ;
-(void)_didAcquireAssertion:(id)arg1 isFirstAssertion:(BOOL)arg2 ;
-(id)_removeRecordWithUUID:(id)arg1 isLastRecord:(BOOL*)arg2 ;
-(void)_didRelinquishAssertion:(id)arg1 isLastAssertion:(BOOL)arg2 ;
-(void)_removeAllRecords;
-(id)initWithIdentifier:(id)arg1 queue:(id)arg2 delegate:(id)arg3 ;
-(id)acquireRelinquishableAssertionWithContext:(id)arg1 relinquishmentHandler:(/*^block*/id)arg2 ;
-(void)getActiveAssertionsWithCompletion:(/*^block*/id)arg1 ;
@end

