/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:24 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSKeyboard.h>
@class NSString, JSValue;


@protocol IKJSKeyboard <JSExport>
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) JSValue * suggestions; 
@required
-(NSString *)text;
-(void)setText:(id)arg1;
-(void)setSuggestions:(id)arg1;
-(JSValue *)suggestions;

@end

#import <libobjc.A.dylib/_IKJSKeyboardProxy.h>

@protocol IKAppKeyboardBridge;
@class NSString, JSValue;

@interface IKJSKeyboard : IKJSObject <IKJSKeyboard, _IKJSKeyboardProxy> {

	id<IKAppKeyboardBridge> _appBridge;

}

@property (nonatomic,retain) id<IKAppKeyboardBridge> appBridge;              //@synthesize appBridge=_appBridge - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) JSValue * suggestions; 
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setSuggestions:(JSValue *)arg1 ;
-(JSValue *)suggestions;
-(id)hints;
-(void)setHints:(id)arg1 ;
-(void)setAppBridge:(id<IKAppKeyboardBridge>)arg1 ;
-(id<IKAppKeyboardBridge>)appBridge;
-(id)asPrivateIKJSKeyboard;
-(void)jsTextDidChange;
-(void)jsDidSelectHint:(id)arg1 ;
@end

