/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:51 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSSet;

@interface AVProxyKVOObserver : NSObject {

	id _retainedObservedObject;
	id _unsafeUnretainedObservedObject;
	BOOL _canHandleChanges;
	BOOL _includeInitialValue;
	BOOL _includeChanges;
	NSString* _token;
	NSSet* _keyPaths;
	/*^block*/id _changesBlock;

}

@property (nonatomic,readonly) NSString * token;                      //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) BOOL includeInitialValue;              //@synthesize includeInitialValue=_includeInitialValue - In the implementation block
@property (nonatomic,readonly) BOOL includeChanges;                   //@synthesize includeChanges=_includeChanges - In the implementation block
@property (nonatomic,readonly) NSSet * keyPaths;                      //@synthesize keyPaths=_keyPaths - In the implementation block
@property (nonatomic,readonly) id changesBlock;                       //@synthesize changesBlock=_changesBlock - In the implementation block
-(NSString *)token;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)stopObserving;
-(NSSet *)keyPaths;
-(void)startObserving:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithObservedObject:(id)arg1 observer:(id)arg2 keyPaths:(id)arg3 retainingObservedObject:(BOOL)arg4 includeInitialValue:(BOOL)arg5 includeChanges:(BOOL)arg6 changesBlock:(/*^block*/id)arg7 ;
-(void)_handleValueChangeForKeyPath:(id)arg1 ofObject:(id)arg2 oldValue:(id)arg3 newValue:(id)arg4 context:(void*)arg5 ;
-(BOOL)includeInitialValue;
-(BOOL)includeChanges;
-(id)changesBlock;
@end

