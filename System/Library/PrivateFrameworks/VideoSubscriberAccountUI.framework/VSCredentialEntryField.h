/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:40 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface VSCredentialEntryField : NSObject {

	BOOL _secure;
	BOOL _required;
	NSString* _title;
	NSString* _placeholder;
	long long _keyboardType;
	NSString* _text;
	long long _autocapitalizationType;
	long long _autocorrectionType;
	long long _returnKeyType;
	NSString* _identifier;
	NSString* _recentsTitle;
	NSString* _recentsMessage;

}

@property (nonatomic,copy) NSString * recentsTitle;                         //@synthesize recentsTitle=_recentsTitle - In the implementation block
@property (nonatomic,copy) NSString * recentsMessage;                       //@synthesize recentsMessage=_recentsMessage - In the implementation block
@property (nonatomic,copy) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * placeholder;                          //@synthesize placeholder=_placeholder - In the implementation block
@property (assign,nonatomic) long long keyboardType;                        //@synthesize keyboardType=_keyboardType - In the implementation block
@property (assign,getter=isSecure,nonatomic) BOOL secure;                   //@synthesize secure=_secure - In the implementation block
@property (nonatomic,copy) NSString * text;                                 //@synthesize text=_text - In the implementation block
@property (assign,getter=isRequired,nonatomic) BOOL required;               //@synthesize required=_required - In the implementation block
@property (assign,nonatomic) long long autocapitalizationType;              //@synthesize autocapitalizationType=_autocapitalizationType - In the implementation block
@property (assign,nonatomic) long long autocorrectionType;                  //@synthesize autocorrectionType=_autocorrectionType - In the implementation block
@property (assign,nonatomic) long long returnKeyType;                       //@synthesize returnKeyType=_returnKeyType - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
-(id)init;
-(NSString *)identifier;
-(void)setSecure:(BOOL)arg1 ;
-(BOOL)isSecure;
-(long long)keyboardType;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSString *)placeholder;
-(long long)autocapitalizationType;
-(long long)autocorrectionType;
-(void)setKeyboardType:(long long)arg1 ;
-(void)setAutocorrectionType:(long long)arg1 ;
-(void)setAutocapitalizationType:(long long)arg1 ;
-(long long)returnKeyType;
-(void)setReturnKeyType:(long long)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(void)setRequired:(BOOL)arg1 ;
-(BOOL)isRequired;
-(void)setRecentsTitle:(NSString *)arg1 ;
-(void)setRecentsMessage:(NSString *)arg1 ;
-(NSString *)recentsTitle;
-(NSString *)recentsMessage;
@end

