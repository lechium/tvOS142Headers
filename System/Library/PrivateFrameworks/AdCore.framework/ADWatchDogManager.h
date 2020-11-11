/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:57 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AdCore/ADSingleton.h>

@protocol OS_dispatch_queue;
@class NSObject, NSNumber, NSMutableDictionary;

@interface ADWatchDogManager : ADSingleton {

	NSObject*<OS_dispatch_queue> _watchdogQueue;
	NSNumber* _currentToken;
	NSMutableDictionary* _tokenCollection;

}

@property (nonatomic,retain) NSNumber * currentToken;                              //@synthesize currentToken=_currentToken - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * tokenCollection;              //@synthesize tokenCollection=_tokenCollection - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSNumber *)currentToken;
-(id)getNextToken;
-(NSMutableDictionary *)tokenCollection;
-(void)simulateCrash:(id)arg1 becauseOf:(unsigned long long)arg2 actuallyTook:(double)arg3 ;
-(void)incrementToken;
-(id)createNewWatchdog:(id)arg1 withTimer:(unsigned long long)arg2 ;
-(BOOL)removeWatchdogWithToken:(id)arg1 ;
-(BOOL)updateReason:(id)arg1 forToken:(id)arg2 ;
-(void)setCurrentToken:(NSNumber *)arg1 ;
@end

