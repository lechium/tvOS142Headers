/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:15 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TVTopShelfContentExtensionVendorContextXPCProtocol <NSObject>
@required
-(void)shutdown;
-(void)didSelectActionWithURL:(id)arg1 actionUserInfo:(id)arg2 forItemWithIdentifier:(id)arg3 itemUserInfo:(id)arg4;
-(void)didShowItemWithIdentifier:(id)arg1 userInfo:(id)arg2;
-(void)loadTopShelfContentAndDelegateFlags:(BOOL)arg1 replyHandler:(/*^block*/id)arg2;
-(void)performCustomActionWithURL:(id)arg1 actionUserInfo:(id)arg2 forItemWithIdentifier:(id)arg3 itemUserInfo:(id)arg4 replyHandler:(/*^block*/id)arg5;

@end

