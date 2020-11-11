/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:10 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIView, UIColor, NSArray, TVPlaylist;

@interface TVMediaInfo : NSObject <NSCopying> {

	long long _intent;
	UIView* _contentView;
	UIColor* _backgroundColor;
	NSArray* _imageProxies;
	TVPlaylist* _playlist;
	UIView* _overlayView;

}

@property (assign,nonatomic) long long intent;                       //@synthesize intent=_intent - In the implementation block
@property (nonatomic,retain) UIView * contentView;                   //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) NSArray * imageProxies;                   //@synthesize imageProxies=_imageProxies - In the implementation block
@property (nonatomic,retain) TVPlaylist * playlist;                  //@synthesize playlist=_playlist - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                   //@synthesize overlayView=_overlayView - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)setIntent:(long long)arg1 ;
-(long long)intent;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(TVPlaylist *)playlist;
-(void)setPlaylist:(TVPlaylist *)arg1 ;
-(UIView *)overlayView;
-(void)setOverlayView:(UIView *)arg1 ;
-(NSArray *)imageProxies;
-(void)setImageProxies:(NSArray *)arg1 ;
@end

