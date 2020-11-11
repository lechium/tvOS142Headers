/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:46 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MNTimeProvider;
@class MNObserverHashTable;

@interface MNTimeManager : NSObject {

	MNObserverHashTable* _timeManagerObservers;
	id<MNTimeProvider> _provider;

}

@property (nonatomic,retain) id<MNTimeProvider> provider;              //@synthesize provider=_provider - In the implementation block
+(id)sharedManager;
+(double)currentTime;
+(id)currentDate;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)setProvider:(id<MNTimeProvider>)arg1 ;
-(id<MNTimeProvider>)provider;
-(void)_resetToDefaultProvider;
@end

