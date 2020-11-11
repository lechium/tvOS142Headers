/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:40 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol VSViewServiceHostProtocol <NSObject>
@required
-(void)_dismissViewController;
-(void)_presentViewController;
-(void)_request:(id)arg1 didFinishWithResponse:(id)arg2;
-(void)_request:(id)arg1 didFailWithError:(id)arg2;
-(void)_didChooseAdditionalProvidersForRequest:(id)arg1;
-(void)_didCancelRequest:(id)arg1;
-(void)_didChooseProviderWithIdentifier:(id)arg1 vetoHandler:(/*^block*/id)arg2;

@end

