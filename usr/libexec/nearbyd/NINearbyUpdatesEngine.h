//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NIConfiguration, NIServerAnalyticsManager, NSMutableDictionary;
@protocol NINearbyUpdatesEngineDataSource, NINearbyUpdatesEngineDelegate;

@interface NINearbyUpdatesEngine : NSObject
{
    int _rangeMeasSourcePref;	// 8 = 0x8
    struct unique_ptr<nearby::algorithms::region_monitoring::MonitorManager, std::__1::default_delete<nearby::algorithms::region_monitoring::MonitorManager>> _regionMonitor;	// 16 = 0x10
    NSMutableDictionary *_regionDict;	// 24 = 0x18
    struct unordered_map<unsigned long long, NIDiscoveryToken *, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, NIDiscoveryToken *>>> _hashToTokenMap;	// 32 = 0x20
    NIConfiguration *_configuration;	// 72 = 0x48
    id <NINearbyUpdatesEngineDataSource> _dataSource;	// 80 = 0x50
    id <NINearbyUpdatesEngineDelegate> _delegate;	// 88 = 0x58
    NIServerAnalyticsManager *_analyticsManager;	// 96 = 0x60
}

- (id).cxx_construct;	// IMP=0x000000010014078c
- (void).cxx_destruct;	// IMP=0x000000010014072c
@property(retain, nonatomic) NIServerAnalyticsManager *analyticsManager; // @synthesize analyticsManager=_analyticsManager;
@property(nonatomic) __weak id <NINearbyUpdatesEngineDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <NINearbyUpdatesEngineDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, copy, nonatomic) NIConfiguration *configuration; // @synthesize configuration=_configuration;
- (MISSING_TYPE *)_unitVectorFromAoAForAoAInSpatialCoordinates:(const struct AoARad *)arg1;	// IMP=0x0000000100140668
- (MISSING_TYPE *)_unitVectorFromAoAForAoAInNearbydCoordinates:(const struct AoARad *)arg1;	// IMP=0x0000000100140610
- (struct)_combinedQuaternionFromAoA:(struct AoARad)arg1;	// IMP=0x000000010014055c
- (struct AoARad)_convertFromPointingCoordinatesToSpatial:(const struct FilteredSolution *)arg1;	// IMP=0x00000001001404e8
- (void)_handleWiFiRangeResults:(const vector_7b261d6f *)arg1;	// IMP=0x00000001001402b4
- (void)acceptWiFiRangeResults:(const vector_7b261d6f *)arg1;	// IMP=0x00000001001402a8
- (void)_handleRegionEvent:(int)arg1 who:(unsigned long long)arg2 forRegion:(struct Region)arg3;	// IMP=0x000000010013fff4
- (id)_handleRangeOnlySolution:(const struct RoseSolution *)arg1;	// IMP=0x000000010013fde0
- (id)_handleRangeAndAoASolution:(const struct RoseSolution *)arg1;	// IMP=0x000000010013fb14
- (void)acceptRoseSolution:(const struct RoseSolution *)arg1;	// IMP=0x000000010013f864
- (id)removeRegionPredicate:(id)arg1;	// IMP=0x000000010013f640
- (id)addRegionPredicate:(id)arg1;	// IMP=0x000000010013f3e4
- (id)configure:(id)arg1;	// IMP=0x000000010013f204
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2 dataSource:(id)arg3 analyticsManager:(id)arg4 error:(id *)arg5;	// IMP=0x000000010013ee40

@end
