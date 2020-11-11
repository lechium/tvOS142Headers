/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:45 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVKit/TVKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class NSArray, NSDictionary, TVSlideshowUtilities, UITableView, UILabel, NSString;

@interface TVSlideshowSettingsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	/*^block*/id _completionHandler;
	NSArray* _slideshowSettings;
	NSDictionary* _slideshowThemeSettings;
	NSDictionary* _slideshowTransitionMapping;
	NSArray* _slideshowTransitionSettings;
	NSArray* _imageProxies;
	NSArray* _photoAssets;
	TVSlideshowUtilities* _slideshowUtilities;
	UITableView* _slideshowSettingsView;
	UITableView* _slideshowTransitionStyleView;
	UILabel* _slideshowLabel;
	UILabel* _transitionLabel;

}

@property (nonatomic,retain) NSArray * slideshowSettings;                             //@synthesize slideshowSettings=_slideshowSettings - In the implementation block
@property (nonatomic,retain) NSDictionary * slideshowThemeSettings;                   //@synthesize slideshowThemeSettings=_slideshowThemeSettings - In the implementation block
@property (nonatomic,retain) NSDictionary * slideshowTransitionMapping;               //@synthesize slideshowTransitionMapping=_slideshowTransitionMapping - In the implementation block
@property (nonatomic,retain) NSArray * slideshowTransitionSettings;                   //@synthesize slideshowTransitionSettings=_slideshowTransitionSettings - In the implementation block
@property (nonatomic,retain) NSArray * imageProxies;                                  //@synthesize imageProxies=_imageProxies - In the implementation block
@property (nonatomic,retain) NSArray * photoAssets;                                   //@synthesize photoAssets=_photoAssets - In the implementation block
@property (nonatomic,retain) TVSlideshowUtilities * slideshowUtilities;               //@synthesize slideshowUtilities=_slideshowUtilities - In the implementation block
@property (nonatomic,retain) UITableView * slideshowSettingsView;                     //@synthesize slideshowSettingsView=_slideshowSettingsView - In the implementation block
@property (nonatomic,retain) UITableView * slideshowTransitionStyleView;              //@synthesize slideshowTransitionStyleView=_slideshowTransitionStyleView - In the implementation block
@property (nonatomic,retain) UILabel * slideshowLabel;                                //@synthesize slideshowLabel=_slideshowLabel - In the implementation block
@property (nonatomic,retain) UILabel * transitionLabel;                               //@synthesize transitionLabel=_transitionLabel - In the implementation block
@property (nonatomic,copy) id completionHandler;                                      //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(void)loadView;
-(id)preferredFocusEnvironments;
-(NSArray *)imageProxies;
-(void)setImageProxies:(NSArray *)arg1 ;
-(id)initWithImageProxies:(id)arg1 ;
-(NSDictionary *)slideshowThemeSettings;
-(void)_initializeSlideshowSettings;
-(CGSize)_getAttributedTextSize:(id)arg1 font:(id)arg2 maxWidth:(double)arg3 ;
-(NSArray *)photoAssets;
-(id)initWithPhotoAssets:(id)arg1 ;
-(void)_slideshowThemeChanged:(id)arg1 ;
-(void)refreshPhotoAssets:(id)arg1 ;
-(NSArray *)slideshowSettings;
-(void)setSlideshowSettings:(NSArray *)arg1 ;
-(void)setSlideshowThemeSettings:(NSDictionary *)arg1 ;
-(NSDictionary *)slideshowTransitionMapping;
-(void)setSlideshowTransitionMapping:(NSDictionary *)arg1 ;
-(NSArray *)slideshowTransitionSettings;
-(void)setSlideshowTransitionSettings:(NSArray *)arg1 ;
-(void)setPhotoAssets:(NSArray *)arg1 ;
-(TVSlideshowUtilities *)slideshowUtilities;
-(void)setSlideshowUtilities:(TVSlideshowUtilities *)arg1 ;
-(UITableView *)slideshowSettingsView;
-(void)setSlideshowSettingsView:(UITableView *)arg1 ;
-(UITableView *)slideshowTransitionStyleView;
-(void)setSlideshowTransitionStyleView:(UITableView *)arg1 ;
-(UILabel *)slideshowLabel;
-(void)setSlideshowLabel:(UILabel *)arg1 ;
-(UILabel *)transitionLabel;
-(void)setTransitionLabel:(UILabel *)arg1 ;
@end

