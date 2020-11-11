//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUI/SiriUIContentCollectionViewCell.h>

@class NSString, SiriUIContentLabel, UIImage, UIImageView;

@interface SRGuideViewCell : SiriUIContentCollectionViewCell
{
    UIImageView *_iconImageView;	// 8 = 0x8
    SiriUIContentLabel *_nameLabel;	// 16 = 0x10
    SiriUIContentLabel *_tagPhraseLabel;	// 24 = 0x18
    _Bool _hasCreatedConstraints;	// 32 = 0x20
    UIImage *_iconImage;	// 40 = 0x28
    NSString *_name;	// 48 = 0x30
    NSString *_tagPhrase;	// 56 = 0x38
    NSString *_aceId;	// 64 = 0x40
}

+ (_Bool)chevronBlendEffectEnabled;	// IMP=0x0000000100035720
+ (struct UIEdgeInsets)defaultInsets;	// IMP=0x00000001000356c4
+ (double)heightOfCellWithName:(id)arg1 tagPhrase:(id)arg2 width:(double)arg3;	// IMP=0x0000000100035334
+ (_Bool)placesImageAboveText;	// IMP=0x0000000100034bf8
+ (_Bool)_allowsTextToWrap;	// IMP=0x0000000100034b84
+ (id)_tagPhraseLabelFont;	// IMP=0x0000000100034b70
+ (id)_nameLabelFont;	// IMP=0x0000000100034b5c
- (void).cxx_destruct;	// IMP=0x0000000100035800
@property(copy, nonatomic) NSString *aceId; // @synthesize aceId=_aceId;
@property(copy, nonatomic) NSString *tagPhrase; // @synthesize tagPhrase=_tagPhrase;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
- (void)updateConstraints;	// IMP=0x0000000100034c6c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000347f0

@end

