/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:12 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/RemoteTextInput.framework/RemoteTextInput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RemoteTextInput/RemoteTextInput-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSAttributedString;

@interface RTIStyledIntermediateText : NSObject <NSSecureCoding> {

	unsigned long long _selectionOffset;
	NSString* _inputString;
	NSAttributedString* _displayString;
	NSString* _searchString;
	long long _cursorVisibility;

}

@property (nonatomic,readonly) NSString * inputString;                          //@synthesize inputString=_inputString - In the implementation block
@property (nonatomic,readonly) NSAttributedString * displayString;              //@synthesize displayString=_displayString - In the implementation block
@property (nonatomic,readonly) NSRange selectedRange; 
@property (nonatomic,readonly) NSString * searchString;                         //@synthesize searchString=_searchString - In the implementation block
@property (assign,nonatomic) long long cursorVisibility;                        //@synthesize cursorVisibility=_cursorVisibility - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)intermediateTextWithInputString:(id)arg1 displayString:(id)arg2 ;
+(id)intermediateTextWithInputString:(id)arg1 displayString:(id)arg2 selectionLocation:(unsigned long long)arg3 ;
+(id)intermediateTextWithInputString:(id)arg1 displayString:(id)arg2 selectionLocation:(unsigned long long)arg3 searchString:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)searchString;
-(NSAttributedString *)displayString;
-(NSString *)inputString;
-(NSRange)selectedRange;
-(id)initWithInputString:(id)arg1 displayString:(id)arg2 selectionLocation:(unsigned long long)arg3 searchString:(id)arg4 ;
-(long long)cursorVisibility;
-(void)setCursorVisibility:(long long)arg1 ;
@end
