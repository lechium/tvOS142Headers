//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, TVHErrorView;

@interface TVHErrorViewController : UIViewController
{
    TVHErrorView *_errorView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100042df4
@property(retain, nonatomic) TVHErrorView *errorView; // @synthesize errorView=_errorView;
- (void)loadView;	// IMP=0x0000000100042d84
@property(copy, nonatomic) NSString *messageText;
- (id)initWithMessage:(id)arg1;	// IMP=0x0000000100042bb4
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100042b2c
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100042aa4
- (id)init;	// IMP=0x0000000100042a1c

@end
