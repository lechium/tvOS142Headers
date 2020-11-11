/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:15 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface TVTopShelfInsetItemTextOverlay : NSObject <NSSecureCoding> {

	NSString* _heading;
	NSString* _title;
	NSString* _subheading;
	long long _tintColor;

}

@property (nonatomic,copy) NSString * heading;                 //@synthesize heading=_heading - In the implementation block
@property (nonatomic,copy) NSString * title;                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subheading;              //@synthesize subheading=_subheading - In the implementation block
@property (assign,nonatomic) long long tintColor;              //@synthesize tintColor=_tintColor - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)heading;
-(void)setHeading:(NSString *)arg1 ;
-(void)setTintColor:(long long)arg1 ;
-(long long)tintColor;
-(NSString *)subheading;
-(void)setSubheading:(NSString *)arg1 ;
@end

