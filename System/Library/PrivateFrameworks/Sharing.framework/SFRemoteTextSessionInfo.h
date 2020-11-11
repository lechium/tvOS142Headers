/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:10 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface SFRemoteTextSessionInfo : NSObject <NSSecureCoding> {

	BOOL _secureTextEntry;
	NSString* _identifier;
	long long _keyboardType;
	NSString* _prompt;
	long long _returnKeyType;
	NSDictionary* _rtiPayload;
	NSString* _text;
	NSString* _title;

}

@property (nonatomic,copy) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long keyboardType;               //@synthesize keyboardType=_keyboardType - In the implementation block
@property (nonatomic,copy) NSString * prompt;                      //@synthesize prompt=_prompt - In the implementation block
@property (assign,nonatomic) long long returnKeyType;              //@synthesize returnKeyType=_returnKeyType - In the implementation block
@property (nonatomic,copy) NSDictionary * rtiPayload;              //@synthesize rtiPayload=_rtiPayload - In the implementation block
@property (assign,nonatomic) BOOL secureTextEntry;                 //@synthesize secureTextEntry=_secureTextEntry - In the implementation block
@property (nonatomic,copy) NSString * text;                        //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSString * title;                       //@synthesize title=_title - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(long long)keyboardType;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setKeyboardType:(long long)arg1 ;
-(BOOL)secureTextEntry;
-(void)setSecureTextEntry:(BOOL)arg1 ;
-(long long)returnKeyType;
-(void)setReturnKeyType:(long long)arg1 ;
-(NSString *)prompt;
-(void)setPrompt:(NSString *)arg1 ;
-(id)initWithRTIPayload:(id)arg1 ;
-(NSDictionary *)rtiPayload;
-(void)setRtiPayload:(NSDictionary *)arg1 ;
@end

