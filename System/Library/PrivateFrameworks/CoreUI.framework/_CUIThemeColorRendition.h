/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:40 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeRendition.h>

@class NSString;

@interface _CUIThemeColorRendition : CUIThemeRendition {

	CGColorRef _cgColor;
	const csicolor* _csiColor;
	NSString* _colorName;

}
-(void)dealloc;
-(CGColorRef)cgColor;
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(const csicolor*)csiColor;
-(id)systemColorName;
-(BOOL)substituteWithSystemColor;
@end

