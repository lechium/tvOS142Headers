/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:24 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/IKDOMFeature.h>

@protocol IKAppPlayer;
@class _IKPlaceholderAppPlayer, IKAppContext, NSString, IKAppPlaylistBridge, IKJSPlayer, IKDOMDocument, NSDictionary, NSNumber, NSDate, IKAppMediaItemBridge, NSArray;

@interface IKAppPlayerBridge : NSObject <IKDOMFeature> {

	_IKPlaceholderAppPlayer* _placeholderAppPlayer;
	BOOL _interactiveOverlayDismissable;
	BOOL _muted;
	BOOL _showsResumeMenu;
	IKAppContext* _appContext;
	NSString* _featureName;
	IKAppPlaylistBridge* _playlist;
	id<IKAppPlayer> _appPlayer;
	IKJSPlayer* _jsPlayer;
	IKDOMDocument* _overlayDocument;
	IKDOMDocument* _interactiveOverlayDocument;
	NSDictionary* _contextMenuData;
	NSDictionary* _userInfo;

}

@property (assign,nonatomic,__weak) IKJSPlayer * jsPlayer;                            //@synthesize jsPlayer=_jsPlayer - In the implementation block
@property (nonatomic,readonly) long long state; 
@property (nonatomic,readonly) NSNumber * currentMediaItemDuration; 
@property (nonatomic,readonly) NSDate * currentMediaItemDate; 
@property (nonatomic,readonly) IKAppMediaItemBridge * currentMediaItem; 
@property (nonatomic,readonly) IKAppMediaItemBridge * nextMediaItem; 
@property (nonatomic,readonly) IKAppMediaItemBridge * previousMediaItem; 
@property (nonatomic,retain) IKAppPlaylistBridge * playlist;                          //@synthesize playlist=_playlist - In the implementation block
@property (nonatomic,retain) IKDOMDocument * overlayDocument;                         //@synthesize overlayDocument=_overlayDocument - In the implementation block
@property (nonatomic,retain) IKDOMDocument * interactiveOverlayDocument;              //@synthesize interactiveOverlayDocument=_interactiveOverlayDocument - In the implementation block
@property (assign,nonatomic) BOOL interactiveOverlayDismissable;                      //@synthesize interactiveOverlayDismissable=_interactiveOverlayDismissable - In the implementation block
@property (nonatomic,readonly) double scanRate; 
@property (nonatomic,readonly) NSArray * currentMediaItemAccessLogs; 
@property (nonatomic,readonly) NSArray * currentMediaItemErrorLogs; 
@property (assign,nonatomic) BOOL muted;                                              //@synthesize muted=_muted - In the implementation block
@property (nonatomic,copy) NSDictionary * contextMenuData;                            //@synthesize contextMenuData=_contextMenuData - In the implementation block
@property (assign,nonatomic) BOOL showsResumeMenu;                                    //@synthesize showsResumeMenu=_showsResumeMenu - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                                   //@synthesize userInfo=_userInfo - In the implementation block
@property (assign,nonatomic,__weak) id<IKAppPlayer> appPlayer;                        //@synthesize appPlayer=_appPlayer - In the implementation block
@property (nonatomic,copy,readonly) NSString * featureName;                           //@synthesize featureName=_featureName - In the implementation block
@property (nonatomic,__weak,readonly) IKAppContext * appContext;                      //@synthesize appContext=_appContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)makeFeatureJSObjectForFeature:(id)arg1 ;
-(NSDictionary *)userInfo;
-(long long)state;
-(void)stop;
-(void)cleanup;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)pause;
-(void)next;
-(void)previous;
-(void)present;
-(void)setElapsedTime:(double)arg1 ;
-(double)scanRate;
-(void)play;
-(void)setMuted:(BOOL)arg1 ;
-(BOOL)muted;
-(void)scan:(double)arg1 ;
-(NSString *)featureName;
-(IKAppContext *)appContext;
-(IKAppPlaylistBridge *)playlist;
-(void)setPlaylist:(IKAppPlaylistBridge *)arg1 ;
-(id)initWithDOMNode:(id)arg1 featureName:(id)arg2 ;
-(BOOL)showsResumeMenu;
-(void)setShowsResumeMenu:(BOOL)arg1 ;
-(IKDOMDocument *)overlayDocument;
-(void)setOverlayDocument:(IKDOMDocument *)arg1 ;
-(IKDOMDocument *)interactiveOverlayDocument;
-(void)setInteractiveOverlayDocument:(IKDOMDocument *)arg1 ;
-(BOOL)interactiveOverlayDismissable;
-(void)setInteractiveOverlayDismissable:(BOOL)arg1 ;
-(NSDictionary *)contextMenuData;
-(void)setContextMenuData:(NSDictionary *)arg1 ;
-(void)startObservingEvent:(id)arg1 extraInfo:(id)arg2 ;
-(void)changeToMediaAtIndex:(unsigned long long)arg1 ;
-(void)stopObservingEvent:(id)arg1 ;
-(NSNumber *)currentMediaItemDuration;
-(NSDate *)currentMediaItemDate;
-(IKAppMediaItemBridge *)currentMediaItem;
-(IKAppMediaItemBridge *)nextMediaItem;
-(IKAppMediaItemBridge *)previousMediaItem;
-(NSArray *)currentMediaItemAccessLogs;
-(NSArray *)currentMediaItemErrorLogs;
-(void)setJsPlayer:(IKJSPlayer *)arg1 ;
-(id)initWithAppContext:(id)arg1 jsPlayer:(id)arg2 ;
-(id<IKAppPlayer>)appPlayer;
-(void)_evaluateDelegateBlockSync:(/*^block*/id)arg1 ;
-(IKJSPlayer *)jsPlayer;
-(void)setAppPlayer:(id<IKAppPlayer>)arg1 ;
-(void)dispatchEvent:(id)arg1 userInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

