/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:45 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PDSAgent.framework/PDSAgent
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSProxy.h>

@class PDSCDCacheContainer, NSPersistentContainer;

@interface PDSCDCacheReferenceProxy : NSProxy {

	PDSCDCacheContainer* _cacheContainer;
	NSPersistentContainer* _persistentContainer;

}

@property (nonatomic,retain) PDSCDCacheContainer * cacheContainer;                     //@synthesize cacheContainer=_cacheContainer - In the implementation block
@property (nonatomic,retain) NSPersistentContainer * persistentContainer;              //@synthesize persistentContainer=_persistentContainer - In the implementation block
-(BOOL)conformsToProtocol:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(NSPersistentContainer *)persistentContainer;
-(void)setPersistentContainer:(NSPersistentContainer *)arg1 ;
-(void)setCacheContainer:(PDSCDCacheContainer *)arg1 ;
-(PDSCDCacheContainer *)cacheContainer;
-(id)initWithCacheContainer:(id)arg1 persistentContainer:(id)arg2 ;
@end
