/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:29 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPStoreModelRequest.h>

@class NSURL, MPModelStoreBrowseResponse;

@interface MPModelStoreBrowseRequest : MPStoreModelRequest {

	NSURL* _loadAdditionalContentURL;
	MPModelStoreBrowseResponse* _previousRetrievedNestedResponse;
	long long _domain;
	long long _additionalContent;
	unsigned long long _options;
	long long _filteringPolicy;
	long long _subscriptionStatus;
	MPModelStoreBrowseResponse* _previousResponse;
	long long _requestEndpoint;

}

@property (nonatomic,copy) NSURL * loadAdditionalContentURL;                                            //@synthesize loadAdditionalContentURL=_loadAdditionalContentURL - In the implementation block
@property (nonatomic,retain) MPModelStoreBrowseResponse * previousRetrievedNestedResponse;              //@synthesize previousRetrievedNestedResponse=_previousRetrievedNestedResponse - In the implementation block
@property (assign,nonatomic) long long domain;                                                          //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) long long additionalContent;                                               //@synthesize additionalContent=_additionalContent - In the implementation block
@property (assign,nonatomic) BOOL flattenRadioList; 
@property (assign,nonatomic) unsigned long long options;                                                //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) long long filteringPolicy;                                                 //@synthesize filteringPolicy=_filteringPolicy - In the implementation block
@property (assign,nonatomic) long long subscriptionStatus;                                              //@synthesize subscriptionStatus=_subscriptionStatus - In the implementation block
@property (nonatomic,retain) MPModelStoreBrowseResponse * previousResponse;                             //@synthesize previousResponse=_previousResponse - In the implementation block
@property (assign,nonatomic) long long requestEndpoint;                                                 //@synthesize requestEndpoint=_requestEndpoint - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)allSupportedItemProperties;
+(id)allSupportedSectionProperties;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(long long)domain;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDomain:(long long)arg1 ;
-(unsigned long long)options;
-(void)setOptions:(unsigned long long)arg1 ;
-(long long)subscriptionStatus;
-(void)setSubscriptionStatus:(long long)arg1 ;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(long long)filteringPolicy;
-(void)setFilteringPolicy:(long long)arg1 ;
-(long long)requestEndpoint;
-(void)setRequestEndpoint:(long long)arg1 ;
-(void)configureWithParentSection:(id)arg1 ;
-(BOOL)flattenRadioList;
-(void)setFlattenRadioList:(BOOL)arg1 ;
-(NSURL *)loadAdditionalContentURL;
-(void)setLoadAdditionalContentURL:(NSURL *)arg1 ;
-(MPModelStoreBrowseResponse *)previousRetrievedNestedResponse;
-(void)setPreviousRetrievedNestedResponse:(MPModelStoreBrowseResponse *)arg1 ;
-(long long)additionalContent;
-(void)setAdditionalContent:(long long)arg1 ;
-(MPModelStoreBrowseResponse *)previousResponse;
-(void)setPreviousResponse:(MPModelStoreBrowseResponse *)arg1 ;
@end

