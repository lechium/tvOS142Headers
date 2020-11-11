/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:17 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CPAnalyticsDestinationProtocol.h>

@protocol PXDisplayAssetCollection;
@class NSString;

@interface PXAnalyticsMemoriesUsageDestination : NSObject <CPAnalyticsDestinationProtocol> {

	long long _defaultNavigationKind;
	long long _currentURLNavigationKind;
	long long _sessionInitialNavigationKind;
	id<PXDisplayAssetCollection> _lastAppearedAssetCollection;
	long long _lastAppearedAssetCollectionNavigationKind;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)forYouTabOpenedAppEventNameWithNavigationKind:(long long)arg1 ;
+(id)forYouTabOpenedEventName;
+(id)memoryPlayedAppEventNameWithNavigationKind:(long long)arg1 ;
+(id)memoryPlayedEventName;
+(id)memoryOpenedAppEventNameWithNavigationKind:(long long)arg1 ;
+(id)memoryOpenedEventName;
+(id)payloadSessionStartTypeKey;
+(id)payloadLaunchTypeKey;
-(id)init;
-(void)processEvent:(id)arg1 ;
@end

