/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:01 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface AFConversationStore : NSObject {

	NSMutableDictionary* _conversationsByIdentifier;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (getter=_conversationsByIdentifier,nonatomic,readonly) NSMutableDictionary * conversationsByIdentifier;              //@synthesize conversationsByIdentifier=_conversationsByIdentifier - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                                               //@synthesize queue=_queue - In the implementation block
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)_conversationsByIdentifier;
-(void)_registerConversation:(id)arg1 withIdentifier:(id)arg2 ;
-(void)removeConversationWithIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)saveConversation:(id)arg1 withIdentifier:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)fetchConversationWithIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

