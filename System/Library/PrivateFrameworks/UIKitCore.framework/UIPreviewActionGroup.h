/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:13 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIPreviewActionItem_Internal.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <UIKit/UIPreviewActionItem.h>

@class NSString, UIImage, UIColor, NSArray;

@interface UIPreviewActionGroup : NSObject <UIPreviewActionItem_Internal, NSCopying, UIPreviewActionItem> {

	NSString* _title;
	UIImage* _image;
	NSString* _identifier;
	UIColor* _color;
	long long _style;
	NSArray* _actions;

}

@property (setter=_setActions:,getter=_actions,nonatomic,copy) NSArray * actions;              //@synthesize actions=_actions - In the implementation block
@property (nonatomic,copy) NSString * title;                                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long style;                                                  //@synthesize style=_style - In the implementation block
@property (setter=_setColor:,getter=_color,nonatomic,retain) UIColor * color;                  //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                  //@synthesize image=_image - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_actionGroupWithPreviewMenuItemWithSubactions:(id)arg1 ;
+(id)actionGroupWithTitle:(id)arg1 style:(long long)arg2 actions:(id)arg3 ;
+(id)_actionGroupWithTitle:(id)arg1 style:(long long)arg2 color:(id)arg3 actions:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(id)_actions;
-(UIImage *)image;
-(id)_color;
-(void)setImage:(UIImage *)arg1 ;
-(void)_setActions:(id)arg1 ;
-(void)_setColor:(id)arg1 ;
-(id)_effectiveColor;
-(id)_effectiveImage;
@end

