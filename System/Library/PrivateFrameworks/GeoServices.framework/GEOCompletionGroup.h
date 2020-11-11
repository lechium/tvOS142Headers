/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:15 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray, NSString;


@protocol GEOCompletionGroup <NSObject>
@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,readonly) NSString * localizedSectionHeader; 
@property (nonatomic,readonly) BOOL shouldInterleaveClientResults; 
@property (nonatomic,readonly) BOOL enforceServerResultsOrder; 
@required
-(NSArray *)items;
-(BOOL)shouldInterleaveClientResults;
-(BOOL)enforceServerResultsOrder;
-(NSString *)localizedSectionHeader;

@end
