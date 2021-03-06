/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:42 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetricsKit/MTEventHandlers.h>

@class MTFlexiblePerfEventHandler, MTPageRenderEventHandler, MTLoadUrlEventHandler;

@interface MTPerfEventHandlers : MTEventHandlers {

	MTFlexiblePerfEventHandler* _flexible;

}

@property (nonatomic,readonly) MTPageRenderEventHandler * pageRender; 
@property (nonatomic,readonly) MTLoadUrlEventHandler * loadUrl; 
@property (nonatomic,readonly) MTFlexiblePerfEventHandler * flexible;              //@synthesize flexible=_flexible - In the implementation block
-(MTFlexiblePerfEventHandler *)flexible;
-(void)registerDefaultEventHandlers;
-(Class)baseDataProviderClass;
-(MTPageRenderEventHandler *)pageRender;
-(MTLoadUrlEventHandler *)loadUrl;
@end

