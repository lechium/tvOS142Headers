//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSettingKit/TSKViewController.h>

@class AXTVCaptionCloudView, TSKPreviewViewController;

@interface AXTVCaptionBaseViewController : TSKViewController
{
    AXTVCaptionCloudView *_captionImageView;	// 8 = 0x8
    TSKPreviewViewController *_captionPreviewViewController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002b7c8
@property(retain, nonatomic) TSKPreviewViewController *captionPreviewViewController; // @synthesize captionPreviewViewController=_captionPreviewViewController;
@property(retain, nonatomic) AXTVCaptionCloudView *captionImageView; // @synthesize captionImageView=_captionImageView;
- (id)previewForItemAtIndexPath:(id)arg1;	// IMP=0x000000000002b6a0
- (void)loadView;	// IMP=0x000000000002b5ec

@end

