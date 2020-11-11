/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:59 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/BluetoothServicesUI.framework/BluetoothServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BluetoothServicesUI/BTShareAudioBaseViewController.h>

@class UIImageView, BTMediaPlayerView, UIButton, NSString;

@interface BTShareAudioConfirmViewController : BTShareAudioBaseViewController {

	unsigned _colorCode;
	unsigned _productID;
	UIImageView* _productImageView;
	BTMediaPlayerView* _productMovieView;
	UIButton* _confirmButton;
	UIButton* _cancelButton;
	UIImageView* _shareImageView;
	NSString* _deviceName;

}

@property (nonatomic,retain) UIImageView * productImageView;                    //@synthesize productImageView=_productImageView - In the implementation block
@property (nonatomic,retain) BTMediaPlayerView * productMovieView;              //@synthesize productMovieView=_productMovieView - In the implementation block
@property (nonatomic,retain) UIButton * confirmButton;                          //@synthesize confirmButton=_confirmButton - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;                           //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UIImageView * shareImageView;                      //@synthesize shareImageView=_shareImageView - In the implementation block
@property (assign,nonatomic) unsigned colorCode;                                //@synthesize colorCode=_colorCode - In the implementation block
@property (nonatomic,copy) NSString * deviceName;                               //@synthesize deviceName=_deviceName - In the implementation block
@property (assign,nonatomic) unsigned productID;                                //@synthesize productID=_productID - In the implementation block
-(NSString *)deviceName;
-(void)setDeviceName:(NSString *)arg1 ;
-(unsigned)productID;
-(void)setProductID:(unsigned)arg1 ;
-(unsigned)colorCode;
-(void)setColorCode:(unsigned)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(UIButton *)cancelButton;
-(void)setCancelButton:(UIButton *)arg1 ;
-(UIButton *)confirmButton;
-(void)setConfirmButton:(UIButton *)arg1 ;
-(void)eventCancel:(id)arg1 ;
-(UIImageView *)shareImageView;
-(void)setShareImageView:(UIImageView *)arg1 ;
-(void)_updateDeviceVisual:(id)arg1 ;
-(void)eventTemporarilyShareButton:(id)arg1 ;
-(void)eventPermanentButton:(id)arg1 ;
-(UIImageView *)productImageView;
-(void)setProductImageView:(UIImageView *)arg1 ;
-(BTMediaPlayerView *)productMovieView;
-(void)setProductMovieView:(BTMediaPlayerView *)arg1 ;
@end

