/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:35 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol IKEngineDelegate <NSObject>
@optional
-(void)engine:(id)arg1 connection:(id)arg2 didAddBookmark:(id)arg3;
-(void)engine:(id)arg1 willStartConnection:(id)arg2;
-(void)engine:(id)arg1 didFinishConnection:(id)arg2;
-(void)engine:(id)arg1 didFailConnection:(id)arg2 error:(id)arg3;
-(void)engine:(id)arg1 didCancelConnection:(id)arg2;
-(void)engine:(id)arg1 connection:(id)arg2 didReceiveAuthToken:(id)arg3 andTokenSecret:(id)arg4;
-(void)engine:(id)arg1 connection:(id)arg2 didVerifyCredentialsForUser:(id)arg3;
-(void)engine:(id)arg1 connection:(id)arg2 didReceiveBookmarks:(id)arg3 ofUser:(id)arg4 forFolder:(id)arg5;
-(void)engine:(id)arg1 connection:(id)arg2 didUpdateReadProgressOfBookmark:(id)arg3;
-(void)engine:(id)arg1 connection:(id)arg2 didDeleteBookmarkWithBookmarkID:(long long)arg3;
-(void)engine:(id)arg1 connection:(id)arg2 didStarBookmark:(id)arg3;
-(void)engine:(id)arg1 connection:(id)arg2 didUnstarBookmark:(id)arg3;
-(void)engine:(id)arg1 connection:(id)arg2 didArchiveBookmark:(id)arg3;
-(void)engine:(id)arg1 connection:(id)arg2 didUnarchiveBookmark:(id)arg3;
-(void)engine:(id)arg1 connection:(id)arg2 didMoveBookmark:(id)arg3 toFolderWithFolderID:(long long)arg4;
-(void)engine:(id)arg1 connection:(id)arg2 didReceiveText:(id)arg3 ofBookmarkWithBookmarkID:(long long)arg4;
-(void)engine:(id)arg1 connection:(id)arg2 didReceiveFolders:(id)arg3;
-(void)engine:(id)arg1 connection:(id)arg2 didAddFolder:(id)arg3;
-(void)engine:(id)arg1 connection:(id)arg2 didDeleteFolderWithFolderID:(long long)arg3;
-(void)engine:(id)arg1 connection:(id)arg2 didOrderFolders:(id)arg3;

@end

