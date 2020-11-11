/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:20 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@protocol HAPRelayPairingClientDelegate;
@class NSURL;

@interface HAPRelayPairingClient : HMFObject {

	id<HAPRelayPairingClientDelegate> _delegate;
	NSURL* _accessoryBagURL;

}

@property (__weak) id<HAPRelayPairingClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSURL * accessoryBagURL;                     //@synthesize accessoryBagURL=_accessoryBagURL - In the implementation block
-(void)open;
-(void)close;
-(id<HAPRelayPairingClientDelegate>)delegate;
-(void)setDelegate:(id<HAPRelayPairingClientDelegate>)arg1 ;
-(NSURL *)accessoryBagURL;
-(void)requestControllerIdentifier;
-(void)requestAccessTokenForAccessoryIdentifier:(id)arg1 pairingToken:(id)arg2 ;
@end

