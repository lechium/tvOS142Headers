/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:51 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSDate;


@protocol CLSTimeLocationTuple <NSObject>
@property (nonatomic,readonly) NSString * timeLocationIdentifier; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) CLLocationCoordinate2D coordinates; 
@property (nonatomic,readonly) NSDate * expandedStartDate; 
@property (nonatomic,readonly) NSDate * expandedEndDate; 
@required
-(NSDate *)endDate;
-(NSDate *)startDate;
-(CLLocationCoordinate2D)coordinates;
-(NSString *)timeLocationIdentifier;
-(NSDate *)expandedEndDate;
-(NSDate *)expandedStartDate;

@end
