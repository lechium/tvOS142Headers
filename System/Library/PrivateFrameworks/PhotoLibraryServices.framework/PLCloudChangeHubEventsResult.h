/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:25 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PLCloudChangeEventsResult.h>

@protocol OS_xpc_object;
@class NSObject, NSString;

@interface PLCloudChangeHubEventsResult : NSObject <PLCloudChangeEventsResult> {

	NSObject*<OS_xpc_object> _events;
	long long _resultType;
	unsigned long long _changeHubEventIndex;

}

@property (readonly) long long resultType;                                 //@synthesize resultType=_resultType - In the implementation block
@property (readonly) unsigned long long changeHubEventIndex;               //@synthesize changeHubEventIndex=_changeHubEventIndex - In the implementation block
@property (copy,readonly) NSString * currentTokenDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)resultType;
-(void)enumerateLocalEventsWithBlock:(/*^block*/id)arg1 ;
-(NSString *)currentTokenDescription;
-(id)initWithUnsuccessfulResultType:(long long)arg1 ;
-(id)initWithSuccesfulEvents:(id)arg1 changeHubEventIndex:(unsigned long long)arg2 ;
-(id)initWithResultType:(long long)arg1 events:(id)arg2 changeHubEventIndex:(unsigned long long)arg3 ;
-(id)localEventFromEvent:(id)arg1 ;
-(unsigned long long)changeHubEventIndex;
@end

