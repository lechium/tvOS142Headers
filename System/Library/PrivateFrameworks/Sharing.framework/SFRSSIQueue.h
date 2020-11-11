/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:10 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray;

@interface SFRSSIQueue : NSObject {

	NSMutableArray* _rssiValues;
	NSMutableArray* _tickValues;

}

@property (nonatomic,readonly) double velocity; 
@property (nonatomic,readonly) double velocitySmoothed; 
-(double)velocity;
-(double)velocityFromA:(unsigned long long)arg1 toB:(unsigned long long)arg2 ;
-(void)addSample:(double)arg1 atTicks:(unsigned long long)arg2 ;
-(double)velocitySmoothed;
@end

