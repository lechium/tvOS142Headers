/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:12 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class PKPaymentPassAction;

@interface PKPaymentRemoteContentPassActionResponse : PKPaymentWebServiceResponse {

	PKPaymentPassAction* _updatedAction;

}

@property (nonatomic,retain) PKPaymentPassAction * updatedAction;              //@synthesize updatedAction=_updatedAction - In the implementation block
-(id)initWithExistingAction:(id)arg1 data:(id)arg2 ;
-(PKPaymentPassAction *)updatedAction;
-(void)setUpdatedAction:(PKPaymentPassAction *)arg1 ;
@end

