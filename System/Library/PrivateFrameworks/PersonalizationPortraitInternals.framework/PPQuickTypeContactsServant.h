/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:49 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PPQuickTypeServantProtocol.h>

@class PPLocalContactStore, NSCache;

@interface PPQuickTypeContactsServant : NSObject <PPQuickTypeServantProtocol> {

	PPLocalContactStore* _localContactStore;
	NSCache* _meQuickTypeItemCache;
	NSCache* _cachedNameLookups;

}
+(id)_supportedPeopleSemanticTypes;
-(id)init;
-(id)initWithOptions:(unsigned char)arg1 ;
-(void)clearCaches;
-(void)_registerForNotifications;
-(id)quickTypeItemsWithQuery:(id)arg1 limit:(unsigned long long)arg2 explanationSet:(id)arg3 ;
-(void)_warmUpFormatters;
-(void)setCachedNameLookup:(id)arg1 ;
-(id)_scoredMeContactWithMeContact:(id)arg1 ;
-(void)_preloadMeCardAndItemCacheWithMeContact:(id)arg1 ;
-(id)_applySmartLimitingToCandidates:(id)arg1 clientLimit:(unsigned long long)arg2 explanationSet:(id)arg3 ;
-(id)_predictionForPeopleQuery:(id)arg1 fromEligibleSemanticTextField:(BOOL)arg2 limit:(unsigned long long)arg3 explanationSet:(id)arg4 ;
-(BOOL)_isMeCardQuery:(id)arg1 ;
-(id)_mePredictionCacheKeyForQuery:(id)arg1 ;
-(id)_predictMeCardDetailForQuery:(id)arg1 limit:(unsigned long long)arg2 explanationSet:(id)arg3 ;
-(id)_predictMeCardDetailForQuery:(id)arg1 limit:(unsigned long long)arg2 fromSemanticTextField:(BOOL)arg3 explanationSet:(id)arg4 ;
-(id)_lookupScoredPeopleWithNamePrefix:(id)arg1 subtype:(unsigned char)arg2 explanationSet:(id)arg3 justPreloadCache:(BOOL)arg4 timeoutSeconds:(id)arg5 ;
-(id)_lookupPeopleWithNamePrefix:(id)arg1 explanationSet:(id)arg2 justPreloadCache:(BOOL)arg3 timeoutSeconds:(id)arg4 ;
-(BOOL)_isSemanticTagEligible:(unsigned char)arg1 ;
-(id)_selfContactQueryqueryFromSemanticTagquery:(id)arg1 ;
@end

