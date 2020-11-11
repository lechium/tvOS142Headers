/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:48 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface IMBalloonPluginAttributionController : NSObject {

	BOOL _hasPerformedFirstAppExtensionLoad;
	NSMutableDictionary* _expiredBundleIDToTimestampMap;
	NSMutableDictionary* _bundleIDsDisplayingAttribution;

}

@property (nonatomic,retain) NSMutableDictionary * expiredBundleIDToTimestampMap;               //@synthesize expiredBundleIDToTimestampMap=_expiredBundleIDToTimestampMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * bundleIDsDisplayingAttribution;              //@synthesize bundleIDsDisplayingAttribution=_bundleIDsDisplayingAttribution - In the implementation block
@property (assign,nonatomic) BOOL hasPerformedFirstAppExtensionLoad;                            //@synthesize hasPerformedFirstAppExtensionLoad=_hasPerformedFirstAppExtensionLoad - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)_currentTimestamp;
-(void)_handleInstalledPluginsChanged;
-(void)setHasPerformedFirstAppExtensionLoad:(BOOL)arg1 ;
-(NSMutableDictionary *)bundleIDsDisplayingAttribution;
-(double)_expiryTimeout;
-(NSMutableDictionary *)expiredBundleIDToTimestampMap;
-(void)_purgeLeastRecentlySeenAppBundleIDsIfNecessary;
-(void)_saveToFile;
-(BOOL)hasPerformedFirstAppExtensionLoad;
-(void)startExpiryTimer;
-(void)didShowAttributionForBundleIDs:(id)arg1 ;
-(BOOL)shouldShowAttributionForBundleID:(id)arg1 ;
-(void)setExpiredBundleIDToTimestampMap:(NSMutableDictionary *)arg1 ;
-(void)setBundleIDsDisplayingAttribution:(NSMutableDictionary *)arg1 ;
@end

