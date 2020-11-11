/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:15 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSDate;

@interface WFCachedDonations : NSObject {

	NSArray* _donations;
	NSDate* _fetchDate;
	unsigned long long _ballpark;

}

@property (nonatomic,readonly) NSArray * donations;                      //@synthesize donations=_donations - In the implementation block
@property (nonatomic,readonly) NSDate * fetchDate;                       //@synthesize fetchDate=_fetchDate - In the implementation block
@property (nonatomic,readonly) unsigned long long ballpark;              //@synthesize ballpark=_ballpark - In the implementation block
-(id)initWithDonations:(id)arg1 ballpark:(unsigned long long)arg2 ;
-(BOOL)isValidWithBallpark:(unsigned long long)arg1 ;
-(NSArray *)donations;
-(NSDate *)fetchDate;
-(unsigned long long)ballpark;
@end

