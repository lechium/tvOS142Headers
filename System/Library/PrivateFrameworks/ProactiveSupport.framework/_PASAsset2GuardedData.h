/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:36 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, MAAsset, NSMutableDictionary;

@interface _PASAsset2GuardedData : NSObject {

	NSString* _defaultBundlePath;
	unsigned long long _defaultBundleVersion;
	unsigned long long _bestAvailableVersion;
	unsigned long long _bestAssetVersionObserved;
	MAAsset* _bestAvailableAsset;
	BOOL _purgeObsoleteInstalledAssets;
	NSMutableDictionary* _overrides;

}
@end

