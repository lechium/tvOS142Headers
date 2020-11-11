/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:10:54 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaToolbox/MediaToolbox-Structs.h>
#import <MediaToolbox/FigBaseCALayer.h>

@interface FigSubtitleWebVTTRegionCALayer : FigBaseCALayer {

	OpaqueFigSubtitleWebVTTRegionCALayerInternal* layerInternal;

}
-(id)init;
-(void)dealloc;
-(void)setViewport:(CGRect)arg1 ;
-(void)setNeedsDisplay;
-(void)layoutSublayers;
-(CFStringRef)getContentID;
-(void)setContent:(CFDictionaryRef)arg1 ;
-(void)setRenderer:(OpaqueFigSubtitleRendererRef)arg1 ;
-(void)setReLayout;
-(void)handleNeedsLayoutNotification;
@end
