/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:48 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface RTMapItemProviderMapsSupportParameters : NSObject {

	double _favoriteConfidence;
	double _historyEntryRouteConfidence;
	double _historyEntryPlaceDisplayConfidence;

}

@property (nonatomic,readonly) double favoriteConfidence;                              //@synthesize favoriteConfidence=_favoriteConfidence - In the implementation block
@property (nonatomic,readonly) double historyEntryRouteConfidence;                     //@synthesize historyEntryRouteConfidence=_historyEntryRouteConfidence - In the implementation block
@property (nonatomic,readonly) double historyEntryPlaceDisplayConfidence;              //@synthesize historyEntryPlaceDisplayConfidence=_historyEntryPlaceDisplayConfidence - In the implementation block
-(id)description;
-(id)init;
-(id)initWithDefaultsManager:(id)arg1 ;
-(double)favoriteConfidence;
-(double)historyEntryRouteConfidence;
-(double)historyEntryPlaceDisplayConfidence;
-(id)initWithFavoriteConfidence:(double)arg1 historyEntryRouteConfidence:(double)arg2 historyEntryPlaceDisplayConfidence:(double)arg3 ;
@end

