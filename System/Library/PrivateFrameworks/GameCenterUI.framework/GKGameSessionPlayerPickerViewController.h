/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:48 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKDashboardCollectionViewController.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UISearchBarDelegate.h>

@class NSString, NSArray, UIButton, UITextField;

@interface GKGameSessionPlayerPickerViewController : GKDashboardCollectionViewController <UITextFieldDelegate, UISearchBarDelegate> {

	BOOL _shouldIgnoreClearSelection;
	NSString* _message;
	/*^block*/id _completionHandler;
	NSArray* _initiallySelectedPlayers;
	UIButton* _sendButton;
	UIButton* _customizeMessageButton;
	UITextField* _messageField;

}

@property (nonatomic,retain) NSArray * initiallySelectedPlayers;                    //@synthesize initiallySelectedPlayers=_initiallySelectedPlayers - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreClearSelection;                       //@synthesize shouldIgnoreClearSelection=_shouldIgnoreClearSelection - In the implementation block
@property (assign,nonatomic,__weak) UIButton * sendButton;                          //@synthesize sendButton=_sendButton - In the implementation block
@property (assign,nonatomic,__weak) UIButton * customizeMessageButton;              //@synthesize customizeMessageButton=_customizeMessageButton - In the implementation block
@property (assign,nonatomic,__weak) UITextField * messageField;                     //@synthesize messageField=_messageField - In the implementation block
@property (nonatomic,copy) NSString * message;                                      //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) id completionHandler;                                    //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)send:(id)arg1 ;
-(void)addMessage:(id)arg1 ;
-(void)viewDidLoad;
-(void)cancel:(id)arg1 ;
-(void)clearSelection;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(UIButton *)sendButton;
-(void)setSendButton:(UIButton *)arg1 ;
-(void)setSearchText:(id)arg1 ;
-(UITextField *)messageField;
-(id)initWithMaxSelectable:(long long)arg1 unavailablePlayers:(id)arg2 hiddenPlayers:(id)arg3 ;
-(void)_updateButtonEnableState;
-(void)setShouldIgnoreClearSelection:(BOOL)arg1 ;
-(void)dataUpdated:(BOOL)arg1 withError:(id)arg2 ;
-(void)setInitiallySelectedPlayers:(NSArray *)arg1 ;
-(void)selectPlayersAtIndexPaths:(id)arg1 ;
-(void)setupNoContentView:(id)arg1 withError:(id)arg2 ;
-(NSArray *)initiallySelectedPlayers;
-(BOOL)shouldIgnoreClearSelection;
-(UIButton *)customizeMessageButton;
-(void)setCustomizeMessageButton:(UIButton *)arg1 ;
-(void)setMessageField:(UITextField *)arg1 ;
@end

