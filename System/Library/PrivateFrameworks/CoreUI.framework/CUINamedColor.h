/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:41 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUINamedLookup.h>

@class NSString;

@interface CUINamedColor : CUINamedLookup {

	CGColorRef _cgColor;
	NSString* _colorName;
	BOOL _substituteWithSystemColor;

}

@property (nonatomic,readonly) CGColorRef cgColor; 
@property (nonatomic,readonly) BOOL substituteWithSystemColor;              //@synthesize substituteWithSystemColor=_substituteWithSystemColor - In the implementation block
@property (nonatomic,readonly) NSString * systemColorName;                  //@synthesize colorName=_colorName - In the implementation block
-(void)dealloc;
-(CGColorRef)cgColor;
-(id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3 ;
-(NSString *)systemColorName;
-(BOOL)substituteWithSystemColor;
@end

