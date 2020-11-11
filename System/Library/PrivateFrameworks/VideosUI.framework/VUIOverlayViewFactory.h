/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <VideosUI/VideosUI-Structs.h>
@interface VUIOverlayViewFactory : NSObject
+(id)overlayViewWithElement:(id)arg1 cardlayoutType:(long long)arg2 existingView:(id)arg3 canFallbackToInterfaceFactory:(BOOL)arg4 ;
+(id)overlayViewWithMediaItem:(id)arg1 overlayType:(long long)arg2 existingView:(id)arg3 ;
+(long long)_overlayTypeFromString:(id)arg1 ;
+(id)_upnextOverlayWithElement:(id)arg1 existingView:(id)arg2 ;
+(id)_sportsOverlayWithElement:(id)arg1 cardlayoutType:(long long)arg2 overlayType:(long long)arg3 existingView:(id)arg4 ;
+(id)_overlayWithElement:(id)arg1 overlayType:(long long)arg2 existingView:(id)arg3 ;
+(id)_overlayWithMediaItem:(id)arg1 overlayType:(long long)arg2 existingView:(id)arg3 ;
+(UIEdgeInsets)_overlayPaddingWithElement:(id)arg1 ;
+(id)_gradientLayerWithViewElement:(id)arg1 overlayType:(long long)arg2 existingLayer:(id)arg3 ;
+(UIEdgeInsets)_overlayPaddingWithMediaItem:(id)arg1 ;
+(long long)overlayTypeOfElement:(id)arg1 ;
@end

