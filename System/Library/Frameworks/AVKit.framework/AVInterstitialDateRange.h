/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:50 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVKit/AVKit-Structs.h>
#import <AVKit/AVInterstitialTimeRange.h>

@class NSDate;

@interface AVInterstitialDateRange : AVInterstitialTimeRange {

	NSDate* _startDate;
	NSDate* _endDate;

}

@property (readonly) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (readonly) NSDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
-(id)description;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(void)setEndDate:(NSDate *)arg1 ;
-(id)initWithStart:(id)arg1 end:(id)arg2 ;
-(id)initWithTimeRange:(SCD_Struct_AV8)arg1 ;
-(BOOL)isEqualToInterstitialTimeRange:(id)arg1 ;
@end
