/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:01 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreCDPInternal/CDPDDeviceSecretValidator.h>

@interface CDPDRemoteDeviceSecretValidator : CDPDDeviceSecretValidator {

	/*^block*/id _requestToJoinCompletion;
	BOOL _isWaitingForRemoteApproval;

}
-(void)approveFromAnotherDeviceWithCompletion:(/*^block*/id)arg1 ;
-(void)cancelApproveFromAnotherDevice;
-(void)resetAccountCDPState;
-(void)supportedEscapeOfferMaskCompletion:(/*^block*/id)arg1 ;
-(void)setValidSecretHandler:(/*^block*/id)arg1 ;
-(id)_decoratedDelegate;
@end

