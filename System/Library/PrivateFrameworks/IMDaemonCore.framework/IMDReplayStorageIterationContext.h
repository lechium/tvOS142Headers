/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:53 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class IDSKVDeleteContext;

@interface IMDReplayStorageIterationContext : NSObject {

	IDSKVDeleteContext* _deleteContext;

}

@property (nonatomic,retain) IDSKVDeleteContext * deleteContext;              //@synthesize deleteContext=_deleteContext - In the implementation block
-(void)dealloc;
-(IDSKVDeleteContext *)deleteContext;
-(void)setDeleteContext:(IDSKVDeleteContext *)arg1 ;
@end

