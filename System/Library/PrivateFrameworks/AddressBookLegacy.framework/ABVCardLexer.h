/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:48 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableData, NSArray, ABVCardWatchdogTimer;

@interface ABVCardLexer : NSObject {

	NSMutableData* _data;
	char* _bytes;
	unsigned long long _length;
	unsigned _peakedPoint;
	unsigned _cursor;
	BOOL _unicode;
	int _errorCount;
	NSArray* _activeTokenSets;
	ABVCardWatchdogTimer* _timer;

}
-(void)dealloc;
-(unsigned)cursor;
-(int)errorCount;
-(id)tokenSetForLength:(int)arg1 ;
-(int)nextTokenPeakUnicode:(BOOL)arg1 length:(int)arg2 ;
-(int)nextTokenPeakSingle:(BOOL)arg1 length:(int)arg2 ;
-(BOOL)advancePastEOL;
-(BOOL)advancedPastToken:(int)arg1 ;
-(int)tokenAtCursor;
-(id)nextQuotedPrintableData;
-(id)nextEscapedCharacter;
-(void)advanceToPeakPoint;
-(id)nextUnicodeStringStopTokens:(int)arg1 quotedPrintable:(BOOL)arg2 trim:(BOOL)arg3 ;
-(id)nextSingleByteStringInEncoding:(unsigned long long)arg1 quotedPrintable:(BOOL)arg2 stopTokens:(int)arg3 trim:(BOOL)arg4 ;
-(BOOL)_advancePastLineFoldingSequenceIfNeeded;
-(void)_applyNextStringInEncoding:(unsigned long long)arg1 quotedPrintable:(BOOL)arg2 stopTokens:(int)arg3 trim:(BOOL)arg4 intoString:(id)arg5 ;
-(id)nextStringInEncoding:(unsigned long long)arg1 quotedPrintable:(BOOL)arg2 stopTokens:(int)arg3 trim:(BOOL)arg4 ;
-(id)nextUnicodeBase64Line:(BOOL*)arg1 ;
-(id)nextSingleByteBase64Line:(BOOL*)arg1 ;
-(id)nextBase64Line:(BOOL*)arg1 ;
-(BOOL)advanceToEOL;
-(int)advanceToString;
-(int)advanceToUnicodeString;
-(int)advanceToSingleByteString;
-(int)nextTokenPeak:(BOOL)arg1 ;
-(BOOL)advanceToEOLUnicode;
-(BOOL)advanceToEOLSingle;
-(BOOL)advancePastEOLUnicode;
-(BOOL)advancePastEOLSingle;
-(id)tokenName:(int)arg1 ;
-(id)initWithData:(id)arg1 watchdogTimer:(id)arg2 ;
-(id)nextArraySeperatedByToken:(int)arg1 stoppingAt:(int)arg2 inEncoding:(unsigned long long)arg3 ;
-(id)nextBase64Data;
-(BOOL)advanceToToken:(int)arg1 throughTypes:(int)arg2 ;
-(BOOL)atEOF;
@end

