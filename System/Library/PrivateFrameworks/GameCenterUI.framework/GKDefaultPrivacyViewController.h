/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:51 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class GKLabel, UILabel, UITableView, NSMutableArray, NSLayoutConstraint, UIActivityIndicatorView, UIImageView, UIButton, NSString;

@interface GKDefaultPrivacyViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

	int _profilePrivacyVisibility;
	GKLabel* _privacyDescription;
	UILabel* _mainSubtitle;
	UITableView* _tableView;
	NSMutableArray* _availblePrivacySettings;
	NSLayoutConstraint* _tableViewHeightConstraint;
	UIActivityIndicatorView* _activityView;
	UIImageView* _avatarView;
	UIImageView* _publicCheckmark;
	UIImageView* _friendsOnlyCheckmark;
	UIImageView* _meOnlyCheckmark;
	UIButton* _notNowButton;
	UILabel* _hintLabel;
	UIButton* _nextButton;
	UILabel* _mainTitle;
	long long _numberOfClicksOnPrivacySelection;

}

@property (nonatomic,retain) GKLabel * privacyDescription;                                //@synthesize privacyDescription=_privacyDescription - In the implementation block
@property (nonatomic,retain) UILabel * mainSubtitle;                                      //@synthesize mainSubtitle=_mainSubtitle - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                     //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSMutableArray * availblePrivacySettings;                    //@synthesize availblePrivacySettings=_availblePrivacySettings - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * tableViewHeightConstraint;              //@synthesize tableViewHeightConstraint=_tableViewHeightConstraint - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityView;                      //@synthesize activityView=_activityView - In the implementation block
@property (nonatomic,retain) UIImageView * avatarView;                                    //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) UIImageView * publicCheckmark;                               //@synthesize publicCheckmark=_publicCheckmark - In the implementation block
@property (nonatomic,retain) UIImageView * friendsOnlyCheckmark;                          //@synthesize friendsOnlyCheckmark=_friendsOnlyCheckmark - In the implementation block
@property (nonatomic,retain) UIImageView * meOnlyCheckmark;                               //@synthesize meOnlyCheckmark=_meOnlyCheckmark - In the implementation block
@property (nonatomic,retain) UIButton * notNowButton;                                     //@synthesize notNowButton=_notNowButton - In the implementation block
@property (nonatomic,retain) UILabel * hintLabel;                                         //@synthesize hintLabel=_hintLabel - In the implementation block
@property (nonatomic,retain) UIButton * nextButton;                                       //@synthesize nextButton=_nextButton - In the implementation block
@property (nonatomic,retain) UILabel * mainTitle;                                         //@synthesize mainTitle=_mainTitle - In the implementation block
@property (assign,nonatomic) int profilePrivacyVisibility;                                //@synthesize profilePrivacyVisibility=_profilePrivacyVisibility - In the implementation block
@property (assign) long long numberOfClicksOnPrivacySelection;                            //@synthesize numberOfClicksOnPrivacySelection=_numberOfClicksOnPrivacySelection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTableView:(UITableView *)arg1 ;
-(void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLoad;
-(UIActivityIndicatorView *)activityView;
-(void)setActivityView:(UIActivityIndicatorView *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(GKLabel *)privacyDescription;
-(UITableView *)tableView;
-(void)viewDidLayoutSubviews;
-(void)setAvatarView:(UIImageView *)arg1 ;
-(UIImageView *)avatarView;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(UILabel *)mainTitle;
-(void)setMainTitle:(UILabel *)arg1 ;
-(void)updateUI;
-(UIButton *)nextButton;
-(void)setNextButton:(UIButton *)arg1 ;
-(UIButton *)notNowButton;
-(void)setNotNowButton:(UIButton *)arg1 ;
-(void)nextPressed:(id)arg1 ;
-(void)setProfilePrivacyVisibility:(int)arg1 ;
-(void)setNumberOfClicksOnPrivacySelection:(long long)arg1 ;
-(UILabel *)mainSubtitle;
-(UILabel *)hintLabel;
-(void)setAvailblePrivacySettings:(NSMutableArray *)arg1 ;
-(NSMutableArray *)availblePrivacySettings;
-(int)profilePrivacyVisibility;
-(long long)numberOfClicksOnPrivacySelection;
-(void)updatePrivacyDescriptionWithPrivacyVisibility:(int)arg1 ;
-(NSLayoutConstraint *)tableViewHeightConstraint;
-(id)titleForPrivacy:(int)arg1 ;
-(void)reportPrivacySelectionClickAnalytics;
-(void)notNowButtonPressed:(id)arg1 ;
-(void)setPrivacyDescription:(GKLabel *)arg1 ;
-(void)setMainSubtitle:(UILabel *)arg1 ;
-(void)setTableViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(UIImageView *)publicCheckmark;
-(void)setPublicCheckmark:(UIImageView *)arg1 ;
-(UIImageView *)friendsOnlyCheckmark;
-(void)setFriendsOnlyCheckmark:(UIImageView *)arg1 ;
-(UIImageView *)meOnlyCheckmark;
-(void)setMeOnlyCheckmark:(UIImageView *)arg1 ;
-(void)setHintLabel:(UILabel *)arg1 ;
@end

