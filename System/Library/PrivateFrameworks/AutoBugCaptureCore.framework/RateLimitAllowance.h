/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:56 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate;

@interface RateLimitAllowance : NSObject {

	NSDate* _lastCheckedAt;
	double _allowance;

}

@property (nonatomic,retain) NSDate * lastCheckedAt;              //@synthesize lastCheckedAt=_lastCheckedAt - In the implementation block
@property (assign,nonatomic) double allowance;                    //@synthesize allowance=_allowance - In the implementation block
-(double)allowance;
-(void)setAllowance:(double)arg1 ;
-(NSDate *)lastCheckedAt;
-(void)setLastCheckedAt:(NSDate *)arg1 ;
@end

