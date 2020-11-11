/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:39 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSDictionary, NSMutableArray;

@interface _MDExtensionLoader : NSObject {

	BOOL _extensionsCacheNeedsLoad;
	id _matchingContext;
	NSObject*<OS_dispatch_queue> _queue;
	NSDictionary* _extensionsByBundleId;
	NSDictionary* _fileProviderBundleMap;
	NSMutableArray* _containerPaths;
	NSMutableArray* _queueLabels;
	NSMutableArray* _containerIDs;
	NSMutableArray* _extensionIdentifiers;
	long long _notificationCount;

}

@property (nonatomic,retain) id matchingContext;                                 //@synthesize matchingContext=_matchingContext - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                 //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSDictionary * extensionsByBundleId;                //@synthesize extensionsByBundleId=_extensionsByBundleId - In the implementation block
@property (nonatomic,retain) NSDictionary * fileProviderBundleMap;               //@synthesize fileProviderBundleMap=_fileProviderBundleMap - In the implementation block
@property (nonatomic,retain) NSMutableArray * containerPaths;                    //@synthesize containerPaths=_containerPaths - In the implementation block
@property (nonatomic,retain) NSMutableArray * queueLabels;                       //@synthesize queueLabels=_queueLabels - In the implementation block
@property (nonatomic,retain) NSMutableArray * containerIDs;                      //@synthesize containerIDs=_containerIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * extensionIdentifiers;              //@synthesize extensionIdentifiers=_extensionIdentifiers - In the implementation block
@property (assign) BOOL extensionsCacheNeedsLoad;                                //@synthesize extensionsCacheNeedsLoad=_extensionsCacheNeedsLoad - In the implementation block
@property (assign,nonatomic) long long notificationCount;                        //@synthesize notificationCount=_notificationCount - In the implementation block
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSDictionary *)extensionsByBundleId;
-(id)matchingContext;
-(void)setMatchingContext:(id)arg1 ;
-(void)findExtensionsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)startLookingForExtensionsWithMatchUpdateHandler:(/*^block*/id)arg1 ;
-(void)stopLookingForExtensions;
-(void)setExtensionsByBundleId:(NSDictionary *)arg1 ;
-(NSDictionary *)fileProviderBundleMap;
-(void)setFileProviderBundleMap:(NSDictionary *)arg1 ;
-(NSMutableArray *)containerPaths;
-(void)setContainerPaths:(NSMutableArray *)arg1 ;
-(NSMutableArray *)queueLabels;
-(void)setQueueLabels:(NSMutableArray *)arg1 ;
-(NSMutableArray *)containerIDs;
-(void)setContainerIDs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)extensionIdentifiers;
-(void)setExtensionIdentifiers:(NSMutableArray *)arg1 ;
-(BOOL)extensionsCacheNeedsLoad;
-(void)setExtensionsCacheNeedsLoad:(BOOL)arg1 ;
-(long long)notificationCount;
-(void)setNotificationCount:(long long)arg1 ;
@end

