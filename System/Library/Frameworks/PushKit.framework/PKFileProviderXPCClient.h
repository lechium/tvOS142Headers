/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:42 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/PushKit.framework/PushKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PKFileProviderXPCClient
@optional
-(void)fileProviderRegistrationFailed;

@required
-(void)fileProviderRegistrationSucceededWithDeviceToken:(id)arg1;
-(void)fileProviderPayloadReceived:(id)arg1;

@end

