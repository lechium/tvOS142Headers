/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:38 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Photos/Photos-Structs.h>
#import <Photos/PHAssetCollection.h>

@class NSDate, NSString;

@interface PHMoment : PHAssetCollection {

	unsigned short _processedLocation;
	int _timeZoneOffset;
	float _aggregationScore;
	NSDate* _representativeDate;
	NSDate* _modificationDate;
	NSString* _subtitle;
	double _approximateLatitude;
	double _approximateLongitude;
	double _gpsHorizontalAccuracy;

}

@property (nonatomic,readonly) NSString * subtitle;                                 //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) unsigned short processedLocation;                      //@synthesize processedLocation=_processedLocation - In the implementation block
@property (nonatomic,readonly) NSDate * universalStartDate; 
@property (nonatomic,readonly) NSDate * universalEndDate; 
@property (nonatomic,readonly) NSString * processedLocationTypeString; 
@property (nonatomic,readonly) double approximateLatitude;                          //@synthesize approximateLatitude=_approximateLatitude - In the implementation block
@property (nonatomic,readonly) double approximateLongitude;                         //@synthesize approximateLongitude=_approximateLongitude - In the implementation block
@property (nonatomic,readonly) double gpsHorizontalAccuracy;                        //@synthesize gpsHorizontalAccuracy=_gpsHorizontalAccuracy - In the implementation block
@property (nonatomic,readonly) NSDate * localStartDate; 
@property (nonatomic,readonly) NSDate * localEndDate; 
@property (nonatomic,readonly) int timeZoneOffset;                                  //@synthesize timeZoneOffset=_timeZoneOffset - In the implementation block
@property (nonatomic,readonly) NSDate * representativeDate;                         //@synthesize representativeDate=_representativeDate - In the implementation block
@property (nonatomic,readonly) NSDate * modificationDate;                           //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,readonly) float aggregationScore;                              //@synthesize aggregationScore=_aggregationScore - In the implementation block
+(id)managedEntityName;
+(id)fetchType;
+(id)propertiesToFetchWithHint:(unsigned long long)arg1 ;
+(id)identifierCode;
+(BOOL)managedObjectSupportsTrashedState;
+(id)entityKeyMap;
+(id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2 ;
+(id)fetchMomentUUIDByAssetUUIDForAssets:(id)arg1 options:(id)arg2 ;
+(id)fetchMomentUUIDByAssetUUIDForAssetUUIDs:(id)arg1 options:(id)arg2 ;
+(id)_fetchMomentUUIDByAssetUUIDForAssetUUIDs:(id)arg1 photoLibrary:(id)arg2 ;
-(id)description;
-(NSDate *)modificationDate;
-(id)localizedTitle;
-(id)localizedSubtitle;
-(NSString *)subtitle;
-(BOOL)hasLocationInfo;
-(int)timeZoneOffset;
-(double)gpsHorizontalAccuracy;
-(BOOL)canPerformEditOperation:(long long)arg1 ;
-(BOOL)canShowAvalancheStacks;
-(id)localizedLocationNames;
-(NSDate *)localStartDate;
-(NSDate *)localEndDate;
-(unsigned short)processedLocation;
-(NSDate *)representativeDate;
-(void)setProcessedLocation:(unsigned short)arg1 ;
-(double)approximateLatitude;
-(double)approximateLongitude;
-(float)aggregationScore;
-(BOOL)collectionHasFixedOrder;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(Class)changeRequestClass;
-(NSDate *)universalStartDate;
-(NSDate *)universalEndDate;
-(NSString *)processedLocationTypeString;
-(void)_cacheLocationWithCoordinate:(CLLocationCoordinate2D)arg1 ;
@end

