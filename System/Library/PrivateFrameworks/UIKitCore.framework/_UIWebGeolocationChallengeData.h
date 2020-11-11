/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:53 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WebAllowDenyPolicyListener;
@class NSString, NSURL, UIView;

@interface _UIWebGeolocationChallengeData : NSObject {

	NSString* _token;
	NSURL* _requestingURL;
	UIView* _view;
	id<WebAllowDenyPolicyListener> _listener;

}

@property (nonatomic,retain) NSString * token;                                     //@synthesize token=_token - In the implementation block
@property (nonatomic,retain) NSURL * requestingURL;                                //@synthesize requestingURL=_requestingURL - In the implementation block
@property (nonatomic,retain) UIView * view;                                        //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) id<WebAllowDenyPolicyListener> listener;              //@synthesize listener=_listener - In the implementation block
-(void)dealloc;
-(NSString *)token;
-(id<WebAllowDenyPolicyListener>)listener;
-(void)setListener:(id<WebAllowDenyPolicyListener>)arg1 ;
-(void)setToken:(NSString *)arg1 ;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(NSURL *)requestingURL;
-(void)setRequestingURL:(NSURL *)arg1 ;
@end

