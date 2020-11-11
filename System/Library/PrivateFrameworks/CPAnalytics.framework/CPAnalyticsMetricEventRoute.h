/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:08 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray;

@interface CPAnalyticsMetricEventRoute : NSObject {

	NSString* _destination;
	NSString* _destinationEventKey;
	NSArray* _propertiesToInclude;

}

@property (nonatomic,readonly) NSString * destination;                      //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) NSString * destinationEventKey;              //@synthesize destinationEventKey=_destinationEventKey - In the implementation block
@property (nonatomic,readonly) NSArray * propertiesToInclude;               //@synthesize propertiesToInclude=_propertiesToInclude - In the implementation block
-(NSString *)destination;
-(id)initWithConfig:(id)arg1 ;
-(NSString *)destinationEventKey;
-(NSArray *)propertiesToInclude;
@end

