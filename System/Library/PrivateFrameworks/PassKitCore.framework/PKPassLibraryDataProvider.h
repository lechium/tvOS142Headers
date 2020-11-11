/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:06 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PKPassLibraryDataProvider <NSObject>
@property (nonatomic,readonly) BOOL canAddPaymentPass; 
@required
-(BOOL)canAddPaymentPass;
-(id)passWithUniqueID:(id)arg1;
-(id)peerPaymentPassUniqueID;
-(id)passWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;
-(void)removePass:(id)arg1;
-(BOOL)canAddSecureElementPassWithConfiguration:(id)arg1;
-(id)paymentPasses;

@end

