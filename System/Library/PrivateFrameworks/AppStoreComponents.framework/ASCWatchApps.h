/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:44 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ASCAppOfferStateCenter;

@interface ASCWatchApps : NSObject {

	ASCAppOfferStateCenter* _appOfferStateCenter;

}

@property (nonatomic,readonly) ASCAppOfferStateCenter * appOfferStateCenter;              //@synthesize appOfferStateCenter=_appOfferStateCenter - In the implementation block
+(id)sharedWatchApps;
-(id)initWithAppOfferStateCenter:(id)arg1 ;
-(ASCAppOfferStateCenter *)appOfferStateCenter;
-(id)reinstallAppWithID:(id)arg1 ;
-(id)reinstallSystemAppWithBundleID:(id)arg1 ;
@end

