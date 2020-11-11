/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:41 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CLCircularRegion, CLLocation, NSString, NSArray;

@interface CLSLitePlacemarkTestData : NSObject {

	BOOL _isIsland;
	CLCircularRegion* _region;
	CLLocation* _location;
	NSString* _thoroughfare;
	NSString* _subThoroughfare;
	NSString* _locality;
	NSString* _subLocality;
	NSString* _administrativeArea;
	NSString* _subAdministrativeArea;
	NSString* _ISOcountryCode;
	NSString* _inlandWater;
	NSString* _ocean;
	NSArray* _areasOfInterest;
	NSString* _administrativeAreaCode;

}

@property (nonatomic,retain) CLLocation * location;                          //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) CLCircularRegion * region;                      //@synthesize region=_region - In the implementation block
@property (nonatomic,retain) NSString * thoroughfare;                        //@synthesize thoroughfare=_thoroughfare - In the implementation block
@property (nonatomic,retain) NSString * subThoroughfare;                     //@synthesize subThoroughfare=_subThoroughfare - In the implementation block
@property (nonatomic,retain) NSString * locality;                            //@synthesize locality=_locality - In the implementation block
@property (nonatomic,retain) NSString * subLocality;                         //@synthesize subLocality=_subLocality - In the implementation block
@property (nonatomic,retain) NSString * administrativeArea;                  //@synthesize administrativeArea=_administrativeArea - In the implementation block
@property (nonatomic,retain) NSString * administrativeAreaCode;              //@synthesize administrativeAreaCode=_administrativeAreaCode - In the implementation block
@property (nonatomic,retain) NSString * subAdministrativeArea;               //@synthesize subAdministrativeArea=_subAdministrativeArea - In the implementation block
@property (nonatomic,retain) NSString * ISOcountryCode;                      //@synthesize ISOcountryCode=_ISOcountryCode - In the implementation block
@property (nonatomic,retain) NSString * inlandWater;                         //@synthesize inlandWater=_inlandWater - In the implementation block
@property (nonatomic,retain) NSString * ocean;                               //@synthesize ocean=_ocean - In the implementation block
@property (nonatomic,retain) NSArray * areasOfInterest;                      //@synthesize areasOfInterest=_areasOfInterest - In the implementation block
@property (assign,nonatomic) BOOL isIsland;                                  //@synthesize isIsland=_isIsland - In the implementation block
-(CLCircularRegion *)region;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)setAdministrativeArea:(NSString *)arg1 ;
-(void)setLocality:(NSString *)arg1 ;
-(NSString *)administrativeAreaCode;
-(NSString *)administrativeArea;
-(NSString *)locality;
-(NSArray *)areasOfInterest;
-(void)setRegion:(CLCircularRegion *)arg1 ;
-(NSString *)subLocality;
-(NSString *)subAdministrativeArea;
-(NSString *)thoroughfare;
-(NSString *)subThoroughfare;
-(NSString *)inlandWater;
-(NSString *)ocean;
-(void)setAdministrativeAreaCode:(NSString *)arg1 ;
-(void)setSubAdministrativeArea:(NSString *)arg1 ;
-(void)setSubLocality:(NSString *)arg1 ;
-(void)setThoroughfare:(NSString *)arg1 ;
-(void)setSubThoroughfare:(NSString *)arg1 ;
-(void)setInlandWater:(NSString *)arg1 ;
-(void)setOcean:(NSString *)arg1 ;
-(NSString *)ISOcountryCode;
-(BOOL)isIsland;
-(void)setAreasOfInterest:(NSArray *)arg1 ;
-(void)setIsIsland:(BOOL)arg1 ;
-(void)setISOcountryCode:(NSString *)arg1 ;
@end

