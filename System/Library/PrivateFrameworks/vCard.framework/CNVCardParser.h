/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:13 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CNVCardParsedResultBuilder;
@class CNVCardReadingOptions, CNVCardLexer, NSData, CNVCardDateComponentsParser, CNVCardSelectorMap, CNVCardMutableNameComponents, NSDateComponents, NSMutableArray, NSMutableString, NSMutableDictionary, NSString, NSArray;

@interface CNVCardParser : NSObject {

	CNVCardReadingOptions* _options;
	CNVCardLexer* _lexer;
	NSData* _data;
	unsigned long long _defaultEncoding;
	BOOL _hasImportErrors;
	CNVCardDateComponentsParser* _dateComponentsParser;
	CNVCardSelectorMap* _parsingSelectorMap;
	CNVCardSelectorMap* _parameterSelectorMap;
	id<CNVCardParsedResultBuilder> _resultBuilder;
	BOOL _30vCard;
	CNVCardMutableNameComponents* _nameComponents;
	NSDateComponents* _bday;
	NSDateComponents* _altBday;
	NSMutableArray* _emails;
	NSMutableArray* _dateComponents;
	NSMutableArray* _phones;
	NSMutableArray* _addresses;
	NSMutableArray* _relatedNames;
	NSMutableArray* _urls;
	NSMutableArray* _calendarURIs;
	NSMutableString* _notes;
	NSMutableDictionary* _extensions;
	NSMutableArray* _unknowns;
	NSString* _uid;
	NSString* _carddavUID;
	NSMutableArray* _instantMessagingAddresses;
	NSMutableArray* _socialProfiles;
	NSMutableDictionary* _activityAlerts;
	NSMutableArray* _cropRects;
	BOOL _fullNameHasZeroLength;
	NSData* _imageData;
	NSString* _imageGroup;
	NSString* _imageReference;
	unsigned long long _startingPositionOfCurrentProperty;
	NSArray* _itemParameters;
	NSString* _grouping;
	unsigned long long _encoding;
	BOOL _quotedPrintable;
	BOOL _base64;

}

