/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:50 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface AKUtilities : NSObject
+(id)bundleIdentifier;
+(id)bundleVersion;
+(id)currentApplicationIdentifier;
+(id)currentApplicationVersion;
+(id)urlForBundleIdentifier:(id)arg1 ;
+(void)openApplicationWithBundleID:(id)arg1 ;
+(void)launchSoftwareUpdate;
+(void)launchPhotosApplication;
+(void)openEnergySaverPref;
+(void)openSharingPref;
+(void)openSecurityPref;
+(void)openInternetAccountPref;
+(void)openParentalControlPref;
+(void)openAppleIDPref;
+(BOOL)openAppleIDPrefWithLaunchParameters:(id)arg1 ;
+(BOOL)screenLockIsEnabled;
@end

