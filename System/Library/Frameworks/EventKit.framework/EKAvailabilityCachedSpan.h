/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:14 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate, EKAvailabilitySpan;

@interface EKAvailabilityCachedSpan : NSObject {

	NSDate* _creationDate;
	EKAvailabilitySpan* _span;

}

@property (nonatomic,retain) NSDate * creationDate;                  //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) EKAvailabilitySpan * span;              //@synthesize span=_span - In the implementation block
-(id)description;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(EKAvailabilitySpan *)span;
-(void)setSpan:(EKAvailabilitySpan *)arg1 ;
-(id)initWithSpan:(id)arg1 ;
@end

