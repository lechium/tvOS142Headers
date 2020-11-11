/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:44 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface GKObserverTrampoline : NSObject {

	id _observee;
	NSString* _keyPath;
	/*^block*/id _block;
	int _cancellationPredicate;
	unsigned long long _options;

}

@property (readonly) id token; 
-(void)dealloc;
-(id)token;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)startObserving;
-(void)cancelObservation;
-(id)initObservingObject:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 block:(/*^block*/id)arg4 ;
@end

