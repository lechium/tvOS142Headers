/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:57 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <LinkPresentation/LPComponentView.h>

@class NSString, LPButtonStyle, UIButton;

@interface LPCaptionBarButtonView : LPComponentView {

	NSString* _caption;
	LPButtonStyle* _style;
	UIButton* _button;

}
-(id)init;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)addTarget:(id)arg1 action:(SEL)arg2 ;
-(void)removeTarget:(id)arg1 action:(SEL)arg2 ;
-(void)layoutComponentView;
-(id)initWithCaption:(id)arg1 style:(id)arg2 ;
@end

