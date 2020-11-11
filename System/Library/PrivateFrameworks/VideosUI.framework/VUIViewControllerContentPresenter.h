/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:00 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <VideosUI/VideosUI-Structs.h>
@class UIView, NSString;

@interface VUIViewControllerContentPresenter : NSObject {

	BOOL _contentHasBeenDeleted;
	BOOL _contentHasBeenManuallyDeleted;
	unsigned long long _currentContentViewType;
	UIView* _currentView;
	UIView* _contentView;
	NSString* _noContentErrorTitle;
	NSString* _noContentErrorMessage;
	NSString* _deletedContentErrorMessage;
	NSString* _logName;
	UIView* _rootView;

}

@property (assign,nonatomic) BOOL contentHasBeenDeleted;                             //@synthesize contentHasBeenDeleted=_contentHasBeenDeleted - In the implementation block
@property (nonatomic,retain) UIView * currentView;                                   //@synthesize currentView=_currentView - In the implementation block
@property (nonatomic,retain) UIView * rootView;                                      //@synthesize rootView=_rootView - In the implementation block
@property (assign,nonatomic) unsigned long long currentContentViewType;              //@synthesize currentContentViewType=_currentContentViewType - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                   //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,copy) NSString * noContentErrorTitle;                           //@synthesize noContentErrorTitle=_noContentErrorTitle - In the implementation block
@property (nonatomic,copy) NSString * noContentErrorMessage;                         //@synthesize noContentErrorMessage=_noContentErrorMessage - In the implementation block
@property (assign,nonatomic) BOOL contentHasBeenManuallyDeleted;                     //@synthesize contentHasBeenManuallyDeleted=_contentHasBeenManuallyDeleted - In the implementation block
@property (nonatomic,copy) NSString * deletedContentErrorMessage;                    //@synthesize deletedContentErrorMessage=_deletedContentErrorMessage - In the implementation block
@property (nonatomic,retain) NSString * logName;                                     //@synthesize logName=_logName - In the implementation block
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(NSString *)logName;
-(void)setLogName:(NSString *)arg1 ;
-(void)setCurrentView:(UIView *)arg1 ;
-(UIView *)currentView;
-(UIView *)rootView;
-(void)setRootView:(UIView *)arg1 ;
-(void)setRootViewForViewController:(id)arg1 ;
-(void)setCurrentContentViewType:(unsigned long long)arg1 ;
-(void)setNoContentErrorTitle:(NSString *)arg1 ;
-(void)setNoContentErrorMessage:(NSString *)arg1 ;
-(void)configureCurrentViewFrameForBounds:(CGRect)arg1 ;
-(unsigned long long)currentContentViewType;
-(id)_logNameForContentViewType:(unsigned long long)arg1 ;
-(NSString *)noContentErrorTitle;
-(NSString *)noContentErrorMessage;
-(id)_createAlertViewWithTitle:(id)arg1 description:(id)arg2 ;
-(void)setContentHasBeenDeleted:(BOOL)arg1 ;
-(BOOL)contentHasBeenDeleted;
-(BOOL)contentHasBeenManuallyDeleted;
-(void)setContentHasBeenManuallyDeleted:(BOOL)arg1 ;
-(NSString *)deletedContentErrorMessage;
-(void)setDeletedContentErrorMessage:(NSString *)arg1 ;
@end

