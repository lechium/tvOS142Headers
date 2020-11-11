/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:16 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/WFPythonHTMLParserDelegate.h>

@class NSURL, WFPythonHTMLParser, NSDictionary, NSMutableArray, NSString, NSMutableOrderedSet;

@interface WFHTMLToMarkdown : NSObject <WFPythonHTMLParserDelegate> {

	BOOL _unicodeSnob;
	BOOL _escapeSnob;
	BOOL _linksEachParagraph;
	BOOL _skipInternalLinks;
	BOOL _inlineLinks;
	BOOL _ignoreLinks;
	BOOL _ignoreImages;
	BOOL _ignoreEmphasis;
	BOOL _start;
	BOOL _space;
	BOOL _pre;
	BOOL _startpre;
	BOOL _code;
	BOOL _lastWasNewline;
	BOOL _lastWasList;
	NSURL* _baseURL;
	long long _bodyWidth;
	WFPythonHTMLParser* _parser;
	NSDictionary* _nameToCodepointMapping;
	NSDictionary* _unifiableN;
	NSMutableArray* _outTextList;
	NSString* _outText;
	long long _quiet;
	long long _p_p;
	long long _outCount;
	NSMutableArray* _a;
	NSMutableArray* _aStack;
	NSString* _maybeAutomaticLink;
	long long _aCount;
	NSMutableArray* _list;
	long long _blockquote;
	long long _style;
	NSString* _abbreviationTitle;
	NSString* _abbreviationData;
	NSMutableOrderedSet* _abbreviationList;
	NSString* _ulItemMark;
	NSString* _emphasisMark;
	NSString* _strongMark;

}

