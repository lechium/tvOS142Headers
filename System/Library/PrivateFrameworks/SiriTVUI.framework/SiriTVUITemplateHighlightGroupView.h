/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:34 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriTVUI/SiriTVUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <SiriTVUI/SiriTVUIGroupView.h>
#import <SiriTVUI/SiriTVUITemplateItemView.h>

@class NSMutableArray, NSArray, NSString;

@interface SiriTVUITemplateHighlightGroupView : UIView <SiriTVUIGroupView, SiriTVUITemplateItemView> {

	NSMutableArray* _highlightableViews;
	BOOL hasPriorityLayout;

}

@property (nonatomic,readonly) NSArray * groupedSubviews;              //@synthesize highlightableViews=_highlightableViews - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasPriorityLayout; 
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)hasPriorityLayout;
-(void)setHasPriorityLayout:(BOOL)arg1 ;
-(void)layoutSubviews;
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(BOOL)shouldFitWithinContentMargins;
-(NSArray *)groupedSubviews;
-(void)addGroupedSubview:(id)arg1 ;
-(void)removeGroupedSubview:(id)arg1 ;
@end

