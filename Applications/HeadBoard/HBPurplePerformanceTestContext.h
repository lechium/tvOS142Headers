//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HBAppGridView, HBAppGridViewController, HBMainViewController, UIWindow;

@interface HBPurplePerformanceTestContext : NSObject
{
    UIWindow *_window;	// 8 = 0x8
}

+ (id)contextWithWindow:(id)arg1;	// IMP=0x00000001000ab1e4
- (void).cxx_destruct;	// IMP=0x00000001000ab32c
@property(readonly, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(readonly, nonatomic) HBAppGridView *appGridView;
@property(readonly, nonatomic) HBAppGridViewController *appGridViewController;
@property(readonly, nonatomic) HBMainViewController *mainViewController;

@end
