/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:17 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIDynamicItem.h>

@class NSMapTable, NSArray, UIBezierPath, NSString;

@interface UIDynamicItemGroup : NSObject <UIDynamicItem> {

	NSMapTable* _itemsToOffsets;
	CGPoint _center;
	CGAffineTransform _transform;

}

@property (nonatomic,copy,readonly) NSArray * items; 
@property (assign,nonatomic) CGPoint center;                                        //@synthesize center=_center - In the implementation block
@property (nonatomic,readonly) CGRect bounds; 
@property (assign,nonatomic) CGAffineTransform transform;                           //@synthesize transform=_transform - In the implementation block
@property (nonatomic,readonly) unsigned long long collisionBoundsType; 
@property (nonatomic,readonly) UIBezierPath * collisionBoundingPath; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGAffineTransform)transform;
-(NSArray *)items;
-(CGRect)bounds;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(CGPoint)center;
-(void)setCenter:(CGPoint)arg1 ;
-(id)initWithItems:(id)arg1 ;
@end

