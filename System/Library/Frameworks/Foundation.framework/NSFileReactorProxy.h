/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:49 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSXPCConnection, NSFileAccessNode;

@interface NSFileReactorProxy : NSObject {

	NSXPCConnection* _client;
	id _reactorID;
	NSFileAccessNode* _itemLocation;
	unsigned _effectiveUserIdentifier;

}

@property (assign) unsigned effectiveUserIdentifier; 
+(void)_enumerateParentDirectoriesStartingAtURL:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)description;
-(void)dealloc;
-(void)invalidate;
-(id)client;
-(id)descriptionWithIndenting:(id)arg1 ;
-(void)setItemLocation:(id)arg1 ;
-(id)itemLocation;
-(void)collectDebuggingInformationWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned)effectiveUserIdentifier;
-(id)reactorID;
-(void)setEffectiveUserIdentifier:(unsigned)arg1 ;
-(BOOL)allowedForURL:(id)arg1 ;
-(void)forwardUsingProxy:(id)arg1 ;
-(id)_clientProxy;
-(id)initWithClient:(id)arg1 reactorID:(id)arg2 ;
@end
