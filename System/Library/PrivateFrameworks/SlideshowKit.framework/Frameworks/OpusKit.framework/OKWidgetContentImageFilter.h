/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:30 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OpusKit/OKWidgetBasicFilter.h>
#import <libobjc.A.dylib/JSOKWidgetContentImageFilter.h>

@class NSURL, CIImage;

@interface OKWidgetContentImageFilter : OKWidgetBasicFilter <JSOKWidgetContentImageFilter> {

	NSURL* _inputImageURL;
	CIImage* _imageOutput;

}

@property (nonatomic,retain) NSURL * inputImageURL;              //@synthesize inputImageURL=_inputImageURL - In the implementation block
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)filterWithImageURL:(id)arg1 ;
-(void)dealloc;
-(id)outputImage;
-(id)inputKeys;
-(void)setInputImageURL:(NSURL *)arg1 ;
-(void)setSettingInputImageURL:(id)arg1 ;
-(NSURL *)inputImageURL;
@end

