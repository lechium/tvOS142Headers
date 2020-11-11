/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:48 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMTextMessagePartChatItem.h>
#import <IMCore/IMReplyContext.h>

@class NSString, IMItem;

@interface IMReplyContextTextMessagePartChatItem : IMTextMessagePartChatItem <IMReplyContext> {

	BOOL _replyIsFromMe;
	IMItem* _parentItem;
	NSString* _replyMessageGUID;

}

@property (nonatomic,retain) IMItem * _parentItem;                   //@synthesize parentItem=_parentItem - In the implementation block
@property (assign,nonatomic) BOOL replyIsFromMe;                     //@synthesize replyIsFromMe=_replyIsFromMe - In the implementation block
@property (nonatomic,copy) NSString * replyMessageGUID;              //@synthesize replyMessageGUID=_replyMessageGUID - In the implementation block
-(IMItem *)_parentItem;
-(BOOL)isReplyContextPreview;
-(BOOL)canDelete;
-(id)_initWithItem:(id)arg1 parentItem:(id)arg2 replyMessageGUID:(id)arg3 replyIsFromMe:(BOOL)arg4 text:(id)arg5 index:(long long)arg6 messagePartRange:(NSRange)arg7 subject:(id)arg8 ;
-(BOOL)replyIsFromMe;
-(NSString *)replyMessageGUID;
-(id)_initWithItem:(id)arg1 parentItem:(id)arg2 replyMessageGUID:(id)arg3 replyIsFromMe:(BOOL)arg4 text:(id)arg5 index:(long long)arg6 messagePartRange:(NSRange)arg7 subject:(id)arg8 shouldDisplayLink:(BOOL)arg9 ;
-(void)set_parentItem:(IMItem *)arg1 ;
-(void)setReplyIsFromMe:(BOOL)arg1 ;
-(void)setReplyMessageGUID:(NSString *)arg1 ;
@end

