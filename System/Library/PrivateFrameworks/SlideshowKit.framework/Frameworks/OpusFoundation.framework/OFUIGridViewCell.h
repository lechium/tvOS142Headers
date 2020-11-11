/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:11 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OpusFoundation/OpusFoundation-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSString, OFUIGridViewItem, NSMutableArray, UILongPressGestureRecognizer, UITapGestureRecognizer;

@interface OFUIGridViewCell : UIView <UIGestureRecognizerDelegate> {

	NSString* _reuseIdentifier;
	long long _index;
	OFUIGridViewItem* _item;
	NSMutableArray* _operations;
	UILongPressGestureRecognizer* _longPressRecognizer;
	UITapGestureRecognizer* _singleTapRecognizer;
	UITapGestureRecognizer* _selectAllRecognizer;
	BOOL _continuousSelection;
	BOOL _selected;

}

@property (nonatomic,copy,readonly) NSString * reuseIdentifier;                                  //@synthesize reuseIdentifier=_reuseIdentifier - In the implementation block
@property (assign,nonatomic) long long index;                                                    //@synthesize index=_index - In the implementation block
@property (nonatomic,retain,readonly) NSMutableArray * operations;                               //@synthesize operations=_operations - In the implementation block
@property (nonatomic,retain) OFUIGridViewItem * item;                                            //@synthesize item=_item - In the implementation block
@property (nonatomic,retain,readonly) UITapGestureRecognizer * singleTapRecognizer;              //@synthesize singleTapRecognizer=_singleTapRecognizer - In the implementation block
@property (nonatomic,retain,readonly) UITapGestureRecognizer * selectAllRecognizer;              //@synthesize selectAllRecognizer=_selectAllRecognizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)addOperation:(id)arg1 ;
-(long long)index;
-(void)setItem:(OFUIGridViewItem *)arg1 ;
-(OFUIGridViewItem *)item;
-(NSMutableArray *)operations;
-(void)cancelAllOperations;
-(void)setIndex:(long long)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)commonInit;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)removeOperation:(id)arg1 ;
-(NSString *)reuseIdentifier;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)gridView;
-(void)handleTap:(id)arg1 ;
-(id)selectionColor;
-(BOOL)hasOperations;
-(void)setOperationsPriority:(long long)arg1 ;
-(void)startDragging:(id)arg1 ;
-(void)handleSelectAll:(id)arg1 ;
-(void)_setHighlightedOnCell:(BOOL)arg1 ;
-(void)showSelectionBorder:(BOOL)arg1 ;
-(id)newDraggingItem;
-(unsigned long long)countOperations;
-(void)enumerateOperations:(/*^block*/id)arg1 ;
-(UITapGestureRecognizer *)singleTapRecognizer;
-(UITapGestureRecognizer *)selectAllRecognizer;
@end

