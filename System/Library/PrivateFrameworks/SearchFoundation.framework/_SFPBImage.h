/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:28 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBImage.h>
@class NSData, _SFPBGraphicalFloat, _SFPBPointSize, NSString, _SFPBURLImage, _SFPBContactImage, _SFPBMonogramImage, _SFPBLocalImage, _SFPBAppIconImage, _SFPBMediaArtworkImage, _SFPBCalendarImage, _SFPBSymbolImage;


@protocol _SFPBImage <NSObject>
@property (copy) NSData * imageData; 
@property (assign,nonatomic) BOOL isTemplate; 
@property (assign,nonatomic) BOOL shouldCropToCircle; 
@property (nonatomic,retain) _SFPBGraphicalFloat * cornerRadius; 
@property (nonatomic,retain) _SFPBGraphicalFloat * scale; 
@property (nonatomic,retain) _SFPBPointSize * size; 
@property (nonatomic,copy) NSString * contentType; 
@property (nonatomic,copy) NSString * keyColor; 
@property (nonatomic,copy) NSString * identifier; 
@property (assign,nonatomic) int source; 
@property (assign,nonatomic) int cornerRoundingStyle; 
@property (assign,nonatomic) int type; 
@property (nonatomic,retain) _SFPBURLImage * urlImage; 
@property (nonatomic,retain) _SFPBContactImage * contactImage; 
@property (nonatomic,retain) _SFPBMonogramImage * monogramImage; 
@property (nonatomic,retain) _SFPBLocalImage * localImage; 
@property (nonatomic,retain) _SFPBAppIconImage * appIconImage; 
@property (nonatomic,retain) _SFPBMediaArtworkImage * mediaArtworkImage; 
@property (nonatomic,retain) _SFPBCalendarImage * calendarImage; 
@property (nonatomic,retain) _SFPBSymbolImage * symbolImage; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(_SFPBPointSize *)size;
-(void)setType:(int)arg1;
-(int)type;
-(id)initWithDictionary:(id)arg1;
-(NSString *)identifier;
-(int)source;
-(void)setSource:(int)arg1;
-(void)setIdentifier:(id)arg1;
-(_SFPBGraphicalFloat *)scale;
-(NSString *)contentType;
-(void)setContentType:(id)arg1;
-(void)setScale:(id)arg1;
-(void)setSize:(id)arg1;
-(NSData *)imageData;
-(BOOL)isTemplate;
-(_SFPBGraphicalFloat *)cornerRadius;
-(void)setCornerRadius:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(void)setIsTemplate:(BOOL)arg1;
-(void)setImageData:(id)arg1;
-(NSData *)jsonData;
-(BOOL)shouldCropToCircle;
-(void)setShouldCropToCircle:(BOOL)arg1;
-(NSString *)keyColor;
-(void)setKeyColor:(id)arg1;
-(int)cornerRoundingStyle;
-(void)setCornerRoundingStyle:(int)arg1;
-(void)setUrlImage:(id)arg1;
-(void)setContactImage:(id)arg1;
-(void)setMonogramImage:(id)arg1;
-(void)setLocalImage:(id)arg1;
-(void)setAppIconImage:(id)arg1;
-(void)setMediaArtworkImage:(id)arg1;
-(void)setCalendarImage:(id)arg1;
-(void)setSymbolImage:(id)arg1;
-(_SFPBURLImage *)urlImage;
-(_SFPBContactImage *)contactImage;
-(_SFPBMonogramImage *)monogramImage;
-(_SFPBLocalImage *)localImage;
-(_SFPBAppIconImage *)appIconImage;
-(_SFPBMediaArtworkImage *)mediaArtworkImage;
-(_SFPBCalendarImage *)calendarImage;
-(_SFPBSymbolImage *)symbolImage;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, _SFPBGraphicalFloat, _SFPBPointSize, NSString, _SFPBURLImage, _SFPBContactImage, _SFPBMonogramImage, _SFPBLocalImage, _SFPBAppIconImage, _SFPBMediaArtworkImage, _SFPBCalendarImage, _SFPBSymbolImage;

@interface _SFPBImage : PBCodable <_SFPBImage, NSSecureCoding> {

	BOOL _isTemplate;
	BOOL _shouldCropToCircle;
	int _source;
	int _cornerRoundingStyle;
	int _type;
	NSData* _imageData;
	_SFPBGraphicalFloat* _cornerRadius;
	_SFPBGraphicalFloat* _scale;
	_SFPBPointSize* _size;
	NSString* _contentType;
	NSString* _keyColor;
	NSString* _identifier;
	_SFPBURLImage* _urlImage;
	_SFPBContactImage* _contactImage;
	_SFPBMonogramImage* _monogramImage;
	_SFPBLocalImage* _localImage;
	_SFPBAppIconImage* _appIconImage;
	_SFPBMediaArtworkImage* _mediaArtworkImage;
	_SFPBCalendarImage* _calendarImage;
	_SFPBSymbolImage* _symbolImage;

}

