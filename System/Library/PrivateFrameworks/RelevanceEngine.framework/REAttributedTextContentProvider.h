/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:11 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RETextContentProvider.h>

@class NSAttributedString;

@interface REAttributedTextContentProvider : RETextContentProvider {

	NSAttributedString* _text;

}

@property (nonatomic,readonly) NSAttributedString * text;              //@synthesize text=_text - In the implementation block
+(id)textContentProviderWithAttributedText:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSAttributedString *)text;
-(id)initWithAttributedText:(id)arg1 ;
-(id)contentEncodedString;
-(id)attributedStringRepresentation;
@end

