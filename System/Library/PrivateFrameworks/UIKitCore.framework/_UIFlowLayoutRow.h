/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:11 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class _UIFlowLayoutSection, NSMutableArray;

@interface _UIFlowLayoutRow : NSObject {

	BOOL _isValid;
	BOOL _complete;
	int _verticalAlignement;
	int _horizontalAlignement;
	BOOL _fixedItemSize;
	_UIFlowLayoutSection* _section;
	long long _index;
	NSMutableArray* _items;
	double _availableSpace;
	CGSize _rowSize;
	CGRect _rowFrame;

}

@property (assign,nonatomic,__weak) _UIFlowLayoutSection * section;              //@synthesize section=_section - In the implementation block
@property (assign,nonatomic) CGSize rowSize;                                     //@synthesize rowSize=_rowSize - In the implementation block
@property (assign,nonatomic) CGRect rowFrame;                                    //@synthesize rowFrame=_rowFrame - In the implementation block
@property (assign,nonatomic) long long index;                                    //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) NSMutableArray * items;                           //@synthesize items=_items - In the implementation block
@property (assign,nonatomic) BOOL complete;                                      //@synthesize complete=_complete - In the implementation block
@property (assign,nonatomic) BOOL fixedItemSize;                                 //@synthesize fixedItemSize=_fixedItemSize - In the implementation block
@property (assign,nonatomic) double availableSpace;                              //@synthesize availableSpace=_availableSpace - In the implementation block
-(id)init;
-(void)invalidate;
-(long long)index;
-(BOOL)complete;
-(void)setIndex:(long long)arg1 ;
-(NSMutableArray *)items;
-(_UIFlowLayoutSection *)section;
-(void)setSection:(_UIFlowLayoutSection *)arg1 ;
-(id)snapshot;
-(double)availableSpace;
-(void)setComplete:(BOOL)arg1 ;
-(void)removeItemAtIndex:(long long)arg1 ;
-(void)insertItem:(id)arg1 atIndex:(long long)arg2 ;
-(BOOL)fixedItemSize;
-(CGRect)rowFrame;
-(void)setFixedItemSize:(BOOL)arg1 ;
-(CGSize)rowSize;
-(void)addItem:(id)arg1 atEnd:(BOOL)arg2 ;
-(void)layoutRow;
-(void)setRowFrame:(CGRect)arg1 ;
-(long long)indexOfNearestItemAtPoint:(CGPoint)arg1 ;
-(id)copyFromSection:(id)arg1 ;
-(void)setRowSize:(CGSize)arg1 ;
-(void)setAvailableSpace:(double)arg1 ;
@end

