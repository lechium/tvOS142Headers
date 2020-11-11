/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:20 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface DDSContentItemMatcher : NSObject
+(BOOL)shouldLenientlyMatchWithContentItemsForRegion:(id)arg1 ;
+(BOOL)_anyDictionaryIn:(id)arg1 matches:(id)arg2 shouldLenientlyMatch:(/*^block*/id)arg3 ;
+(BOOL)_anyStringIn:(id)arg1 matches:(id)arg2 acceptUnspecifiedValue:(BOOL)arg3 ;
+(BOOL)_string:(id)arg1 matches:(id)arg2 acceptUnspecifiedValue:(BOOL)arg3 ;
+(BOOL)_dictionary:(id)arg1 matches:(id)arg2 acceptUnspecifiedAttribute:(BOOL)arg3 lenientMatch:(BOOL)arg4 ;
+(id)assetContentItemsMatching:(id)arg1 contentItems:(id)arg2 parentAsset:(id)arg3 ;
@end

