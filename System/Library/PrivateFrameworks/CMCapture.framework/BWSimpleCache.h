/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:01 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CMCapture/CMCapture-Structs.h>
@class NSMutableDictionary;

@interface BWSimpleCache : NSObject {

	NSMutableDictionary* _cache;
	OpaqueFigSimpleMutexRef _propertyMutex;

}
+(void)initialize;
-(id)init;
-(void)dealloc;
-(void)cacheObject:(id)arg1 forKey:(id)arg2 ;
-(id)copyAndClearObjectForKey:(id)arg1 ;
@end

