/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:37 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInput/TIKeyboardCandidateSingle.h>

@class NSString;

@interface TUITypedStringCandidate : TIKeyboardCandidateSingle {

	NSString* _displayLabel;

}

@property (nonatomic,retain) NSString * displayLabel;              //@synthesize displayLabel=_displayLabel - In the implementation block
+(id)typedStringCandidateWithLocale:(id)arg1 typedString:(id)arg2 ;
-(id)label;
-(NSString *)displayLabel;
-(void)setDisplayLabel:(NSString *)arg1 ;
@end
