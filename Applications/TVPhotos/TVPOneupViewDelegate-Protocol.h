//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TVPOneupView, UIView;

@protocol TVPOneupViewDelegate <NSObject>

@optional
- (void)oneupView:(TVPOneupView *)arg1 didPlayItemAtIndex:(unsigned long long)arg2;
- (void)oneupView:(TVPOneupView *)arg1 didSelectItemAtIndex:(unsigned long long)arg2;
- (void)oneupView:(TVPOneupView *)arg1 didFocusItemAtIndex:(unsigned long long)arg2;
- (void)oneupView:(TVPOneupView *)arg1 willBeginViewTransitionForFocusedView:(UIView *)arg2;
@end

