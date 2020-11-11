//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;
@protocol TVHNoMediaLibrariesDiscoveredViewDelegate;

@interface TVHNoMediaLibrariesDiscoveredView : UIView
{
    id <TVHNoMediaLibrariesDiscoveredViewDelegate> _delegate;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UILabel *_messageLabel;	// 24 = 0x18
    UIButton *_retryButton;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010009411c
@property(retain, nonatomic) UIButton *retryButton; // @synthesize retryButton=_retryButton;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <TVHNoMediaLibrariesDiscoveredViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didSelectRetryButton;	// IMP=0x0000000100094034
- (id)initWithAccountName:(id)arg1;	// IMP=0x00000001000936ac
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100093624
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010009359c
- (id)init;	// IMP=0x0000000100093514

@end

