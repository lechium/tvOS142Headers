/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:31 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITextSuggestion.h>

@class NSString;

@interface UITextAutofillSuggestion : UITextSuggestion {

	NSString* _username;
	NSString* _password;

}

@property (nonatomic,copy,readonly) NSString * username;              //@synthesize username=_username - In the implementation block
@property (nonatomic,copy,readonly) NSString * password;              //@synthesize password=_password - In the implementation block
+(id)autofillSuggestionWithUsername:(id)arg1 password:(id)arg2 ;
-(NSString *)password;
-(NSString *)username;
-(id)initWithUsername:(id)arg1 password:(id)arg2 ;
-(id)_keyboardCandidate;
@end
