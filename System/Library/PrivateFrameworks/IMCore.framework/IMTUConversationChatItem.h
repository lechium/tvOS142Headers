/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:48 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMTranscriptChatItem.h>

@class IMHandle, TUConversation, NSUUID, NSDate;

@interface IMTUConversationChatItem : IMTranscriptChatItem {

	IMHandle* _conversationInitiator;

}

@property (nonatomic,__weak,readonly) TUConversation * tuConversation; 
@property (nonatomic,readonly) NSUUID * tuConversationUUID; 
@property (nonatomic,readonly) IMHandle * conversationInitiator;                    //@synthesize conversationInitiator=_conversationInitiator - In the implementation block
@property (nonatomic,readonly) BOOL isFromMe; 
@property (nonatomic,readonly) NSDate * time; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)time;
-(BOOL)isFromMe;
-(BOOL)canDelete;
-(id)_initWithItem:(id)arg1 conversationInitiator:(id)arg2 ;
-(NSUUID *)tuConversationUUID;
-(id)activeCall;
-(TUConversation *)tuConversation;
-(IMHandle *)conversationInitiator;
@end

