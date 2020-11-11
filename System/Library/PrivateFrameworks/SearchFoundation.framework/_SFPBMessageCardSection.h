/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:29 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBMessageCardSection.h>
@class NSArray, NSString, _SFPBColor, _SFPBURL, _SFPBMessageAttachment, NSData;


@protocol _SFPBMessageCardSection <NSObject>
@property (nonatomic,copy) NSArray * punchoutOptions; 
@property (nonatomic,copy) NSString * punchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText; 
@property (assign,nonatomic) BOOL canBeHidden; 
@property (assign,nonatomic) BOOL hasTopPadding; 
@property (assign,nonatomic) BOOL hasBottomPadding; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) int separatorStyle; 
@property (nonatomic,retain) _SFPBColor * backgroundColor; 
@property (nonatomic,copy) NSString * messageText; 
@property (assign,nonatomic) int messageStatus; 
@property (assign,nonatomic) int messageServiceType; 
@property (nonatomic,retain) _SFPBURL * audioMessageURL; 
@property (nonatomic,retain) _SFPBMessageAttachment * messageAttachment; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setType:(id)arg1;
-(NSString *)type;
-(id)initWithDictionary:(id)arg1;
-(_SFPBColor *)backgroundColor;
-(void)setBackgroundColor:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(NSArray *)punchoutOptions;
-(_SFPBURL *)audioMessageURL;
-(void)setAudioMessageURL:(id)arg1;
-(NSData *)jsonData;
-(NSString *)messageText;
-(void)setMessageText:(id)arg1;
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
-(void)addPunchoutOptions:(id)arg1;
-(void)clearPunchoutOptions;
-(unsigned long long)punchoutOptionsCount;
-(id)punchoutOptionsAtIndex:(unsigned long long)arg1;
-(void)setMessageStatus:(int)arg1;
-(void)setMessageServiceType:(int)arg1;
-(void)setMessageAttachment:(id)arg1;
-(int)messageStatus;
-(int)messageServiceType;
-(_SFPBMessageAttachment *)messageAttachment;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, _SFPBColor, _SFPBURL, _SFPBMessageAttachment, NSData;

@interface _SFPBMessageCardSection : PBCodable <_SFPBMessageCardSection, NSSecureCoding> {

	BOOL _canBeHidden;
	BOOL _hasTopPadding;
	BOOL _hasBottomPadding;
	int _separatorStyle;
	int _messageStatus;
	int _messageServiceType;
	NSArray* _punchoutOptions;
	NSString* _punchoutPickerTitle;
	NSString* _punchoutPickerDismissText;
	NSString* _type;
	_SFPBColor* _backgroundColor;
	NSString* _messageText;
	_SFPBURL* _audioMessageURL;
	_SFPBMessageAttachment* _messageAttachment;

}

@property (nonatomic,copy) NSArray * punchoutOptions;                                 //@synthesize punchoutOptions=_punchoutOptions - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerTitle;                            //@synthesize punchoutPickerTitle=_punchoutPickerTitle - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerDismissText;                      //@synthesize punchoutPickerDismissText=_punchoutPickerDismissText - In the implementation block
@property (assign,nonatomic) BOOL canBeHidden;                                        //@synthesize canBeHidden=_canBeHidden - In the implementation block
@property (assign,nonatomic) BOOL hasTopPadding;                                      //@synthesize hasTopPadding=_hasTopPadding - In the implementation block
@property (assign,nonatomic) BOOL hasBottomPadding;                                   //@synthesize hasBottomPadding=_hasBottomPadding - In the implementation block
@property (nonatomic,copy) NSString * type;                                           //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int separatorStyle;                                      //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (nonatomic,retain) _SFPBColor * backgroundColor;                            //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) NSString * messageText;                                    //@synthesize messageText=_messageText - In the implementation block
@property (assign,nonatomic) int messageStatus;                                       //@synthesize messageStatus=_messageStatus - In the implementation block
@property (assign,nonatomic) int messageServiceType;                                  //@synthesize messageServiceType=_messageServiceType - In the implementation block
@property (nonatomic,retain) _SFPBURL * audioMessageURL;                              //@synthesize audioMessageURL=_audioMessageURL - In the implementation block
@property (nonatomic,retain) _SFPBMessageAttachment * messageAttachment;              //@synthesize messageAttachment=_messageAttachment - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(_SFPBColor *)backgroundColor;
-(void)setBackgroundColor:(_SFPBColor *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSArray *)punchoutOptions;
-(_SFPBURL *)audioMessageURL;
-(void)setAudioMessageURL:(_SFPBURL *)arg1 ;
-(NSData *)jsonData;
-(NSString *)messageText;
-(void)setMessageText:(NSString *)arg1 ;
-(id)initWithFacade:(id)arg1 ;
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
-(void)addPunchoutOptions:(id)arg1 ;
-(void)clearPunchoutOptions;
-(unsigned long long)punchoutOptionsCount;
-(id)punchoutOptionsAtIndex:(unsigned long long)arg1 ;
-(void)setMessageStatus:(int)arg1 ;
-(void)setMessageServiceType:(int)arg1 ;
-(void)setMessageAttachment:(_SFPBMessageAttachment *)arg1 ;
-(int)messageStatus;
-(int)messageServiceType;
-(_SFPBMessageAttachment *)messageAttachment;
@end

