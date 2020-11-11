/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:08 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/CVNLP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSCharacterSet;

@interface CVNLPTextDecoderUtilities : NSObject {

	NSCharacterSet* _whitespaceCharSet;
	NSCharacterSet* _lowercaseCharSet;
	NSCharacterSet* _uppercaseCharSet;
	NSCharacterSet* _separatorCharSet;
	NSCharacterSet* _punctuationCharSet;
	NSCharacterSet* _latinNumeralCharSet;

}
+(id)sharedInstance;
-(id)init;
-(BOOL)isStringWhitespace:(id)arg1 ;
-(BOOL)isLatinCharacter:(id)arg1 ;
-(BOOL)isStringPunctuation:(id)arg1 ;
-(BOOL)isStringLatinNumeral:(id)arg1 ;
-(unsigned long long)unicodeFromCharacterString:(id)arg1 ;
-(BOOL)isStringWordSeparator:(id)arg1 ;
-(BOOL)isStringLowercase:(id)arg1 ;
-(BOOL)isStringUppercase:(id)arg1 ;
-(unsigned long long)lengthOfString:(id)arg1 ;
@end

