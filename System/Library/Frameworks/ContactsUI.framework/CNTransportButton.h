/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:52 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIColor, UIImage;

@interface CNTransportButton : UIButton {

	BOOL _showBackgroundPlatter;
	long long _transportType;
	UIColor* _glyphColor;
	UIImage* _image;

}

@property (nonatomic,retain) UIImage * image;                         //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) long long transportType;                 //@synthesize transportType=_transportType - In the implementation block
@property (assign,nonatomic) BOOL showBackgroundPlatter;              //@synthesize showBackgroundPlatter=_showBackgroundPlatter - In the implementation block
@property (nonatomic,retain) UIColor * glyphColor;                    //@synthesize glyphColor=_glyphColor - In the implementation block
+(id)transportButton;
+(id)transportButtonWithType:(long long)arg1 ;
-(long long)transportType;
-(void)setTransportType:(long long)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setGlyphColor:(UIColor *)arg1 ;
-(void)tintColorDidChange;
-(void)setShowBackgroundPlatter:(BOOL)arg1 ;
-(BOOL)showBackgroundPlatter;
-(id)imageNameForType:(long long)arg1 ;
-(void)_updateImageWithType:(long long)arg1 ;
-(UIColor *)glyphColor;
@end
