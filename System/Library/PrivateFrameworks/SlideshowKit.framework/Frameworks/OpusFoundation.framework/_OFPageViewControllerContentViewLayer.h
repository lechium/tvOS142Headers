/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:11 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <QuartzCore/CALayer.h>

@class OFPageViewController;

@interface _OFPageViewControllerContentViewLayer : CALayer {

	OFPageViewController* _progressReportDelegate;
	double _progress;

}

@property (assign,nonatomic) OFPageViewController * progressReportDelegate;              //@synthesize progressReportDelegate=_progressReportDelegate - In the implementation block
@property (assign,nonatomic) double progress;                                            //@synthesize progress=_progress - In the implementation block
+(BOOL)needsDisplayForKey:(id)arg1 ;
-(void)dealloc;
-(double)progress;
-(void)setProgress:(double)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(void)setProgressReportDelegate:(OFPageViewController *)arg1 ;
-(OFPageViewController *)progressReportDelegate;
@end

