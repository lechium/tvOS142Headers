//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSAttributedString, NSString, UILabel;

@interface SRSpeechAlternativeCellView : UIView
{
    UILabel *_displayTextLabel;	// 8 = 0x8
    UIView *_containerView;	// 16 = 0x10
    NSAttributedString *_titleString;	// 24 = 0x18
    _Bool _hasSetUpConstraints;	// 32 = 0x20
    NSString *_responseText;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010008249c
@property(copy, nonatomic) NSString *responseText; // @synthesize responseText=_responseText;
- (void)updateConstraints;	// IMP=0x0000000100082234
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001000821b8
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000100082184
- (struct UIEdgeInsets)edgeInsets;	// IMP=0x0000000100082154
- (id)initWithTitle:(id)arg1;	// IMP=0x0000000100081f98

@end

