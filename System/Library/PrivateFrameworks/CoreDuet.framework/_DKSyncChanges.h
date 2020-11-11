/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:09 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSDate;

@interface _DKSyncChanges : NSObject {

	NSArray* _additionChangeSets;
	NSArray* _deletionChangeSets;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,readonly) NSArray * additionChangeSets;              //@synthesize additionChangeSets=_additionChangeSets - In the implementation block
@property (nonatomic,readonly) NSArray * deletionChangeSets;              //@synthesize deletionChangeSets=_deletionChangeSets - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                        //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                          //@synthesize endDate=_endDate - In the implementation block
-(NSDate *)endDate;
-(NSDate *)startDate;
-(NSArray *)additionChangeSets;
-(NSArray *)deletionChangeSets;
@end

