/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:57 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface BSMonotonicReferenceTime : NSObject {

	double _startTimeStamp;

}

@property (nonatomic,readonly) double timeIntervalSinceNow; 
@property (nonatomic,readonly) double timeIntervalToNow; 
+(id)distantFuture;
+(id)distantPast;
+(id)now;
+(id)referenceTimeWithTimeIntervalSinceNow:(double)arg1 ;
+(id)referenceTimeForDate:(id)arg1 ;
-(id)date;
-(double)timeIntervalSinceNow;
-(double)timeIntervalToNow;
-(double)timeIntervalSinceReferenceTime:(id)arg1 ;
@end

