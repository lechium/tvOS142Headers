/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:47 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ASDAppQueryResultsObserver.h>

@interface AppStoreKit.DeviceAppStateDataSource : NSObject <ASDAppQueryResultsObserver> {

	 appQuery;
	 store;
	 delegate;
	 accessQueue;
	 queryQueue;
	 expectedAppStates;
	 previouslyInstalledLibraryItems;
	 availableUpdatesCache;

}
-(id)init;
-(void)dealloc;
-(void)appQuery:(id)arg1 resultsDidChange:(id)arg2 ;
-(void)didReceiveUpdateFromProductPage:(id)arg1 ;
@end

