/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:43 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface TITextInputTraits : NSObject <NSCopying, NSSecureCoding> {

	SCD_Union_TI23 _mask;
	NSString* _textContentType;
	NSString* _recentInputIdentifier;

}

@property (assign,nonatomic) unsigned long long autocapitalizationType; 
@property (assign,nonatomic) unsigned long long autocorrectionType; 
@property (assign,nonatomic) unsigned long long spellCheckingType; 
@property (assign,nonatomic) unsigned long long keyboardType; 
@property (assign,nonatomic) unsigned long long keyboardAppearance; 
@property (assign,nonatomic) unsigned long long returnKeyType; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (assign,nonatomic) BOOL secureTextEntry; 
@property (nonatomic,copy) NSString * recentInputIdentifier;                         //@synthesize recentInputIdentifier=_recentInputIdentifier - In the implementation block
@property (nonatomic,copy) NSString * textContentType;                               //@synthesize textContentType=_textContentType - In the implementation block
@property (assign,nonatomic) unsigned long long textScriptType; 
@property (assign,nonatomic) BOOL smartInsertDeleteEnabled; 
@property (assign,nonatomic) BOOL smartQuotesEnabled; 
@property (assign,nonatomic) BOOL smartDashesEnabled; 
@property (assign,nonatomic) unsigned long long smartInsertDeleteType; 
@property (assign,nonatomic) unsigned long long smartQuotesType; 
@property (assign,nonatomic) unsigned long long smartDashesType; 
@property (assign,nonatomic) BOOL disablePrediction; 
+(unsigned long long)translateToTextInputAutocapitalizationType:(long long)arg1 ;
+(unsigned long long)translateToTextInputAutocorrectionType:(long long)arg1 ;
+(unsigned long long)translateToTextInputSpellCheckingType:(long long)arg1 ;
+(unsigned long long)translateToTextInputKeyboardType:(long long)arg1 ;
+(unsigned long long)translateToTextInputKeyboardAppearance:(long long)arg1 ;
+(unsigned long long)translateToTextInputReturnKeyType:(long long)arg1 ;
+(BOOL)translateToTextInputSmartInsertDeleteEnabled:(long long)arg1 ;
+(BOOL)translateToTextInputSmartQuotesEnabled:(long long)arg1 ;
+(BOOL)translateToTextInputSmartDashesEnabled:(long long)arg1 ;
+(unsigned long long)translateToTextScriptType:(long long)arg1 ;
+(id)translateToTextInputRecentInputIdentifier:(id)arg1 ;
+(id)traitsForUITextInputTraits:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)keyboardType;
-(BOOL)smartQuotesEnabled;
-(void)setSmartQuotesEnabled:(BOOL)arg1 ;
-(BOOL)smartDashesEnabled;
-(void)setSmartDashesEnabled:(BOOL)arg1 ;
-(unsigned long long)autocapitalizationType;
-(unsigned long long)autocorrectionType;
-(void)setKeyboardType:(unsigned long long)arg1 ;
-(void)setAutocorrectionType:(unsigned long long)arg1 ;
-(void)setAutocapitalizationType:(unsigned long long)arg1 ;
-(BOOL)secureTextEntry;
-(void)setSecureTextEntry:(BOOL)arg1 ;
-(unsigned long long)spellCheckingType;
-(void)setSpellCheckingType:(unsigned long long)arg1 ;
-(unsigned long long)keyboardAppearance;
-(void)setKeyboardAppearance:(unsigned long long)arg1 ;
-(unsigned long long)returnKeyType;
-(void)setReturnKeyType:(unsigned long long)arg1 ;
-(BOOL)enablesReturnKeyAutomatically;
-(void)setEnablesReturnKeyAutomatically:(BOOL)arg1 ;
-(unsigned long long)textScriptType;
-(void)setTextScriptType:(unsigned long long)arg1 ;
-(BOOL)smartInsertDeleteEnabled;
-(void)setSmartInsertDeleteEnabled:(BOOL)arg1 ;
-(unsigned long long)smartInsertDeleteType;
-(void)setSmartInsertDeleteType:(unsigned long long)arg1 ;
-(unsigned long long)smartQuotesType;
-(void)setSmartQuotesType:(unsigned long long)arg1 ;
-(unsigned long long)smartDashesType;
-(void)setSmartDashesType:(unsigned long long)arg1 ;
-(BOOL)disablePrediction;
-(void)setDisablePrediction:(BOOL)arg1 ;
-(NSString *)textContentType;
-(void)setTextContentType:(NSString *)arg1 ;
-(NSString *)recentInputIdentifier;
-(void)setRecentInputIdentifier:(NSString *)arg1 ;
@end

