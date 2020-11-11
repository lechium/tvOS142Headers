/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:23 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/DNDSModeAssertionUpdateContext.h>

@class DNDSClientDetailsProvider, DNDSModeAssertionStore, DNDSModeAssertionUpdateResult, NSString;

@interface DNDSModeAssertionManagerUpdateContext : NSObject <DNDSModeAssertionUpdateContext> {

	DNDSClientDetailsProvider* _clientDetailsProvider;
	DNDSModeAssertionStore* _store;
	DNDSModeAssertionUpdateResult* _updateResult;

}

@property (nonatomic,copy,readonly) DNDSModeAssertionStore * store;                            //@synthesize store=_store - In the implementation block
@property (nonatomic,copy,readonly) DNDSModeAssertionUpdateResult * updateResult;              //@synthesize updateResult=_updateResult - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(DNDSModeAssertionStore *)store;
-(void)_resolveStore:(inout id)arg1 ;
-(void)_cleanupStore:(inout id)arg1 ;
-(id)_calculateUpdateResultForStore:(id)arg1 previousStore:(id)arg2 ;
-(id)takeAssertionWithUUID:(id)arg1 details:(id)arg2 source:(id)arg3 startDate:(id)arg4 ;
-(id)modeAssertionsMatchingPredicate:(id)arg1 ;
-(id)modeAssertionInvalidationsMatchingPredicate:(id)arg1 ;
-(id)takeAssertionWithDetails:(id)arg1 source:(id)arg2 startDate:(id)arg3 ;
-(id)invalidateAssertionsForRequest:(id)arg1 ;
-(id)initWithStore:(id)arg1 clientDetailsProvider:(id)arg2 ;
-(DNDSModeAssertionUpdateResult *)updateResult;
@end

