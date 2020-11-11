/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:30 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFTitleCardSection.h>
#import <libobjc.A.dylib/SFRichTitleCardSection.h>
@class NSArray, NSString, SFColor, SFImage, NSNumber, SFActionItem, SFRichText, NSDictionary, NSData;


@protocol SFRichTitleCardSection <SFTitleCardSection>
@property (nonatomic,copy) NSArray * punchoutOptions; 
@property (nonatomic,copy) NSString * punchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText; 
@property (assign,nonatomic) BOOL canBeHidden; 
@property (assign,nonatomic) BOOL hasTopPadding; 
@property (assign,nonatomic) BOOL hasBottomPadding; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) int separatorStyle; 
@property (nonatomic,retain) SFColor * backgroundColor; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,copy) NSString * contentAdvisory; 
@property (nonatomic,retain) SFImage * titleImage; 
@property (assign,nonatomic) BOOL isCentered; 
@property (nonatomic,copy) NSString * descriptionText; 
@property (nonatomic,copy) NSNumber * rating; 
@property (nonatomic,copy) NSString * ratingText; 
@property (nonatomic,retain) SFImage * reviewGlyph; 
@property (nonatomic,copy) NSString * reviewText; 
@property (assign,nonatomic) BOOL reviewNewLine; 
@property (nonatomic,copy) NSArray * moreGlyphs; 
@property (nonatomic,copy) NSString * auxiliaryTopText; 
@property (nonatomic,copy) NSString * auxiliaryMiddleText; 
@property (nonatomic,copy) NSString * auxiliaryBottomText; 
@property (assign,nonatomic) int auxiliaryBottomTextColor; 
@property (nonatomic,copy) NSNumber * auxiliaryAlignment; 
@property (assign,nonatomic) BOOL hideVerticalDivider; 
@property (assign,nonatomic) int titleAlign; 
@property (nonatomic,copy) NSNumber * titleWeight; 
@property (assign,nonatomic) BOOL titleNoWrap; 
@property (assign,nonatomic) BOOL thumbnailCropCircle; 
@property (nonatomic,retain) SFImage * imageOverlay; 
@property (nonatomic,retain) SFActionItem * playAction; 
@property (assign,nonatomic) int playActionAlign; 
@property (nonatomic,copy) NSArray * offers; 
@property (nonatomic,copy) NSString * footnote; 
@property (nonatomic,retain) SFRichText * richSubtitle; 
@property (assign,nonatomic) BOOL subtitleIsEmphasized; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setType:(id)arg1;
-(NSString *)type;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)title;
-(void)setTitle:(id)arg1;
-(void)setSubtitle:(id)arg1;
-(NSString *)subtitle;
-(SFColor *)backgroundColor;
-(void)setBackgroundColor:(id)arg1;
-(NSNumber *)rating;
-(NSString *)descriptionText;
-(void)setDescriptionText:(id)arg1;
-(void)setRating:(id)arg1;
-(NSArray *)punchoutOptions;
-(void)setFootnote:(id)arg1;
-(NSArray *)offers;
-(void)setOffers:(id)arg1;
-(NSString *)footnote;
-(NSString *)reviewText;
-(void)setReviewText:(id)arg1;
-(NSData *)jsonData;
-(SFImage *)titleImage;
-(void)setTitleImage:(id)arg1;
-(NSString *)contentAdvisory;
-(void)setContentAdvisory:(id)arg1;
-(NSArray *)moreGlyphs;
-(void)setMoreGlyphs:(id)arg1;
-(void)setPunchoutOptions:(id)arg1;
-(NSString *)punchoutPickerTitle;
-(void)setPunchoutPickerTitle:(id)arg1;
-(NSString *)punchoutPickerDismissText;
-(void)setPunchoutPickerDismissText:(id)arg1;
-(BOOL)canBeHidden;
-(void)setCanBeHidden:(BOOL)arg1;
-(BOOL)hasTopPadding;
-(void)setHasTopPadding:(BOOL)arg1;
-(BOOL)hasBottomPadding;
-(void)setHasBottomPadding:(BOOL)arg1;
-(int)separatorStyle;
-(void)setSeparatorStyle:(int)arg1;
-(BOOL)isCentered;
-(void)setIsCentered:(BOOL)arg1;
-(BOOL)titleNoWrap;
-(void)setTitleNoWrap:(BOOL)arg1;
-(NSNumber *)titleWeight;
-(void)setTitleWeight:(id)arg1;
-(SFActionItem *)playAction;
-(void)setPlayAction:(id)arg1;
-(SFImage *)reviewGlyph;
-(void)setReviewGlyph:(id)arg1;
-(void)setRatingText:(id)arg1;
-(void)setReviewNewLine:(BOOL)arg1;
-(void)setAuxiliaryTopText:(id)arg1;
-(void)setAuxiliaryMiddleText:(id)arg1;
-(void)setAuxiliaryBottomText:(id)arg1;
-(void)setAuxiliaryBottomTextColor:(int)arg1;
-(void)setAuxiliaryAlignment:(id)arg1;
-(void)setHideVerticalDivider:(BOOL)arg1;
-(void)setTitleAlign:(int)arg1;
-(void)setThumbnailCropCircle:(BOOL)arg1;
-(void)setImageOverlay:(id)arg1;
-(void)setPlayActionAlign:(int)arg1;
-(void)setRichSubtitle:(id)arg1;
-(void)setSubtitleIsEmphasized:(BOOL)arg1;
-(NSString *)ratingText;
-(BOOL)reviewNewLine;
-(NSString *)auxiliaryTopText;
-(NSString *)auxiliaryMiddleText;
-(NSString *)auxiliaryBottomText;
-(int)auxiliaryBottomTextColor;
-(NSNumber *)auxiliaryAlignment;
-(BOOL)hideVerticalDivider;
-(int)titleAlign;
-(BOOL)thumbnailCropCircle;
-(SFImage *)imageOverlay;
-(int)playActionAlign;
-(SFRichText *)richSubtitle;
-(BOOL)subtitleIsEmphasized;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, SFColor, SFImage, NSNumber, SFActionItem, SFRichText, NSDictionary, NSData, SFCard, SFUserReportRequest;

