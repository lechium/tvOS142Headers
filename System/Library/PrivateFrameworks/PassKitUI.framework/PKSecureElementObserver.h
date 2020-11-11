/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:03 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PKSecureElementObserver <NSObject>
@optional
-(void)secureElement:(id)arg1 deletionOfAppletsDidUpdateToProgress:(double)arg2;
-(void)secureElement:(id)arg1 deletionOfAppletsDidFinishWithSuccess:(BOOL)arg2;
-(void)secureElementDidEnterRestrictedMode:(id)arg1;
-(void)secureElementDidLeaveRestrictedMode:(id)arg1;
-(void)secureElementPairingDidChangeForReason:(unsigned long long)arg1;

@end
