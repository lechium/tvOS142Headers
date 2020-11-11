/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:35 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class TVRMSPowerAssertion, TVRMSRunAssertion;

@interface _RMSSessionRecord : NSObject {

	int _refreshCount;
	int _timeout;
	id _session;
	TVRMSPowerAssertion* _powerAssertion;
	TVRMSRunAssertion* _runAssertion;

}

@property (assign,nonatomic) int refreshCount;                                  //@synthesize refreshCount=_refreshCount - In the implementation block
@property (assign,nonatomic) int timeout;                                       //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,retain) id session;                                        //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) TVRMSPowerAssertion * powerAssertion;              //@synthesize powerAssertion=_powerAssertion - In the implementation block
@property (nonatomic,retain) TVRMSRunAssertion * runAssertion;                  //@synthesize runAssertion=_runAssertion - In the implementation block
-(void)setTimeout:(int)arg1 ;
-(id)session;
-(int)timeout;
-(void)setSession:(id)arg1 ;
-(TVRMSPowerAssertion *)powerAssertion;
-(void)setPowerAssertion:(TVRMSPowerAssertion *)arg1 ;
-(int)refreshCount;
-(void)setRefreshCount:(int)arg1 ;
-(TVRMSRunAssertion *)runAssertion;
-(void)setRunAssertion:(TVRMSRunAssertion *)arg1 ;
@end
