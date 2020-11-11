/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:21 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface PLRevGeoMapItem : NSObject <NSSecureCoding> {

	NSArray* _sortedPlaceInfos;
	NSArray* _backupPlaceInfos;
	NSArray* _finalPlaceInfos;

}

@property (nonatomic,readonly) NSArray * sortedPlaceInfos;              //@synthesize sortedPlaceInfos=_sortedPlaceInfos - In the implementation block
@property (nonatomic,readonly) NSArray * backupPlaceInfos;              //@synthesize backupPlaceInfos=_backupPlaceInfos - In the implementation block
@property (nonatomic,readonly) NSArray * finalPlaceInfos;               //@synthesize finalPlaceInfos=_finalPlaceInfos - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)placeInfoWithName:(id)arg1 geoPlaceInfo:(id)arg2 dominantOrderType:(unsigned long long)arg3 ;
+(/*^block*/id)sortedAdditionalPlaceInfoComparator;
+(id)mapItemWithGEOMapItem:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSortedPlaceInfos:(id)arg1 backupPlaceInfos:(id)arg2 finalPlaceInfos:(id)arg3 ;
-(NSArray *)sortedPlaceInfos;
-(NSArray *)backupPlaceInfos;
-(NSArray *)finalPlaceInfos;
@end

