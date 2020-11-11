/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:20 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSArray;

@interface PXTilingControllerDebugInfo : NSObject {

	NSArray* _preheatRects;
	NSArray* _pagedItems;
	NSArray* _preheatedItems;
	NSArray* _activeItems;
	CGRect _visibleRect;
	CGRect _activeRect;
	CGRect _pagedRect;
	CGRect _cachedRect;
	CGRect _contentBounds;

}

@property (assign,nonatomic) CGRect activeRect;                     //@synthesize activeRect=_activeRect - In the implementation block
@property (assign,nonatomic) CGRect visibleRect;                    //@synthesize visibleRect=_visibleRect - In the implementation block
@property (assign,nonatomic) CGRect pagedRect;                      //@synthesize pagedRect=_pagedRect - In the implementation block
@property (assign,nonatomic) CGRect cachedRect;                     //@synthesize cachedRect=_cachedRect - In the implementation block
@property (assign,nonatomic) CGRect contentBounds;                  //@synthesize contentBounds=_contentBounds - In the implementation block
@property (nonatomic,retain) NSArray * preheatRects;                //@synthesize preheatRects=_preheatRects - In the implementation block
@property (nonatomic,retain) NSArray * pagedItems;                  //@synthesize pagedItems=_pagedItems - In the implementation block
@property (nonatomic,retain) NSArray * preheatedItems;              //@synthesize preheatedItems=_preheatedItems - In the implementation block
@property (nonatomic,retain) NSArray * activeItems;                 //@synthesize activeItems=_activeItems - In the implementation block
-(CGRect)visibleRect;
-(id)debugQuickLookObject;
-(CGRect)contentBounds;
-(void)drawInRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(void)setVisibleRect:(CGRect)arg1 ;
-(CGRect)activeRect;
-(void)setActiveRect:(CGRect)arg1 ;
-(CGRect)pagedRect;
-(void)setPagedRect:(CGRect)arg1 ;
-(CGRect)cachedRect;
-(void)setCachedRect:(CGRect)arg1 ;
-(void)setContentBounds:(CGRect)arg1 ;
-(NSArray *)preheatRects;
-(void)setPreheatRects:(NSArray *)arg1 ;
-(NSArray *)pagedItems;
-(void)setPagedItems:(NSArray *)arg1 ;
-(NSArray *)preheatedItems;
-(void)setPreheatedItems:(NSArray *)arg1 ;
-(NSArray *)activeItems;
-(void)setActiveItems:(NSArray *)arg1 ;
@end

