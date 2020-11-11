/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:52 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIImage, NSString;

@interface CNActionItem : NSObject {

	BOOL _disabled;
	UIImage* _image;
	NSString* _title;
	NSString* _type;

}

@property (nonatomic,retain) UIImage * image;               //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * type;               //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL disabled;                 //@synthesize disabled=_disabled - In the implementation block
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)setDisabled:(BOOL)arg1 ;
-(BOOL)disabled;
@end
