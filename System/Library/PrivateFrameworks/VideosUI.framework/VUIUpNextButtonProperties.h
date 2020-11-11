/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:01 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol VUIUpNextButtonProtocol;
@class VUIUpNextStateView, VUIButton, NSString;

@interface VUIUpNextButtonProperties : NSObject {

	BOOL _isWatchListed;
	BOOL _dismissOnSelect;
	BOOL _confirmationShouldWaitCompletion;
	VUIUpNextStateView* _addedStateView;
	VUIUpNextStateView* _removedStateView;
	VUIButton*<VUIUpNextButtonProtocol> _delegate;
	NSString* _canonicalID;

}

@property (nonatomic,readonly) VUIUpNextStateView * addedStateView;                            //@synthesize addedStateView=_addedStateView - In the implementation block
@property (nonatomic,readonly) VUIUpNextStateView * removedStateView;                          //@synthesize removedStateView=_removedStateView - In the implementation block
@property (assign,nonatomic,__weak) VUIButton*<VUIUpNextButtonProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * canonicalID;                                           //@synthesize canonicalID=_canonicalID - In the implementation block
@property (assign,nonatomic) BOOL isWatchListed;                                               //@synthesize isWatchListed=_isWatchListed - In the implementation block
@property (assign,nonatomic) BOOL dismissOnSelect;                                             //@synthesize dismissOnSelect=_dismissOnSelect - In the implementation block
@property (assign,nonatomic) BOOL confirmationShouldWaitCompletion;                            //@synthesize confirmationShouldWaitCompletion=_confirmationShouldWaitCompletion - In the implementation block
+(id)configureWithElement:(id)arg1 existingButton:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(VUIButton*<VUIUpNextButtonProtocol>)delegate;
-(void)setDelegate:(VUIButton*<VUIUpNextButtonProtocol>)arg1 ;
-(NSString *)canonicalID;
-(BOOL)isWatchListed;
-(void)setCanonicalID:(NSString *)arg1 ;
-(BOOL)confirmationShouldWaitCompletion;
-(void)setConfirmationShouldWaitCompletion:(BOOL)arg1 ;
-(VUIUpNextStateView *)addedStateView;
-(VUIUpNextStateView *)removedStateView;
-(void)updateButtonContentView;
-(void)callAPIAndToggleUpNextState;
-(BOOL)dismissOnSelect;
-(void)_errorInUpdatingState:(id)arg1 ;
-(void)setIsWatchListed:(BOOL)arg1 ;
-(void)setDismissOnSelect:(BOOL)arg1 ;
-(void)_toggleUpNextState;
-(void)setupNotificationObserver;
@end