@property (copy) NSData * imageData;                                                  //@synthesize imageData=_imageData - In the implementation block
@property (assign,nonatomic) BOOL isTemplate;                                         //@synthesize isTemplate=_isTemplate - In the implementation block
@property (assign,nonatomic) BOOL shouldCropToCircle;                                 //@synthesize shouldCropToCircle=_shouldCropToCircle - In the implementation block
@property (nonatomic,retain) _SFPBGraphicalFloat * cornerRadius;                      //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,retain) _SFPBGraphicalFloat * scale;                             //@synthesize scale=_scale - In the implementation block
@property (nonatomic,retain) _SFPBPointSize * size;                                   //@synthesize size=_size - In the implementation block
@property (nonatomic,copy) NSString * contentType;                                    //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,copy) NSString * keyColor;                                       //@synthesize keyColor=_keyColor - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) int source;                                              //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) int cornerRoundingStyle;                                 //@synthesize cornerRoundingStyle=_cornerRoundingStyle - In the implementation block
@property (assign,nonatomic) int type;                                                //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) _SFPBURLImage * urlImage;                                //@synthesize urlImage=_urlImage - In the implementation block
@property (nonatomic,retain) _SFPBContactImage * contactImage;                        //@synthesize contactImage=_contactImage - In the implementation block
@property (nonatomic,retain) _SFPBMonogramImage * monogramImage;                      //@synthesize monogramImage=_monogramImage - In the implementation block
@property (nonatomic,retain) _SFPBLocalImage * localImage;                            //@synthesize localImage=_localImage - In the implementation block
@property (nonatomic,retain) _SFPBAppIconImage * appIconImage;                        //@synthesize appIconImage=_appIconImage - In the implementation block
@property (nonatomic,retain) _SFPBMediaArtworkImage * mediaArtworkImage;              //@synthesize mediaArtworkImage=_mediaArtworkImage - In the implementation block
@property (nonatomic,retain) _SFPBCalendarImage * calendarImage;                      //@synthesize calendarImage=_calendarImage - In the implementation block
@property (nonatomic,retain) _SFPBSymbolImage * symbolImage;                          //@synthesize symbolImage=_symbolImage - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(_SFPBPointSize *)size;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(int)source;
-(void)setSource:(int)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(_SFPBGraphicalFloat *)scale;
-(NSString *)contentType;
-(void)setContentType:(NSString *)arg1 ;
-(void)setScale:(_SFPBGraphicalFloat *)arg1 ;
-(void)setSize:(_SFPBPointSize *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSData *)imageData;
-(BOOL)isTemplate;
-(_SFPBGraphicalFloat *)cornerRadius;
-(void)setCornerRadius:(_SFPBGraphicalFloat *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setIsTemplate:(BOOL)arg1 ;
-(void)setImageData:(NSData *)arg1 ;
-(NSData *)jsonData;
-(id)initWithFacade:(id)arg1 ;
-(BOOL)shouldCropToCircle;
-(void)setShouldCropToCircle:(BOOL)arg1 ;
-(NSString *)keyColor;
-(void)setKeyColor:(NSString *)arg1 ;
-(int)cornerRoundingStyle;
-(void)setCornerRoundingStyle:(int)arg1 ;
-(void)setUrlImage:(_SFPBURLImage *)arg1 ;
-(void)setContactImage:(_SFPBContactImage *)arg1 ;
-(void)setMonogramImage:(_SFPBMonogramImage *)arg1 ;
-(void)setLocalImage:(_SFPBLocalImage *)arg1 ;
-(void)setAppIconImage:(_SFPBAppIconImage *)arg1 ;
-(void)setMediaArtworkImage:(_SFPBMediaArtworkImage *)arg1 ;
-(void)setCalendarImage:(_SFPBCalendarImage *)arg1 ;
-(void)setSymbolImage:(_SFPBSymbolImage *)arg1 ;
-(_SFPBURLImage *)urlImage;
-(_SFPBContactImage *)contactImage;
-(_SFPBMonogramImage *)monogramImage;
-(_SFPBLocalImage *)localImage;
-(_SFPBAppIconImage *)appIconImage;
-(_SFPBMediaArtworkImage *)mediaArtworkImage;
-(_SFPBCalendarImage *)calendarImage;
-(_SFPBSymbolImage *)symbolImage;
@end

