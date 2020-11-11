/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:21 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SHLyricLine : NSObject <NSSecureCoding> {

	NSString* _text;
	double _offset;

}

@property (nonatomic,copy) NSString * text;              //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) double offset;              //@synthesize offset=_offset - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)lyricLineWithText:(id)arg1 offset:(double)arg2 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)offset;
-(void)setOffset:(double)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)initWithLineWithText:(id)arg1 offset:(double)arg2 ;
@end

