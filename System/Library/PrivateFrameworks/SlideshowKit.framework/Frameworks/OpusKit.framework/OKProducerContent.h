/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:30 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OpusKit/OKProducerBundle.h>

@class OKProducerPlugin;

@interface OKProducerContent : OKProducerBundle {

	OKProducerPlugin* _plugin;

}

@property (assign,nonatomic) OKProducerPlugin * plugin;              //@synthesize plugin=_plugin - In the implementation block
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(BOOL)isLoaded;
-(void)setPlugin:(OKProducerPlugin *)arg1 ;
-(OKProducerPlugin *)plugin;
@end