@property (nonatomic,readonly) CNVCardReadingOptions * options;                           //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) id<CNVCardParsedResultBuilder> resultBuilder;              //@synthesize resultBuilder=_resultBuilder - In the implementation block
@property (nonatomic,copy) NSData * imageData;                                            //@synthesize imageData=_imageData - In the implementation block
+(BOOL)parseFirstResultInData:(id)arg1 resultBuilder:(id)arg2 ;
+(unsigned long long)inferredStringEncodingFromData:(id)arg1 ;
+(id)newParsingSelectorMap;
+(id)newParameterSelectorMap;
+(id)parseData:(id)arg1 options:(id)arg2 resultFactory:(id)arg3 ;
+(unsigned long long)countOfCardsInData:(id)arg1 ;
+(id)parseData:(id)arg1 resultFactory:(id)arg2 ;
-(id)initWithData:(id)arg1 ;
-(CNVCardReadingOptions *)options;
-(NSData *)imageData;
-(id)initWithData:(id)arg1 options:(id)arg2 ;
-(long long)currentPosition;
-(id)nextBase64Data;
-(BOOL)atEOF;
-(void)cleanUpCardState;
-(id)phoneLabel;
-(id)parseRemainingLine;
-(void)setImageData:(NSData *)arg1 ;
-(BOOL)hasImportErrors;
-(BOOL)parseNextResultUsingResultBuilder:(id)arg1 ;
-(BOOL)parse_ADD;
-(BOOL)parse_ADR;
-(BOOL)parse_BDAY;
-(BOOL)parse_CALURI;
-(BOOL)parse_EMAIL;
-(BOOL)parse_FN;
-(BOOL)parse_IMPP;
-(BOOL)parse_N;
-(BOOL)parse_NICKNAME;
-(BOOL)parse_NOTE;
-(BOOL)parse_ORG;
-(BOOL)parse_X_PHONETIC_ORG;
-(BOOL)parse_PHOTO;
-(BOOL)parse_PRODID;
-(BOOL)parse_REV;
-(BOOL)parse_TEL;
-(BOOL)parse_TITLE;
-(BOOL)parse_UID;
-(BOOL)parse_URL;
-(BOOL)parse_VERSION;
-(BOOL)parse_X_ABADR;
-(BOOL)parse_X_ABDATE;
-(BOOL)parse_X_ABLABEL;
-(BOOL)parse_X_ABORDER;
-(BOOL)parse_X_ABPHOTO;
-(BOOL)parse_X_AIM;
-(BOOL)parse_X_AIM_ID;
-(BOOL)parse_X_ABRELATEDNAMES;
-(BOOL)parse_X_ABSHOWAS;
-(BOOL)parse_X_ABUID;
-(BOOL)parse_X_ACTIVITY_ALERT;
-(BOOL)parse_X_ALTBDAY;
-(BOOL)parse_X_APPLE_SUBADMINISTRATIVEAREA;
-(BOOL)parse_X_APPLE_SUBLOCALITY;
-(BOOL)parse_X_GOOGLE_ID;
-(BOOL)parse_X_GOOGLE_TALK;
-(BOOL)parse_X_GTALK;
-(BOOL)parse_X_ICQ;
-(BOOL)parse_X_ICQ_ID;
-(BOOL)parse_X_IMAGEHASH;
-(BOOL)parse_X_IMAGETYPE;
-(BOOL)parse_X_JABBER;
-(BOOL)parse_X_JABBER_ID;
-(BOOL)parse_X_MAIDENNAME;
-(BOOL)parse_X_MSN;
-(BOOL)parse_X_MSN_ID;
-(BOOL)parse_X_PHONETIC_FIRST_NAME;
-(BOOL)parse_X_PHONETIC_LAST_NAME;
-(BOOL)parse_X_PHONETIC_MIDDLE_NAME;
-(BOOL)parse_X_PRONUNCIATION_FIRST_NAME;
-(BOOL)parse_X_PRONUNCIATION_LAST_NAME;
-(BOOL)parse_X_QQ;
-(BOOL)parse_X_QQ_ID;
-(BOOL)parse_X_SKYPE;
-(BOOL)parse_X_SKYPE_ID;
-(BOOL)parse_X_SKYPE_USERNAME;
-(BOOL)parse_X_SOCIALPROFILE;
-(BOOL)parse_X_YAHOO;
-(BOOL)parse_X_YAHOO_ID;
-(BOOL)parse_X_ADDRESSBOOKSERVER_PHONEME_DATA;
-(BOOL)parse_X_APPLE_LIKENESS_SERVICE_IDENTIFIER;
-(BOOL)parse_X_APPLE_LIKENESS_SOURCE;
-(BOOL)parse_X_APPLE_GUARDIAN_WHITELISTED;
-(void)parameter_QUOTED_PRINTABLE:(id)arg1 ;
-(void)parameter_BASE64:(id)arg1 ;
-(void)parameter_CHARSET:(id)arg1 ;
-(void)parameter_ENCODING:(id)arg1 ;
-(id)nextResultWithFactory:(id)arg1 progressLength:(long long*)arg2 ;
-(id)pool_nextResultWithFactory:(id)arg1 progressLength:(long long*)arg2 ;
-(BOOL)parseLine;
-(void)reportValues;
-(id)parseParameters;
-(SEL)parsingSelectorForTag:(id)arg1 ;
-(BOOL)parseValueUsingSelector:(SEL)arg1 ;
-(id)parseUnknownValueStartingAtPosition:(unsigned long long)arg1 ;
-(id)makeLineWithValue:(id)arg1 forProperty:(id)arg2 ;
-(BOOL)advancePastSemicolon;
-(id)parseStringValue;
-(BOOL)parseInstantMessageValueWithService:(id)arg1 ;
-(void)reportValue:(id)arg1 forProperty:(id)arg2 ;
-(id<CNVCardParsedResultBuilder>)resultBuilder;
-(BOOL)parseExtension:(id)arg1 ;
-(id)parseArrayValue;
-(id)firstValueForKey:(id)arg1 inExtension:(id)arg2 ;
-(id)firstParameterWithName:(id)arg1 ;
-(id)parameterValuesForName:(id)arg1 ;
-(id)genericLabelForProperty:(id)arg1 ;
-(id)makeLineWithLabel:(id)arg1 value:(id)arg2 ;
-(id)nextParameterInCurrentLine;
-(SEL)handlerSelectorForParameterName:(id)arg1 ;
-(id)parseParameterValues;
-(void)processNameValues;
-(void)processExtensionValues;
-(void)reportMultiValueLines:(id)arg1 forProperty:(id)arg2 ;
-(id)validCountryCodes;
-(BOOL)valueIsEmpty:(id)arg1 ;
-(id)firstValueForKey:(id)arg1 inExtensionGroup:(id)arg2 ;
-(id)fallbackLabelForProperty:(id)arg1 ;
-(id)typeParameters;
-(id)firstCustomLabelForProperty:(id)arg1 types:(id)arg2 ;
-(id)resultsWithFactory:(id)arg1 ;
-(id)firstValueForParameterWithName:(id)arg1 ;
-(id)unparsedStringForCurrentProperty;
-(id)parseBase64Data;
@end

