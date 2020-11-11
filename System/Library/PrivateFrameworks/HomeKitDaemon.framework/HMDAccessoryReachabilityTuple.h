/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:01 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HMDAccessoryReachabilityTuple : HMFObject {

	BOOL _previouslySentReachability;
	BOOL _currentReachability;
	NSString* _accessoryUUID;

}

@property (nonatomic,retain) NSString * accessoryUUID;                     //@synthesize accessoryUUID=_accessoryUUID - In the implementation block
@property (assign,nonatomic) BOOL previouslySentReachability;              //@synthesize previouslySentReachability=_previouslySentReachability - In the implementation block
@property (assign,nonatomic) BOOL currentReachability;                     //@synthesize currentReachability=_currentReachability - In the implementation block
+(id)tupleWithAccessoryUUID:(id)arg1 reachable:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)accessoryUUID;
-(void)setAccessoryUUID:(NSString *)arg1 ;
-(void)setPreviouslySentReachability:(BOOL)arg1 ;
-(void)setCurrentReachability:(BOOL)arg1 ;
-(BOOL)previouslySentReachability;
-(BOOL)currentReachability;
@end

