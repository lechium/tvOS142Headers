/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:52 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface AMSRestrictions : NSObject
+(BOOL)allowActiveAccountModifications;
+(BOOL)requirePasswordImmediately;
+(id)_featureNameForMediaType:(unsigned long long)arg1 ;
+(long long)maximumMediaRank;
+(BOOL)allowAccountModifications;
+(BOOL)eroticaAllowed;
+(BOOL)explicitContentAllowed;
+(BOOL)inAppPurchaseAllowed;
+(BOOL)isParentalControlEnabled;
+(BOOL)onDeviceDiagnosticsAllowed;
+(id)rankForMediaType:(unsigned long long)arg1 ;
@end
