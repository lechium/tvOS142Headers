/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:39 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Photos/PHAssetPropertySet.h>

@interface PHAssetCoarseLocationProperties : PHAssetPropertySet {

	double _gpsHorizontalAccuracy;

}

@property (nonatomic,readonly) double gpsHorizontalAccuracy;              //@synthesize gpsHorizontalAccuracy=_gpsHorizontalAccuracy - In the implementation block
+(id)propertiesToFetch;
+(id)propertySetName;
-(double)gpsHorizontalAccuracy;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
@end

