//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

#import "SiriUIReusableView-Protocol.h"

@class NSString, SiriUISnippetViewController, UILabel, UIView;

@interface SRGuideViewHeader : UICollectionReusableView <SiriUIReusableView>
{
    UIView *_contentView;	// 8 = 0x8
    UILabel *_headerLabel;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    struct UIEdgeInsets _edgeInsets;	// 32 = 0x20
}

+ (id)_font;	// IMP=0x000000010008a58c
+ (struct UIEdgeInsets)_edgeInsets;	// IMP=0x000000010008a538
+ (id)elementKind;	// IMP=0x000000010008a528
+ (id)reuseIdentifier;	// IMP=0x000000010008a4d0
+ (double)firstLineBaselineOffsetFromTop;	// IMP=0x000000010008a3f4
+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 text:(id)arg2;	// IMP=0x000000010008a34c
+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 text:(id)arg2 edgeInsets:(struct UIEdgeInsets)arg3;	// IMP=0x000000010008a1c4
+ (double)defaultHeight;	// IMP=0x000000010008a0d4
- (void).cxx_destruct;	// IMP=0x000000010008a5e0
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)layoutSubviews;	// IMP=0x0000000100089f70
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100089d5c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak SiriUISnippetViewController *snippetViewController;
@property(readonly) Class superclass;

@end

