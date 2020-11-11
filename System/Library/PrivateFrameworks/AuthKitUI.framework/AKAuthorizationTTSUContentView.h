/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:52 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AuthKitUI/AuthKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UILabel, UIActivityIndicatorView, NSArray, UIImage, NSString;

@interface AKAuthorizationTTSUContentView : UIView {

	BOOL _footerIsHidden;
	UIImageView* _appIconImageView;
	UIImageView* _plusSignImageView;
	UIImageView* _rapportNotificationImageView;
	UILabel* _titleLabel;
	UILabel* _instructionsLabel;
	UILabel* _footerLabel;
	UIActivityIndicatorView* _activityIndicatorView;
	NSArray* _viewsToHideWhenInProgress;
	NSArray* _constraints;
	NSArray* _constraintsToDisableWhenInProgress;
	NSArray* _constraintsToEnableWhenInProgress;

}

@property (nonatomic,retain) UIImageView * appIconImageView;                               //@synthesize appIconImageView=_appIconImageView - In the implementation block
@property (nonatomic,retain) UIImageView * plusSignImageView;                              //@synthesize plusSignImageView=_plusSignImageView - In the implementation block
@property (nonatomic,retain) UIImageView * rapportNotificationImageView;                   //@synthesize rapportNotificationImageView=_rapportNotificationImageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * instructionsLabel;                                  //@synthesize instructionsLabel=_instructionsLabel - In the implementation block
@property (nonatomic,retain) UILabel * footerLabel;                                        //@synthesize footerLabel=_footerLabel - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicatorView;              //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
@property (nonatomic,retain) NSArray * viewsToHideWhenInProgress;                          //@synthesize viewsToHideWhenInProgress=_viewsToHideWhenInProgress - In the implementation block
@property (nonatomic,retain) NSArray * constraints;                                        //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,retain) NSArray * constraintsToDisableWhenInProgress;                 //@synthesize constraintsToDisableWhenInProgress=_constraintsToDisableWhenInProgress - In the implementation block
@property (nonatomic,retain) NSArray * constraintsToEnableWhenInProgress;                  //@synthesize constraintsToEnableWhenInProgress=_constraintsToEnableWhenInProgress - In the implementation block
@property (nonatomic,retain) UIImage * appIcon; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * instructions; 
@property (nonatomic,retain) NSString * footer; 
@property (assign,nonatomic) BOOL footerIsHidden;                                          //@synthesize footerIsHidden=_footerIsHidden - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSArray *)constraints;
-(NSString *)instructions;
-(void)setInstructions:(NSString *)arg1 ;
-(UIImage *)appIcon;
-(void)setAppIcon:(UIImage *)arg1 ;
-(void)setConstraints:(NSArray *)arg1 ;
-(NSString *)footer;
-(void)setFooter:(NSString *)arg1 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)didMoveToSuperview;
-(void)setFooterIsHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UILabel *)footerLabel;
-(void)setFooterIsHidden:(BOOL)arg1 ;
-(void)startInProgressAnimation;
-(BOOL)footerIsHidden;
-(UIImageView *)appIconImageView;
-(void)setAppIconImageView:(UIImageView *)arg1 ;
-(UIImageView *)plusSignImageView;
-(void)setPlusSignImageView:(UIImageView *)arg1 ;
-(UIImageView *)rapportNotificationImageView;
-(void)setRapportNotificationImageView:(UIImageView *)arg1 ;
-(UILabel *)instructionsLabel;
-(void)setInstructionsLabel:(UILabel *)arg1 ;
-(void)setFooterLabel:(UILabel *)arg1 ;
-(UIActivityIndicatorView *)activityIndicatorView;
-(void)setActivityIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(NSArray *)viewsToHideWhenInProgress;
-(void)setViewsToHideWhenInProgress:(NSArray *)arg1 ;
-(NSArray *)constraintsToDisableWhenInProgress;
-(void)setConstraintsToDisableWhenInProgress:(NSArray *)arg1 ;
-(NSArray *)constraintsToEnableWhenInProgress;
-(void)setConstraintsToEnableWhenInProgress:(NSArray *)arg1 ;
@end

