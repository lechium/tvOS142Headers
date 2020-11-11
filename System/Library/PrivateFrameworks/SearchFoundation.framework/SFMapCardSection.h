/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:30 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFCardSection.h>
#import <libobjc.A.dylib/SFMapCardSection.h>
@class NSArray, NSString, SFColor, SFLatLng, SFMapRegion, NSDictionary, NSData;


@protocol SFMapCardSection <SFCardSection>
@property (nonatomic,copy) NSArray * punchoutOptions; 
@property (nonatomic,copy) NSString * punchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText; 
@property (assign,nonatomic) BOOL canBeHidden; 
@property (assign,nonatomic) BOOL hasTopPadding; 
@property (assign,nonatomic) BOOL hasBottomPadding; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) int separatorStyle; 
@property (nonatomic,retain) SFColor * backgroundColor; 
@property (nonatomic,retain) SFLatLng * location; 
@property (nonatomic,retain) SFColor * pinColor; 
@property (nonatomic,copy) NSString * footnoteLabel; 
@property (nonatomic,copy) NSString * footnote; 
@property (assign,nonatomic) BOOL interactive; 
@property (assign,nonatomic) int sizeFormat; 
@property (nonatomic,retain) SFMapRegion * boundingMapRegion; 
@property (assign,nonatomic) int pinBehavior; 
@property (nonatomic,copy) NSArray * pins; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setType:(id)arg1;
-(NSString *)type;
-(NSDictionary *)dictionaryRepresentation;
-(SFLatLng *)location;
-(SFColor *)backgroundColor;
-(void)setBackgroundColor:(id)arg1;
-(void)setLocation:(id)arg1;
-(SFMapRegion *)boundingMapRegion;
-(void)setBoundingMapRegion:(id)arg1;
-(NSArray *)punchoutOptions;
-(void)setFootnote:(id)arg1;
-(BOOL)interactive;
-(void)setInteractive:(BOOL)arg1;
-(NSString *)footnote;
-(NSData *)jsonData;
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
-(SFColor *)pinColor;
-(void)setPinColor:(id)arg1;
-(int)pinBehavior;
-(void)setPinBehavior:(int)arg1;
-(NSString *)footnoteLabel;
-(void)setFootnoteLabel:(id)arg1;
-(int)sizeFormat;
-(void)setSizeFormat:(int)arg1;
-(NSArray *)pins;
-(void)setPins:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, SFColor, SFLatLng, SFMapRegion, NSDictionary, NSData, SFCard, SFUserReportRequest;

@interface SFMapCardSection : SFCardSection <SFMapCardSection, NSSecureCoding, NSCopying> {

	SCD_Struct_SF8 _has;
	BOOL _canBeHidden;
	BOOL _hasTopPadding;
	BOOL _hasBottomPadding;
	BOOL _interactive;
	int _separatorStyle;
	int _sizeFormat;
	int _pinBehavior;
	NSArray* _punchoutOptions;
	NSString* _punchoutPickerTitle;
	NSString* _punchoutPickerDismissText;
	NSString* _type;
	SFColor* _backgroundColor;
	SFLatLng* _location;
	SFColor* _pinColor;
	NSString* _footnoteLabel;
	NSString* _footnote;
	SFMapRegion* _boundingMapRegion;
	NSArray* _pins;

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
@property (nonatomic,retain) SFLatLng * location;                                    //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) SFColor * pinColor;                                     //@synthesize pinColor=_pinColor - In the implementation block
@property (nonatomic,copy) NSString * footnoteLabel;                                 //@synthesize footnoteLabel=_footnoteLabel - In the implementation block
@property (nonatomic,copy) NSString * footnote;                                      //@synthesize footnote=_footnote - In the implementation block
@property (assign,nonatomic) BOOL interactive;                                       //@synthesize interactive=_interactive - In the implementation block
@property (assign,nonatomic) int sizeFormat;                                         //@synthesize sizeFormat=_sizeFormat - In the implementation block
@property (nonatomic,retain) SFMapRegion * boundingMapRegion;                        //@synthesize boundingMapRegion=_boundingMapRegion - In the implementation block
@property (assign,nonatomic) int pinBehavior;                                        //@synthesize pinBehavior=_pinBehavior - In the implementation block
@property (nonatomic,copy) NSArray * pins;                                           //@synthesize pins=_pins - In the implementation block
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
-(SFLatLng *)location;
-(SFColor *)backgroundColor;
-(void)setBackgroundColor:(SFColor *)arg1 ;
-(void)setLocation:(SFLatLng *)arg1 ;
-(SFMapRegion *)boundingMapRegion;
-(void)setBoundingMapRegion:(SFMapRegion *)arg1 ;
-(NSArray *)punchoutOptions;
-(void)setFootnote:(NSString *)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(BOOL)interactive;
-(void)setInteractive:(BOOL)arg1 ;
-(NSString *)footnote;
-(NSData *)jsonData;
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
-(BOOL)hasCanBeHidden;
-(BOOL)hasHasTopPadding;
-(BOOL)hasHasBottomPadding;
-(BOOL)hasSeparatorStyle;
-(SFColor *)pinColor;
-(void)setPinColor:(SFColor *)arg1 ;
-(int)pinBehavior;
-(void)setPinBehavior:(int)arg1 ;
-(NSString *)footnoteLabel;
-(void)setFootnoteLabel:(NSString *)arg1 ;
-(int)sizeFormat;
-(void)setSizeFormat:(int)arg1 ;
-(NSArray *)pins;
-(void)setPins:(NSArray *)arg1 ;
-(BOOL)hasInteractive;
-(BOOL)hasSizeFormat;
-(BOOL)hasPinBehavior;
@end

