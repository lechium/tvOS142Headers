//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MorphunAssetsClient : NSObject
{
}

+ (id)purgeResultToString:(long long)arg1;	// IMP=0x0000000100008d08
+ (id)downloadResultToString:(long long)arg1;	// IMP=0x0000000100008b30
+ (id)queryResultToString:(long long)arg1;	// IMP=0x0000000100008a78
+ (id)platformSpecificLanguages;	// IMP=0x0000000100008a20
+ (id)removeLanguageSuffix:(id)arg1;	// IMP=0x0000000100008a08
+ (id)addLanguageSuffix:(id)arg1;	// IMP=0x00000001000089f0
+ (id)purgeAsset:(id)arg1;	// IMP=0x00000001000084d0
+ (_Bool)isUpdateNeededForLanguage:(id)arg1 neededAsset:(id *)arg2 uneededAssets:(id *)arg3 error:(id *)arg4;	// IMP=0x0000000100007e34
+ (_Bool)purgeAssetsForLanguage:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100007b48
+ (_Bool)updateAssetForLanguage:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100006c20
+ (_Bool)updateCatalogue:(id *)arg1;	// IMP=0x000000010000657c
+ (id)getAllLanguagePaths:(id *)arg1;	// IMP=0x00000001000060d8
+ (id)removeAssetsForLanguages:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100005be8
+ (id)updateAssetsForLanguages:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000056a4
+ (id)getAllAssetVersions;	// IMP=0x00000001000053e8
+ (id)getBuildAttributeIfSet:(id)arg1;	// IMP=0x000000010000530c

@end

