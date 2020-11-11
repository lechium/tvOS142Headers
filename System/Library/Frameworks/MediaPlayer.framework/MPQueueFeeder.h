/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:27 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MediaPlayer/MediaPlayer-Structs.h>
@class MPQueueFeederIdentifierRegistry, NSString, NSData, NSDictionary, MPModelPlayEvent;

@interface MPQueueFeeder : NSObject {

	MPQueueFeederIdentifierRegistry* _identifierRegistry;
	os_unfair_lock_s _identifierRegistryLock;
	NSString* _uniqueIdentifier;
	NSString* _playActivityFeatureName;
	NSData* _playActivityRecommendationData;
	NSString* _siriReferenceIdentifier;
	NSDictionary* _siriWHAMetricsInfo;
	MPModelPlayEvent* _modelPlayEvent;

}

@property (nonatomic,copy) NSString * playActivityFeatureName;                   //@synthesize playActivityFeatureName=_playActivityFeatureName - In the implementation block
@property (nonatomic,copy) NSData * playActivityRecommendationData;              //@synthesize playActivityRecommendationData=_playActivityRecommendationData - In the implementation block
@property (nonatomic,copy) NSString * siriReferenceIdentifier;                   //@synthesize siriReferenceIdentifier=_siriReferenceIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * siriWHAMetricsInfo;                    //@synthesize siriWHAMetricsInfo=_siriWHAMetricsInfo - In the implementation block
@property (nonatomic,readonly) MPModelPlayEvent * modelPlayEvent;                //@synthesize modelPlayEvent=_modelPlayEvent - In the implementation block
@property (nonatomic,readonly) NSString * uniqueIdentifier;                      //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
-(id)init;
-(NSString *)uniqueIdentifier;
-(MPModelPlayEvent *)modelPlayEvent;
-(void)replaceIdentifierRegistry:(id)arg1 ;
-(void)identifierRegistryWithExclusiveAccess:(/*^block*/id)arg1 ;
-(id)identifierRegistryWithExclusiveAccessReturningObject:(/*^block*/id)arg1 ;
-(BOOL)identifierRegistryWithExclusiveAccessReturningBOOL:(/*^block*/id)arg1 ;
-(long long)identifierRegistryWithExclusiveAccessReturningInteger:(/*^block*/id)arg1 ;
-(long long)supplementalPlaybackContextBehavior;
-(id)supplementalPlaybackContextWithReason:(long long)arg1 ;
-(void)getRepresentativeMetadataForPlaybackContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)errorResolverForItem:(id)arg1 ;
-(void)applyVolumeNormalizationForItem:(id)arg1 ;
-(id)playbackInfoForItem:(id)arg1 ;
-(NSString *)playActivityFeatureName;
-(void)setPlayActivityFeatureName:(NSString *)arg1 ;
-(NSData *)playActivityRecommendationData;
-(void)setPlayActivityRecommendationData:(NSData *)arg1 ;
-(NSString *)siriReferenceIdentifier;
-(void)setSiriReferenceIdentifier:(NSString *)arg1 ;
-(NSDictionary *)siriWHAMetricsInfo;
-(void)setSiriWHAMetricsInfo:(NSDictionary *)arg1 ;
@end

