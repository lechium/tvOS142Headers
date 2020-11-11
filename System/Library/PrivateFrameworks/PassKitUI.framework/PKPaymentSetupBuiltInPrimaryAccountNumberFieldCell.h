/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:06 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKPaymentSetupFieldCell.h>

@class UIButton;

@interface PKPaymentSetupBuiltInPrimaryAccountNumberFieldCell : PKPaymentSetupFieldCell {

	BOOL _showsCameraCaptureButton;
	UIButton* _cameraCaptureButton;

}

@property (assign,nonatomic) BOOL showsCameraCaptureButton;                        //@synthesize showsCameraCaptureButton=_showsCameraCaptureButton - In the implementation block
@property (nonatomic,retain,readonly) UIButton * cameraCaptureButton;              //@synthesize cameraCaptureButton=_cameraCaptureButton - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textFieldShouldClear:(id)arg1 ;
-(void)setShowsCameraCaptureButton:(BOOL)arg1 ;
-(UIButton *)cameraCaptureButton;
-(void)setPaymentSetupField:(id)arg1 ;
-(BOOL)showsCameraCaptureButton;
@end

