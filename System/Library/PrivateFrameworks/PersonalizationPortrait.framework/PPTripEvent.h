/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:47 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PersonalizationPortrait/PPScoredEvent.h>

@class NSArray;

@interface PPTripEvent : PPScoredEvent {

	NSArray* _tripParts;

}

@property (nonatomic,readonly) NSArray * tripParts;              //@synthesize tripParts=_tripParts - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)destinations;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 tripParts:(id)arg3 ;
-(id)destinationsBasedTitle;
-(NSArray *)tripParts;
@end