@property (nonatomic,retain) WFPythonHTMLParser * parser;                         //@synthesize parser=_parser - In the implementation block
@property (nonatomic,retain) NSDictionary * nameToCodepointMapping;               //@synthesize nameToCodepointMapping=_nameToCodepointMapping - In the implementation block
@property (nonatomic,retain) NSDictionary * unifiableN;                           //@synthesize unifiableN=_unifiableN - In the implementation block
@property (nonatomic,retain) NSMutableArray * outTextList;                        //@synthesize outTextList=_outTextList - In the implementation block
@property (nonatomic,copy) NSString * outText;                                    //@synthesize outText=_outText - In the implementation block
@property (assign,nonatomic) long long quiet;                                     //@synthesize quiet=_quiet - In the implementation block
@property (assign,nonatomic) long long p_p;                                       //@synthesize p_p=_p_p - In the implementation block
@property (assign,nonatomic) long long outCount;                                  //@synthesize outCount=_outCount - In the implementation block
@property (assign,nonatomic) BOOL start;                                          //@synthesize start=_start - In the implementation block
@property (assign,nonatomic) BOOL space;                                          //@synthesize space=_space - In the implementation block
@property (a,nonatomic,retain) NSMutableArray * a;                                //@synthesize a=_a - In the implementation block
@property (nonatomic,retain) NSMutableArray * aStack;                             //@synthesize aStack=_aStack - In the implementation block
@property (nonatomic,copy) NSString * maybeAutomaticLink;                         //@synthesize maybeAutomaticLink=_maybeAutomaticLink - In the implementation block
@property (assign,nonatomic) long long aCount;                                    //@synthesize aCount=_aCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * list;                               //@synthesize list=_list - In the implementation block
@property (assign,nonatomic) long long blockquote;                                //@synthesize blockquote=_blockquote - In the implementation block
@property (assign,nonatomic) BOOL pre;                                            //@synthesize pre=_pre - In the implementation block
@property (assign,nonatomic) BOOL startpre;                                       //@synthesize startpre=_startpre - In the implementation block
@property (assign,nonatomic) BOOL code;                                           //@synthesize code=_code - In the implementation block
@property (assign,nonatomic) BOOL lastWasNewline;                                 //@synthesize lastWasNewline=_lastWasNewline - In the implementation block
@property (assign,nonatomic) BOOL lastWasList;                                    //@synthesize lastWasList=_lastWasList - In the implementation block
@property (assign,nonatomic) long long style;                                     //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSString * abbreviationTitle;                          //@synthesize abbreviationTitle=_abbreviationTitle - In the implementation block
@property (nonatomic,copy) NSString * abbreviationData;                           //@synthesize abbreviationData=_abbreviationData - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * abbreviationList;              //@synthesize abbreviationList=_abbreviationList - In the implementation block
@property (nonatomic,copy) NSString * ulItemMark;                                 //@synthesize ulItemMark=_ulItemMark - In the implementation block
@property (nonatomic,copy) NSString * emphasisMark;                               //@synthesize emphasisMark=_emphasisMark - In the implementation block
@property (nonatomic,copy) NSString * strongMark;                                 //@synthesize strongMark=_strongMark - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                                     //@synthesize baseURL=_baseURL - In the implementation block
@property (assign,nonatomic) BOOL unicodeSnob;                                    //@synthesize unicodeSnob=_unicodeSnob - In the implementation block
@property (assign,nonatomic) BOOL escapeSnob;                                     //@synthesize escapeSnob=_escapeSnob - In the implementation block
@property (assign,nonatomic) BOOL linksEachParagraph;                             //@synthesize linksEachParagraph=_linksEachParagraph - In the implementation block
@property (assign,nonatomic) long long bodyWidth;                                 //@synthesize bodyWidth=_bodyWidth - In the implementation block
@property (assign,nonatomic) BOOL skipInternalLinks;                              //@synthesize skipInternalLinks=_skipInternalLinks - In the implementation block
@property (assign,nonatomic) BOOL inlineLinks;                                    //@synthesize inlineLinks=_inlineLinks - In the implementation block
@property (assign,nonatomic) BOOL ignoreLinks;                                    //@synthesize ignoreLinks=_ignoreLinks - In the implementation block
@property (assign,nonatomic) BOOL ignoreImages;                                   //@synthesize ignoreImages=_ignoreImages - In the implementation block
@property (assign,nonatomic) BOOL ignoreEmphasis;                                 //@synthesize ignoreEmphasis=_ignoreEmphasis - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)code;
-(void)close;
-(NSURL *)baseURL;
-(BOOL)space;
-(BOOL)start;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(NSMutableArray *)list;
-(void)p;
-(void)setCode:(BOOL)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
-(WFPythonHTMLParser *)parser;
-(void)setA:(NSMutableArray *)arg1 ;
-(NSMutableArray *)a;
-(void)setStart:(BOOL)arg1 ;
-(void)addOutput:(id)arg1 ;
-(id)initWithBaseURL:(id)arg1 ;
-(void)output:(id)arg1 ;
-(void)setParser:(WFPythonHTMLParser *)arg1 ;
-(id)handleHTML:(id)arg1 ;
-(void)parser:(id)arg1 foundStartTag:(id)arg2 attributes:(id)arg3 ;
-(void)parser:(id)arg1 foundData:(id)arg2 ;
-(void)parser:(id)arg1 foundEndTag:(id)arg2 ;
-(void)parser:(id)arg1 foundEntityRef:(id)arg2 ;
-(void)parser:(id)arg1 foundCharacterRef:(id)arg2 ;
-(BOOL)skipwrap:(id)arg1 ;
-(id)wrapText:(id)arg1 toWidth:(long long)arg2 ;
-(BOOL)onlywhite:(id)arg1 ;
-(id)optwrap:(id)arg1 ;
-(id)charref:(id)arg1 ;
-(id)entityref:(id)arg1 ;
-(id)previousIndex:(id)arg1 ;
-(int)tagHeaderNumber:(id)arg1 ;
-(id)escapeMD:(id)arg1 ;
-(id)escapeMDSection:(id)arg1 snob:(BOOL)arg2 ;
-(void)handleTag:(id)arg1 attributes:(id)arg2 start:(BOOL)arg3 ;
-(void)pbr;
-(void)output:(id)arg1 pureData:(BOOL)arg2 force:(id)arg3 ;
-(NSDictionary *)nameToCodepointMapping;
-(unsigned short)nameToCodepoint:(id)arg1 ;
-(id)unifiable;
-(NSDictionary *)unifiableN;
-(BOOL)unicodeSnob;
-(void)setUnicodeSnob:(BOOL)arg1 ;
-(BOOL)escapeSnob;
-(void)setEscapeSnob:(BOOL)arg1 ;
-(BOOL)linksEachParagraph;
-(void)setLinksEachParagraph:(BOOL)arg1 ;
-(long long)bodyWidth;
-(void)setBodyWidth:(long long)arg1 ;
-(BOOL)skipInternalLinks;
-(void)setSkipInternalLinks:(BOOL)arg1 ;
-(BOOL)inlineLinks;
-(void)setInlineLinks:(BOOL)arg1 ;
-(BOOL)ignoreLinks;
-(void)setIgnoreLinks:(BOOL)arg1 ;
-(BOOL)ignoreImages;
-(void)setIgnoreImages:(BOOL)arg1 ;
-(BOOL)ignoreEmphasis;
-(void)setIgnoreEmphasis:(BOOL)arg1 ;
-(void)setNameToCodepointMapping:(NSDictionary *)arg1 ;
-(void)setUnifiableN:(NSDictionary *)arg1 ;
-(NSMutableArray *)outTextList;
-(void)setOutTextList:(NSMutableArray *)arg1 ;
-(NSString *)outText;
-(void)setOutText:(NSString *)arg1 ;
-(long long)quiet;
-(void)setQuiet:(long long)arg1 ;
-(long long)p_p;
-(void)setP_p:(long long)arg1 ;
-(long long)outCount;
-(void)setOutCount:(long long)arg1 ;
-(void)setSpace:(BOOL)arg1 ;
-(NSMutableArray *)aStack;
-(void)setAStack:(NSMutableArray *)arg1 ;
-(NSString *)maybeAutomaticLink;
-(void)setMaybeAutomaticLink:(NSString *)arg1 ;
-(long long)aCount;
-(void)setACount:(long long)arg1 ;
-(void)setList:(NSMutableArray *)arg1 ;
-(long long)blockquote;
-(void)setBlockquote:(long long)arg1 ;
-(BOOL)pre;
-(void)setPre:(BOOL)arg1 ;
-(BOOL)startpre;
-(void)setStartpre:(BOOL)arg1 ;
-(BOOL)lastWasNewline;
-(void)setLastWasNewline:(BOOL)arg1 ;
-(BOOL)lastWasList;
-(void)setLastWasList:(BOOL)arg1 ;
-(NSString *)abbreviationTitle;
-(void)setAbbreviationTitle:(NSString *)arg1 ;
-(NSString *)abbreviationData;
-(void)setAbbreviationData:(NSString *)arg1 ;
-(NSMutableOrderedSet *)abbreviationList;
-(void)setAbbreviationList:(NSMutableOrderedSet *)arg1 ;
-(NSString *)ulItemMark;
-(void)setUlItemMark:(NSString *)arg1 ;
-(NSString *)emphasisMark;
-(void)setEmphasisMark:(NSString *)arg1 ;
-(NSString *)strongMark;
-(void)setStrongMark:(NSString *)arg1 ;
@end

