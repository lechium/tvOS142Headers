/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:35 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SiriVideoIntents.framework/SiriVideoIntents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AddToWatchListIntentHandling.h>

@interface SiriVideoIntents.AddToWatchListIntentHandler : NSObject <AddToWatchListIntentHandling> {

	 contentResolver;
	 watchListService;
	 analyticsService;

}
-(id)init;
-(void)resolveContentForAddToWatchList:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)confirmAddToWatchList:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleAddToWatchList:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

