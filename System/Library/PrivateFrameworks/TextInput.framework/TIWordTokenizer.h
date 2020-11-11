/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:43 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TextInput/TextInput-Structs.h>
@class NSString;

@interface TIWordTokenizer : NSObject {

	NSString* m_string;
	SCD_Struct_TI18* m_inlineBuffer;
	NSRange m_tokenRange;
	NSRange m_searchRange;
	unsigned long long m_bufferOffset;

}
-(id)init;
-(void)setString:(id)arg1 withSearchRange:(NSRange)arg2 ;
-(NSRange)advanceToNextToken;
-(NSRange)rangeOfCurrentToken;
-(id)allTokensForString:(id)arg1 ;
@end

