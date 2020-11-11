/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:05 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKPassFrontFaceView.h>

@class UILabel, UIView, PKBackdropView, PKBarcodeStickerView, NSMutableArray, UIButton, UIImageView;

@interface PKPassPaymentCardFrontFaceView : PKPassFrontFaceView {

	UILabel* _balanceLabel;
	UIView* _scrimView;
	PKBackdropView* _backdropView;
	PKBarcodeStickerView* _topBarcodeView;
	PKBarcodeStickerView* _bottomBarcodeView;
	NSMutableArray* _oldTopBarcodeViews;
	NSMutableArray* _oldBottomBarcodeViews;
	UIButton* _fullScreenButton;
	UIImageView* _compactBankLogoView;

}
-(void)dealloc;
-(CGSize)contentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_handleAccountChanged:(id)arg1 ;
-(void)createBodyContentViews;
-(id)templateForLayoutMode:(long long)arg1 ;
-(void)createHeaderContentViews;
-(void)setViewExpanded:(BOOL)arg1 ;
-(void)setDynamicBarcodeData:(id)arg1 ;
-(id)templateForHeaderBucket;
-(void)setShowsLiveBalance:(BOOL)arg1 ;
-(id)_filterAuxiliaryField:(id)arg1 ;
-(id)_filterSecondaryField:(id)arg1 ;
-(void)_showFullScreenBarcodeForButton:(id)arg1 ;
-(void)_updateBalanceLabelFontSize;
-(void)_updateBalanceWithAccount:(id)arg1 ;
-(double)_barcodePadding;
-(CGSize)_barcodeSize;
-(BOOL)showsShare;
@end

