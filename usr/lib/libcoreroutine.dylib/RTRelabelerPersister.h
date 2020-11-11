/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:47 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class RTRelabelerPersisterMetrics, NSManagedObjectContext, RTDistanceCalculator, RTLocationShifter, RTMapItemProviderReverseGeocode, RTMapItemProviderLearnedPlaceParameters, NSMutableDictionary, RTRelabelerParameters, RTRelabelerPersisterParameters;

@interface RTRelabelerPersister : NSObject {

	RTRelabelerPersisterMetrics* _metrics;
	NSManagedObjectContext* _context;
	RTDistanceCalculator* _distanceCalculator;
	RTLocationShifter* _locationShifter;
	RTMapItemProviderReverseGeocode* _reverseGeocodeProvider;
	RTMapItemProviderLearnedPlaceParameters* _learnedPlaceParameters;
	NSMutableDictionary* _loiIdentifierToUnconcreteMap;
	RTRelabelerParameters* _relabelerParameters;
	RTRelabelerPersisterParameters* _relabelerPersisterParameters;

}

@property (nonatomic,retain) NSManagedObjectContext * context;                                                //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) RTDistanceCalculator * distanceCalculator;                                     //@synthesize distanceCalculator=_distanceCalculator - In the implementation block
@property (nonatomic,readonly) RTLocationShifter * locationShifter;                                           //@synthesize locationShifter=_locationShifter - In the implementation block
@property (nonatomic,readonly) RTMapItemProviderReverseGeocode * reverseGeocodeProvider;                      //@synthesize reverseGeocodeProvider=_reverseGeocodeProvider - In the implementation block
@property (nonatomic,readonly) RTMapItemProviderLearnedPlaceParameters * learnedPlaceParameters;              //@synthesize learnedPlaceParameters=_learnedPlaceParameters - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * loiIdentifierToUnconcreteMap;                            //@synthesize loiIdentifierToUnconcreteMap=_loiIdentifierToUnconcreteMap - In the implementation block
@property (nonatomic,readonly) RTRelabelerParameters * relabelerParameters;                                   //@synthesize relabelerParameters=_relabelerParameters - In the implementation block
@property (nonatomic,readonly) RTRelabelerPersisterParameters * relabelerPersisterParameters;                 //@synthesize relabelerPersisterParameters=_relabelerPersisterParameters - In the implementation block
@property (nonatomic,retain) RTRelabelerPersisterMetrics * metrics;                                           //@synthesize metrics=_metrics - In the implementation block
+(id)locationFromAggregateVisits:(id)arg1 ;
-(id)init;
-(NSManagedObjectContext *)context;
-(void)setContext:(NSManagedObjectContext *)arg1 ;
-(void)setMetrics:(RTRelabelerPersisterMetrics *)arg1 ;
-(RTRelabelerPersisterMetrics *)metrics;
-(RTLocationShifter *)locationShifter;
-(BOOL)saveWithError:(id*)arg1 ;
-(RTDistanceCalculator *)distanceCalculator;
-(id)initWithDefaultsManager:(id)arg1 distanceCalculator:(id)arg2 learnedPlaceParameters:(id)arg3 metrics:(id)arg4 persistenceManager:(id)arg5 relabelerParameters:(id)arg6 reverseGeocodeProvider:(id)arg7 ;
-(void)logLocalStoreWithReason:(id)arg1 ;
-(BOOL)resnapVisitsWithError:(id*)arg1 ;
-(BOOL)useRelabeledInferredMapItem:(id)arg1 oldCandidate:(id)arg2 associate:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)restoreToOldCandidate:(id)arg1 error:(id*)arg2 ;
-(BOOL)iterativelyCollapseOverlappingRevGeoLOIsWithError:(id*)arg1 ;
-(BOOL)dedupeLOIsWithError:(id*)arg1 ;
-(BOOL)combineSequentialVisitsWithError:(id*)arg1 ;
-(BOOL)fixUnconcreteLOIs:(id*)arg1 ;
-(BOOL)consolidateVisitsToLoisWithKnownPlaceTypesWithError:(id*)arg1 ;
-(BOOL)cleanUpWithError:(id*)arg1 ;
-(id)initWithDistanceCalculator:(id)arg1 learnedPlaceParameters:(id)arg2 locationShifter:(id)arg3 metrics:(id)arg4 persistenceManager:(id)arg5 relabelerParameters:(id)arg6 relabelerPersisterParameters:(id)arg7 reverseGeocodeProvider:(id)arg8 ;
-(NSMutableDictionary *)loiIdentifierToUnconcreteMap;
-(id)fetchNearbyLocationOfInterestMOsAroundLocation:(id)arg1 withinDistance:(double)arg2 error:(id*)arg3 ;
-(BOOL)unconcreteLOIMO:(id)arg1 ;
-(RTRelabelerPersisterParameters *)relabelerPersisterParameters;
-(id)fetchRevGeoLearnedPlaceInVicinityOfLocation:(id)arg1 error:(id*)arg2 ;
-(id)fetchLocationOfInterestMOforMapItemIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)fetchLearnedLocationOfInterestVisitMOForIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)fetchTransitionMOsEndingAtVisitIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)restoreVisit:(id)arg1 transitions:(id)arg2 toOldCandidate:(id)arg3 error:(id*)arg4 ;
-(BOOL)performBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(RTRelabelerParameters *)relabelerParameters;
-(BOOL)untrustedVisitMO:(id)arg1 ;
-(RTMapItemProviderLearnedPlaceParameters *)learnedPlaceParameters;
-(double)scoreVisitMO:(id)arg1 ;
-(double)scoreLOIMO:(id)arg1 ;
-(id)rollUUIDGivenUUID:(id)arg1 ;
-(BOOL)uuidConflicts:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(id)fetchClosestUnconcreteLocationOfInterestMOToLocation:(id)arg1 withinDistance:(double)arg2 distanceCalculator:(id)arg3 error:(id*)arg4 ;
-(id)fetchLearnedPlaceMOforMapItemIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)learnedPlaceForVisit:(id)arg1 creationDate:(id)arg2 expirationDate:(id)arg3 context:(id)arg4 error:(id*)arg5 ;
-(id)rollLOIIdentifier:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(BOOL)unassociateOldCandidate:(id)arg1 error:(id*)arg2 ;
-(BOOL)associateNonPlaceholderRelabeledInferredMapItem:(id)arg1 oldCandidate:(id)arg2 error:(id*)arg3 ;
-(BOOL)associatePlaceholderRelabeledInferredMapItem:(id)arg1 oldCandidate:(id)arg2 error:(id*)arg3 ;
-(id)fetchOverlappingUnconcreteLocationOfInterestMOsForLOIMO:(id)arg1 distanceCalculator:(id)arg2 unusableIdentifiers:(id)arg3 error:(id*)arg4 ;
-(BOOL)combineOverlappingRevGeoLOIsStabilized:(BOOL*)arg1 error:(id*)arg2 ;
-(id)dedupableLOIsNearLocation:(id)arg1 mapItem:(id)arg2 error:(id*)arg3 ;
-(id)connectedComponentForLoiMO:(id)arg1 encounteredIdentifiers:(id)arg2 error:(id*)arg3 ;
-(id)loiToMoveToFromConnectedComponent:(id)arg1 ;
-(BOOL)moveVisitMOs:(id)arg1 toLOIMO:(id)arg2 error:(id*)arg3 ;
-(id)fetchTransitionMOsOriginatingFromVisitIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)combineEarlierVisitMO:(id)arg1 withLaterVisitMO:(id)arg2 error:(id*)arg3 ;
-(BOOL)cleanUpCombinedPairs:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(id)filteredVisitMOs:(id)arg1 referenceLocation:(id)arg2 error:(id*)arg3 ;
-(RTMapItemProviderReverseGeocode *)reverseGeocodeProvider;
@end

