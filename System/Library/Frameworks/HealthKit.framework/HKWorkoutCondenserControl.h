/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:55 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_HKXPCExportable.h>

@class HKTaskServerProxyProvider, NSString;

@interface HKWorkoutCondenserControl : NSObject <_HKXPCExportable> {

	HKTaskServerProxyProvider* _proxyProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)taskIdentifier;
+(id)serverInterface;
-(id)exportedInterface;
-(void)connectionInvalidated;
-(id)remoteInterface;
-(id)initWithHealthStore:(id)arg1 ;
-(void)condenseWorkoutsForReason:(long long)arg1 workoutBatchLimit:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)condenseWorkoutWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)condensedWorkoutsWithCompletion:(/*^block*/id)arg1 ;
-(void)condensableWorkoutsWithCompletion:(/*^block*/id)arg1 ;
@end