@interface SFRichTitleCardSection : SFTitleCardSection <SFRichTitleCardSection, NSSecureCoding, NSCopying> {

	SCD_Struct_SF7 _has;
	BOOL _canBeHidden;
	BOOL _hasTopPadding;
	BOOL _hasBottomPadding;
	BOOL _isCentered;
	BOOL _reviewNewLine;
	BOOL _hideVerticalDivider;
	BOOL _titleNoWrap;
	BOOL _thumbnailCropCircle;
	BOOL _subtitleIsEmphasized;
	int _separatorStyle;
	int _auxiliaryBottomTextColor;
	int _titleAlign;
	int _playActionAlign;
	NSArray* _punchoutOptions;
	NSString* _punchoutPickerTitle;
	NSString* _punchoutPickerDismissText;
	NSString* _type;
	SFColor* _backgroundColor;
	NSString* _title;
	NSString* _subtitle;
	NSString* _contentAdvisory;
	SFImage* _titleImage;
	NSString* _descriptionText;
	NSNumber* _rating;
	NSString* _ratingText;
	SFImage* _reviewGlyph;
	NSString* _reviewText;
	NSArray* _moreGlyphs;
	NSString* _auxiliaryTopText;
	NSString* _auxiliaryMiddleText;
	NSString* _auxiliaryBottomText;
	NSNumber* _auxiliaryAlignment;
	NSNumber* _titleWeight;
	SFImage* _imageOverlay;
	SFActionItem* _playAction;
	NSArray* _offers;
	NSString* _footnote;
	SFRichText* _richSubtitle;

}

