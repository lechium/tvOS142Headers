/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:15 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SPFinder.framework/SPFinder
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class SPAdvertisementCache;

@interface SPFinderInterface : NSObject {

	SPAdvertisementCache* _advertisementCache;

}

@property (nonatomic,retain) SPAdvertisementCache * advertisementCache;              //@synthesize advertisementCache=_advertisementCache - In the implementation block
-(id)stateManager;
-(SPAdvertisementCache *)advertisementCache;
-(id)beaconPayloadCache;
-(id)finderStateManager;
-(void)setAdvertisementCache:(SPAdvertisementCache *)arg1 ;
@end

