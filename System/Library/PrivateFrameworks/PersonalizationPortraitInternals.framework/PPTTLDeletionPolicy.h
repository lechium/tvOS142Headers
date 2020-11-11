/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:48 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, PPLocalNamedEntityStore, PPLocalTopicStore, PPLocalLocationStore;

@interface PPTTLDeletionPolicy : NSObject {

	NSArray* _rules;
	PPLocalNamedEntityStore* _namedEntityStore;
	PPLocalTopicStore* _topicStore;
	PPLocalLocationStore* _locationStore;

}
+(id)defaultPolicy;
-(id)description;
-(id)init;
-(id)initWithRules:(id)arg1 namedEntityStore:(id)arg2 topicStore:(id)arg3 locationStore:(id)arg4 ;
-(BOOL)applyPolicyWithError:(id*)arg1 shouldContinueBlock:(/*^block*/id)arg2 ;
-(BOOL)_deleteAllNamedEntitiesExceedingMaxAgeSeconds:(double)arg1 error:(id*)arg2 ;
-(BOOL)_deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 maxAgeSeconds:(double)arg3 error:(id*)arg4 ;
-(BOOL)_deleteAllTopicsExceedingMaxAgeSeconds:(double)arg1 error:(id*)arg2 ;
-(BOOL)_deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 maxAgeSeconds:(double)arg3 error:(id*)arg4 ;
-(BOOL)_deleteAllLocationsExceedingMaxAgeSeconds:(double)arg1 error:(id*)arg2 ;
-(BOOL)_deleteAllLocationsFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 maxAgeSeconds:(double)arg3 error:(id*)arg4 ;
@end
