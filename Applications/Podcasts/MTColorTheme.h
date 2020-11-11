//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface MTColorTheme : NSObject
{
    _Bool _isBackgroundLight;	// 8 = 0x8
    UIColor *_backgroundColor;	// 16 = 0x10
    UIColor *_primaryTextColor;	// 24 = 0x18
    UIColor *_secondaryTextColor;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010007c1a8
@property(nonatomic) _Bool isBackgroundLight; // @synthesize isBackgroundLight=_isBackgroundLight;
@property(retain, nonatomic) UIColor *secondaryTextColor; // @synthesize secondaryTextColor=_secondaryTextColor;
@property(retain, nonatomic) UIColor *primaryTextColor; // @synthesize primaryTextColor=_primaryTextColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (_Bool)isBackgroundDark;	// IMP=0x000000010007c13c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010007bed0

@end

