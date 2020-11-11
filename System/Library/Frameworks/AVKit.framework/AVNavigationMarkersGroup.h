/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:50 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVKit/AVKit-Structs.h>
@class NSArray, NSMutableDictionary, NSString;

@interface AVNavigationMarkersGroup : NSObject {

	NSArray* _timeRanges;
	NSMutableDictionary* _markerImageMap;
	NSString* _title;
	NSArray* _timedNavigationMarkers;
	NSArray* _dateRangeNavigationMarkers;
	unsigned long long _numberOfImagesRemainingToLoad;

}

@property (assign,nonatomic) unsigned long long numberOfImagesRemainingToLoad;              //@synthesize numberOfImagesRemainingToLoad=_numberOfImagesRemainingToLoad - In the implementation block
@property (nonatomic,readonly) NSString * title;                                            //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSArray * timedNavigationMarkers;                            //@synthesize timedNavigationMarkers=_timedNavigationMarkers - In the implementation block
@property (nonatomic,readonly) NSArray * dateRangeNavigationMarkers;                        //@synthesize dateRangeNavigationMarkers=_dateRangeNavigationMarkers - In the implementation block
+(id)navigationMarkerGroups:(id)arg1 filteredWithBlock:(/*^block*/id)arg2 ;
+(id)navigationMarkerGroups:(id)arg1 inTimeRange:(id)arg2 ;
-(id)init;
-(unsigned long long)count;
-(NSString *)title;
-(id)timeRanges;
-(id)initWithTitle:(id)arg1 timedNavigationMarkers:(id)arg2 ;
-(id)initWithTitle:(id)arg1 dateRangeNavigationMarkers:(id)arg2 ;
-(id)initWithTitle:(id)arg1 navigationMarkers:(id)arg2 ;
-(id)initWithChaptersFromAsset:(id)arg1 ;
-(void)setNumberOfImagesRemainingToLoad:(unsigned long long)arg1 ;
-(BOOL)isDateBased;
-(id)_navMarkers;
-(id)navigationMarkers;
-(id)navigationMarkersGroupFilteredWithBlock:(/*^block*/id)arg1 ;
-(id)navigationMarkersGroupFromTimeRange:(id)arg1 ;
-(BOOL)isChapterGroup;
-(SCD_Struct_AV8)timeRangeForMarker:(unsigned long long)arg1 ;
-(double)startTimeForMarker:(unsigned long long)arg1 ;
-(id)startDateForMarker:(unsigned long long)arg1 ;
-(id)_stringForMarker:(unsigned long long)arg1 identifier:(id)arg2 ;
-(id)_defaultTitleForMarker:(unsigned long long)arg1 ;
-(id)titleForMarker:(unsigned long long)arg1 ;
-(id)_loggingTitleForMarker:(unsigned long long)arg1 ;
-(id)descriptionForMarker:(unsigned long long)arg1 ;
-(id)_imageMetadataItemForMarker:(unsigned long long)arg1 ;
-(void)_loadImageForMarker:(unsigned long long)arg1 ;
-(id)imageProxyForMarker:(unsigned long long)arg1 ;
-(id)imageForMarker:(unsigned long long)arg1 ;
-(BOOL)haveImageForMarker:(unsigned long long)arg1 ;
-(void)loadAllImages;
-(BOOL)loadFirstImageSynchronouslyWithTimeout:(double)arg1 ;
-(BOOL)haveImages;
-(unsigned long long)indexOfClosestMarkerPriorOrEqualToTime:(double)arg1 ;
-(unsigned long long)indexOfClosestMarkerToTime:(double)arg1 ;
-(unsigned long long)indexOfMarkerContainingTime:(double)arg1 ;
-(unsigned long long)indexOfClosestMarkerPriorOrEqualToDate:(id)arg1 ;
-(unsigned long long)indexOfMarkerContainingDate:(id)arg1 ;
-(void)enumerateStartTimes:(/*^block*/id)arg1 ;
-(void)enumerateStartDates:(/*^block*/id)arg1 ;
-(id)copyArrayOfFractionsForStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)copyArrayOfFractionsForDuration:(double)arg1 ;
-(NSArray *)timedNavigationMarkers;
-(NSArray *)dateRangeNavigationMarkers;
-(unsigned long long)numberOfImagesRemainingToLoad;
@end