@property (nonatomic,copy) NSArray * punchoutOptions;                                //@synthesize punchoutOptions=_punchoutOptions - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerTitle;                           //@synthesize punchoutPickerTitle=_punchoutPickerTitle - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerDismissText;                     //@synthesize punchoutPickerDismissText=_punchoutPickerDismissText - In the implementation block
@property (assign,nonatomic) BOOL canBeHidden;                                       //@synthesize canBeHidden=_canBeHidden - In the implementation block
@property (assign,nonatomic) BOOL hasTopPadding;                                     //@synthesize hasTopPadding=_hasTopPadding - In the implementation block
@property (assign,nonatomic) BOOL hasBottomPadding;                                  //@synthesize hasBottomPadding=_hasBottomPadding - In the implementation block
@property (nonatomic,copy) NSString * type;                                          //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int separatorStyle;                                     //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (nonatomic,retain) SFColor * backgroundColor;                              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) NSString * title;                                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                      //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * contentAdvisory;                               //@synthesize contentAdvisory=_contentAdvisory - In the implementation block
@property (nonatomic,retain) SFImage * titleImage;                                   //@synthesize titleImage=_titleImage - In the implementation block
@property (assign,nonatomic) BOOL isCentered;                                        //@synthesize isCentered=_isCentered - In the implementation block
@property (nonatomic,copy) NSString * descriptionText;                               //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,copy) NSNumber * rating;                                        //@synthesize rating=_rating - In the implementation block
@property (nonatomic,copy) NSString * ratingText;                                    //@synthesize ratingText=_ratingText - In the implementation block
@property (nonatomic,retain) SFImage * reviewGlyph;                                  //@synthesize reviewGlyph=_reviewGlyph - In the implementation block
@property (nonatomic,copy) NSString * reviewText;                                    //@synthesize reviewText=_reviewText - In the implementation block
@property (assign,nonatomic) BOOL reviewNewLine;                                     //@synthesize reviewNewLine=_reviewNewLine - In the implementation block
@property (nonatomic,copy) NSArray * moreGlyphs;                                     //@synthesize moreGlyphs=_moreGlyphs - In the implementation block
@property (nonatomic,copy) NSString * auxiliaryTopText;                              //@synthesize auxiliaryTopText=_auxiliaryTopText - In the implementation block
@property (nonatomic,copy) NSString * auxiliaryMiddleText;                           //@synthesize auxiliaryMiddleText=_auxiliaryMiddleText - In the implementation block
@property (nonatomic,copy) NSString * auxiliaryBottomText;                           //@synthesize auxiliaryBottomText=_auxiliaryBottomText - In the implementation block
@property (assign,nonatomic) int auxiliaryBottomTextColor;                           //@synthesize auxiliaryBottomTextColor=_auxiliaryBottomTextColor - In the implementation block
@property (nonatomic,copy) NSNumber * auxiliaryAlignment;                            //@synthesize auxiliaryAlignment=_auxiliaryAlignment - In the implementation block
@property (assign,nonatomic) BOOL hideVerticalDivider;                               //@synthesize hideVerticalDivider=_hideVerticalDivider - In the implementation block
@property (assign,nonatomic) int titleAlign;                                         //@synthesize titleAlign=_titleAlign - In the implementation block
@property (nonatomic,copy) NSNumber * titleWeight;                                   //@synthesize titleWeight=_titleWeight - In the implementation block
@property (assign,nonatomic) BOOL titleNoWrap;                                       //@synthesize titleNoWrap=_titleNoWrap - In the implementation block
@property (assign,nonatomic) BOOL thumbnailCropCircle;                               //@synthesize thumbnailCropCircle=_thumbnailCropCircle - In the implementation block
@property (nonatomic,retain) SFImage * imageOverlay;                                 //@synthesize imageOverlay=_imageOverlay - In the implementation block
@property (nonatomic,retain) SFActionItem * playAction;                              //@synthesize playAction=_playAction - In the implementation block
@property (assign,nonatomic) int playActionAlign;                                    //@synthesize playActionAlign=_playActionAlign - In the implementation block
@property (nonatomic,copy) NSArray * offers;                                         //@synthesize offers=_offers - In the implementation block
@property (nonatomic,copy) NSString * footnote;                                      //@synthesize footnote=_footnote - In the implementation block
@property (nonatomic,retain) SFRichText * richSubtitle;                              //@synthesize richSubtitle=_richSubtitle - In the implementation block
@property (assign,nonatomic) BOOL subtitleIsEmphasized;                              //@synthesize subtitleIsEmphasized=_subtitleIsEmphasized - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (assign,nonatomic) BOOL hideDivider; 
@property (nonatomic,retain) SFCard * nextCard; 
@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSArray * parameterKeyPaths; 
@property (nonatomic,copy) NSString * cardSectionId; 
@property (nonatomic,copy) NSString * resultIdentifier; 
@property (nonatomic,retain) SFUserReportRequest * userReportRequest; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)type;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(SFColor *)backgroundColor;
-(void)setBackgroundColor:(SFColor *)arg1 ;
-(NSNumber *)rating;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(void)setRating:(NSNumber *)arg1 ;
-(NSArray *)punchoutOptions;
-(void)setFootnote:(NSString *)arg1 ;
-(NSArray *)offers;
-(void)setOffers:(NSArray *)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(NSString *)footnote;
-(NSString *)reviewText;
-(void)setReviewText:(NSString *)arg1 ;
-(NSData *)jsonData;
-(SFImage *)titleImage;
-(void)setTitleImage:(SFImage *)arg1 ;
-(NSString *)contentAdvisory;
-(void)setContentAdvisory:(NSString *)arg1 ;
-(NSArray *)moreGlyphs;
-(void)setMoreGlyphs:(NSArray *)arg1 ;
-(void)setPunchoutOptions:(NSArray *)arg1 ;
-(NSString *)punchoutPickerTitle;
-(void)setPunchoutPickerTitle:(NSString *)arg1 ;
-(NSString *)punchoutPickerDismissText;
-(void)setPunchoutPickerDismissText:(NSString *)arg1 ;
-(BOOL)canBeHidden;
-(void)setCanBeHidden:(BOOL)arg1 ;
-(BOOL)hasTopPadding;
-(void)setHasTopPadding:(BOOL)arg1 ;
-(BOOL)hasBottomPadding;
-(void)setHasBottomPadding:(BOOL)arg1 ;
-(int)separatorStyle;
-(void)setSeparatorStyle:(int)arg1 ;
-(BOOL)isCentered;
-(void)setIsCentered:(BOOL)arg1 ;
-(BOOL)titleNoWrap;
-(void)setTitleNoWrap:(BOOL)arg1 ;
-(NSNumber *)titleWeight;
-(void)setTitleWeight:(NSNumber *)arg1 ;
-(BOOL)hasCanBeHidden;
-(BOOL)hasHasTopPadding;
-(BOOL)hasHasBottomPadding;
-(BOOL)hasSeparatorStyle;
-(BOOL)hasTitleNoWrap;
-(SFActionItem *)playAction;
-(void)setPlayAction:(SFActionItem *)arg1 ;
-(SFImage *)reviewGlyph;
-(void)setReviewGlyph:(SFImage *)arg1 ;
-(BOOL)hasIsCentered;
-(void)setRatingText:(NSString *)arg1 ;
-(void)setReviewNewLine:(BOOL)arg1 ;
-(void)setAuxiliaryTopText:(NSString *)arg1 ;
-(void)setAuxiliaryMiddleText:(NSString *)arg1 ;
-(void)setAuxiliaryBottomText:(NSString *)arg1 ;
-(void)setAuxiliaryBottomTextColor:(int)arg1 ;
-(void)setAuxiliaryAlignment:(NSNumber *)arg1 ;
-(void)setHideVerticalDivider:(BOOL)arg1 ;
-(void)setTitleAlign:(int)arg1 ;
-(void)setThumbnailCropCircle:(BOOL)arg1 ;
-(void)setImageOverlay:(SFImage *)arg1 ;
-(void)setPlayActionAlign:(int)arg1 ;
-(void)setRichSubtitle:(SFRichText *)arg1 ;
-(void)setSubtitleIsEmphasized:(BOOL)arg1 ;
-(NSString *)ratingText;
-(BOOL)reviewNewLine;
-(NSString *)auxiliaryTopText;
-(NSString *)auxiliaryMiddleText;
-(NSString *)auxiliaryBottomText;
-(int)auxiliaryBottomTextColor;
-(NSNumber *)auxiliaryAlignment;
-(BOOL)hideVerticalDivider;
-(int)titleAlign;
-(BOOL)thumbnailCropCircle;
-(SFImage *)imageOverlay;
-(int)playActionAlign;
-(SFRichText *)richSubtitle;
-(BOOL)subtitleIsEmphasized;
-(BOOL)hasReviewNewLine;
-(BOOL)hasAuxiliaryBottomTextColor;
-(BOOL)hasHideVerticalDivider;
-(BOOL)hasTitleAlign;
-(BOOL)hasThumbnailCropCircle;
-(BOOL)hasPlayActionAlign;
-(BOOL)hasSubtitleIsEmphasized;
@end

