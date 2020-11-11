/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:43 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AdID.framework/AdID
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AdCore/ADSingleton.h>

@class NSNumber;

@interface ADPersonalizedAdsStatusManager : ADSingleton {

	BOOL _sendingPersonalizedAdsToAdPlatforms;
	NSNumber* _pendingJingleRequestToken;

}

@property (nonatomic,copy) NSNumber * pendingJingleRequestToken;                    //@synthesize pendingJingleRequestToken=_pendingJingleRequestToken - In the implementation block
@property (assign,nonatomic) BOOL sendingPersonalizedAdsToAdPlatforms;              //@synthesize sendingPersonalizedAdsToAdPlatforms=_sendingPersonalizedAdsToAdPlatforms - In the implementation block
+(id)sharedInstance;
-(void)sendPersonalizedAdsStatusToAdPlatforms:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)sendingPersonalizedAdsToAdPlatforms;
-(void)setSendingPersonalizedAdsToAdPlatforms:(BOOL)arg1 ;
-(NSNumber *)pendingJingleRequestToken;
-(void)setPendingJingleRequestToken:(NSNumber *)arg1 ;
@end
