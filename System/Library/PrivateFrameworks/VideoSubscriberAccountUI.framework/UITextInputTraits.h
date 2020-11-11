/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:39 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, UITextInputPasswordRules;


@protocol UITextInputTraits <NSObject>
@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long spellCheckingType; 
@property (assign,nonatomic) long long smartQuotesType; 
@property (assign,nonatomic) long long smartDashesType; 
@property (assign,nonatomic) long long smartInsertDeleteType; 
@property (assign,nonatomic) long long keyboardType; 
@property (assign,nonatomic) long long keyboardAppearance; 
@property (assign,nonatomic) long long returnKeyType; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry; 
@property (nonatomic,copy) NSString * textContentType; 
@property (nonatomic,copy) UITextInputPasswordRules * passwordRules; 
@optional
-(long long)keyboardType;
-(long long)autocapitalizationType;
-(long long)autocorrectionType;
-(void)setKeyboardType:(long long)arg1;
-(void)setAutocorrectionType:(long long)arg1;
-(void)setAutocapitalizationType:(long long)arg1;
-(void)setSecureTextEntry:(BOOL)arg1;
-(long long)spellCheckingType;
-(void)setSpellCheckingType:(long long)arg1;
-(long long)keyboardAppearance;
-(void)setKeyboardAppearance:(long long)arg1;
-(long long)returnKeyType;
-(void)setReturnKeyType:(long long)arg1;
-(BOOL)enablesReturnKeyAutomatically;
-(void)setEnablesReturnKeyAutomatically:(BOOL)arg1;
-(long long)smartInsertDeleteType;
-(void)setSmartInsertDeleteType:(long long)arg1;
-(long long)smartQuotesType;
-(void)setSmartQuotesType:(long long)arg1;
-(long long)smartDashesType;
-(void)setSmartDashesType:(long long)arg1;
-(NSString *)textContentType;
-(void)setTextContentType:(id)arg1;
-(BOOL)isSecureTextEntry;
-(UITextInputPasswordRules *)passwordRules;
-(void)setPasswordRules:(id)arg1;

@end

