/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:41 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UITextInputSessionAction.h>

@interface _UITextInputSessionDeletionAction : _UITextInputSessionAction {

	unsigned long long _deletionCount;

}

@property (assign,nonatomic) unsigned long long deletionCount;              //@synthesize deletionCount=_deletionCount - In the implementation block
-(void)setDeletionCount:(unsigned long long)arg1 ;
-(unsigned long long)deletionCount;
-(BOOL)changedContent;
-(long long)mergeActionIfPossible:(id)arg1 ;
@end

