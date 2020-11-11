/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:45 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVKit/TVKit-Structs.h>
#import <UIKit/UINamedLayerImage.h>

@protocol UINamedLayerImage;
@class NSObject, UIImage, NSString;

@interface TVNamedLayerImage : NSObject <UINamedLayerImage> {

	int _blendMode;
	NSObject*<UINamedLayerImage> _namedLayerImage;
	UIImage* _image;

}

@property (nonatomic,retain) NSObject*<UINamedLayerImage> namedLayerImage;                   //@synthesize namedLayerImage=_namedLayerImage - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) int blendMode;                                                  //@synthesize blendMode=_blendMode - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) CGRect frame; 
@property (nonatomic,readonly) double opacity; 
@property (assign,nonatomic) BOOL fixedFrame; 
@property (nonatomic,readonly) id<UINamedLayerContentProvider> contentProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)namedLayerImageFromNamedLayerImage:(id)arg1 ;
+(id)namedLayerImageFromNamedLayerImage:(id)arg1 decodeImmediately:(BOOL)arg2 ;
+(id)namedLayerImageWithImage:(id)arg1 decodeImmediately:(BOOL)arg2 ;
+(id)namedLayerImageWithImage:(id)arg1 ;
-(NSString *)name;
-(id)init;
-(id)_init;
-(CGRect)frame;
-(UIImage *)image;
-(double)opacity;
-(void)setImage:(UIImage *)arg1 ;
-(int)blendMode;
-(BOOL)fixedFrame;
-(void)setBlendMode:(int)arg1 ;
-(id)imageObj;
-(void)setNamedLayerImage:(NSObject*<UINamedLayerImage>)arg1 ;
-(NSObject*<UINamedLayerImage>)namedLayerImage;
@end

