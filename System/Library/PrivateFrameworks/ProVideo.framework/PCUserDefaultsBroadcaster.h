/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:25 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface PCUserDefaultsBroadcaster : NSObject {

	NSMutableDictionary* _userDefaultsBroadcasted;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)observersForUserDefault:(id)arg1 ;
-(void)removeObserver:(id)arg1 forUserDefault:(id)arg2 fromObservers:(id)arg3 ;
-(BOOL)isWeakReferenceHashTableEmpty:(id)arg1 ;
-(void)removeObserversForUserDefault:(id)arg1 ;
-(void)addObserver:(id)arg1 ofUserDefaults:(id)arg2 ;
-(void)removeObserver:(id)arg1 ofUserDefaults:(id)arg2 ;
-(BOOL)hasObserversOfUserDefault:(id)arg1 ;
@end

