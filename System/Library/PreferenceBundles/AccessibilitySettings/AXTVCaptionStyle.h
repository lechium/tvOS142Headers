//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, UIColor;

@interface AXTVCaptionStyle : NSObject <NSCopying>
{
    NSString *_styleID;	// 8 = 0x8
}

+ (id)createDefaultCaptionStyle;	// IMP=0x000000000003043c
+ (long long)defaultTextEdgeStyle;	// IMP=0x0000000000030434
+ (id)defaultFontName;	// IMP=0x0000000000030428
+ (id)defaultHighlightColor;	// IMP=0x0000000000030404
+ (id)defaultBackgroundColor;	// IMP=0x00000000000303e0
+ (id)defaultTextColor;	// IMP=0x00000000000303bc
+ (double)defaultHighlightOpacity;	// IMP=0x00000000000303b4
+ (double)defaultBackgroundOpacity;	// IMP=0x00000000000303ac
+ (long long)defaultTextSize;	// IMP=0x00000000000303a4
+ (double)defaultTextOpacity;	// IMP=0x000000000003039c
- (void).cxx_destruct;	// IMP=0x0000000000031980
@property(readonly, copy, nonatomic) NSString *styleID; // @synthesize styleID=_styleID;
@property(nonatomic) _Bool videoOverridesBackgroundOpacity;
@property(nonatomic) double backgroundOpacity;
@property(nonatomic) _Bool videoOverridesBackgroundColor;
@property(retain, nonatomic) UIColor *backgroundColor;
@property(nonatomic) _Bool videoOverridesTextHighlight;
@property(nonatomic) double textHighlightOpacity;
@property(retain, nonatomic) UIColor *textHighlightColor;
@property(nonatomic) _Bool videoOverridesTextEdgeStyle;
@property(nonatomic) long long textEdgeStyle;
@property(nonatomic) _Bool videoOverridesTextOpacity;
@property(nonatomic) double textOpacity;
@property(nonatomic) _Bool videoOverridesTextSize;
@property(nonatomic) long long relativeTextSize;
@property(nonatomic) _Bool videoOverridesTextColor;
@property(retain, nonatomic) UIColor *textColor;
- (void)setVideoOverridesTextFont:(_Bool)arg1 fontStyle:(long long)arg2;	// IMP=0x000000000003107c
- (_Bool)videoOverridesTextFontWithStyle:(long long)arg1;	// IMP=0x0000000000031038
- (void)setTextFontName:(id)arg1 fontStyle:(long long)arg2;	// IMP=0x0000000000030ff0
- (id)textFontNameForStyle:(long long)arg1;	// IMP=0x0000000000030f88
@property(nonatomic) _Bool videoOverridesTextSmallCapitalFontName;
@property(copy, nonatomic) NSString *textSmallCapitalFontName;
@property(nonatomic) _Bool videoOverridesTextCursiveFontName;
@property(copy, nonatomic) NSString *textCursiveFontName;
@property(nonatomic) _Bool videoOverridesTextCasualFontName;
@property(copy, nonatomic) NSString *textCasualFontName;
@property(nonatomic) _Bool videoOverridesTextProportionalSansSerifFontName;
@property(copy, nonatomic) NSString *textProportionalSansSerifFontName;
@property(nonatomic) _Bool videoOverridesTextProportionalSerifFontName;
@property(copy, nonatomic) NSString *textProportionalSerifFontName;
@property(nonatomic) _Bool videoOverridesTextMonospaceSansSerifFontName;
@property(copy, nonatomic) NSString *textMonospaceSansSerifFontName;
@property(nonatomic) _Bool videoOverridesTextMonospaceSerifFontName;
@property(copy, nonatomic) NSString *textMonospaceSerifFontName;
@property(nonatomic) _Bool videoOverridesTextFontName;
@property(copy, nonatomic) NSString *textFontName;
@property(copy, nonatomic) NSString *name;
- (id)description;	// IMP=0x0000000000030a18
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000309e8
- (unsigned long long)hash;	// IMP=0x000000000003099c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000308fc
- (id)initWithStyleID:(id)arg1;	// IMP=0x000000000003087c

@end

