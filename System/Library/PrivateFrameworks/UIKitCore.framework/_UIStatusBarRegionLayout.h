/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:37 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class _UIStatusBarRegion, NSArray;


@protocol _UIStatusBarRegionLayout <NSObject>
@property (assign,nonatomic,__weak) _UIStatusBarRegion * region; 
@property (nonatomic,copy) NSArray * displayItems; 
@property (nonatomic,readonly) BOOL fitsAllItems; 
@optional
-(BOOL)mayFitDisplayItems:(id)arg1;

@required
-(void)invalidate;
-(_UIStatusBarRegion *)region;
-(void)setRegion:(id)arg1;
-(NSArray *)displayItems;
-(void)setDisplayItems:(id)arg1;
-(BOOL)fitsAllItems;

@end

