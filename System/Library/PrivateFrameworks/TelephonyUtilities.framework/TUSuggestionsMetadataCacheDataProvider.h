/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:37 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TelephonyUtilities/TUMetadataCacheDataProvider.h>

@protocol OS_dispatch_semaphore;
@class NSObject;

@interface TUSuggestionsMetadataCacheDataProvider : TUMetadataCacheDataProvider {

	NSObject*<OS_dispatch_semaphore> _suggestionsServiceThrottleSemaphore;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> suggestionsServiceThrottleSemaphore;              //@synthesize suggestionsServiceThrottleSemaphore=_suggestionsServiceThrottleSemaphore - In the implementation block
+(void)suggestedNamesForDestinationID:(id)arg1 onlySignificant:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
+(id)suggestedNamesForDestinationID:(id)arg1 onlySignificant:(BOOL)arg2 error:(id*)arg3 ;
+(id)newestSuggestedContactForDestinationID:(id)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_semaphore>)suggestionsServiceThrottleSemaphore;
-(void)updateCacheWithDestinationIDs:(id)arg1 withGroup:(id)arg2 ;
-(void)setSuggestionsServiceThrottleSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
@end

