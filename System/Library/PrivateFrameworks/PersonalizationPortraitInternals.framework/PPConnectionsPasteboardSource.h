/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:48 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PersonalizationPortraitInternals/PPConnectionsSource.h>
#import <libobjc.A.dylib/PPConnectionsLocationSource.h>

@protocol OS_dispatch_semaphore;
@class NSCache, NSObject, NSOperationQueue, NSLocale, NSString;

@interface PPConnectionsPasteboardSource : PPConnectionsSource <PPConnectionsLocationSource> {

	unsigned long long _pasteboardNotificationState;
	NSCache* _cache;
	id _pasteboardObserver;
	NSObject*<OS_dispatch_semaphore> _init_sem;
	NSOperationQueue* _pbQueue;
	NSLocale* _testLocale;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)identifier;
-(id)locationItemsWithCriteria:(id)arg1 earliest:(id)arg2 latest:(id)arg3 limit:(unsigned long long)arg4 consumer:(unsigned long long)arg5 explanationSet:(id)arg6 ;
-(id)cacheValueForKey:(id)arg1 ;
-(void)setCacheObject:(id)arg1 forKey:(id)arg2 ;
-(id)_mostRecentPasteboardItem;
-(void)_setMostRecentPasteboardItem:(id)arg1 ;
-(void)refreshMostRecentPasteboardItemFromNotification:(BOOL)arg1 explanationSet:(id)arg2 ;
-(id)fetchedPasteboardItem;
-(id)addressPasteboardTextItemFromNotification:(BOOL)arg1 ;
-(id)validUTTypes;
-(id)supportedSemanticTags;
-(void)setPasteboardTextForTesting:(id)arg1 ;
-(void)unsetPasteboardTextForTestingAndClearCache;
-(void)setTestLocale:(id)arg1 ;
@end

