/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:50 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AKAuthHandler <NSObject>
@required
-(void)reauthenticateWithContext:(id)arg1 completionWithResults:(/*^block*/id)arg2;
-(id)buildReauthenticationContextFromContext:(id)arg1 error:(id*)arg2;
-(void)reauthenticateWithContext:(id)arg1 completion:(/*^block*/id)arg2;

@end

