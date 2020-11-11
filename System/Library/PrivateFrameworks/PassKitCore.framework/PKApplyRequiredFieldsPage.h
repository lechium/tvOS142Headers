/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:07 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKDynamicProvisioningPageContent.h>

@class PKPaymentSetupFieldsModel;

@interface PKApplyRequiredFieldsPage : PKDynamicProvisioningPageContent {

	PKPaymentSetupFieldsModel* _fieldModel;

}

@property (nonatomic,retain) PKPaymentSetupFieldsModel * fieldModel;              //@synthesize fieldModel=_fieldModel - In the implementation block
-(id)initWithDictionary:(id)arg1 fieldOptions:(id)arg2 featureApplication:(id)arg3 ;
-(PKPaymentSetupFieldsModel *)fieldModel;
-(void)setFieldModel:(PKPaymentSetupFieldsModel *)arg1 ;
@end

