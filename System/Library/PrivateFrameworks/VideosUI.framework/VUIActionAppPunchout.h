/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:00 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VUIAction.h>

@class NSURL;

@interface VUIActionAppPunchout : VUIAction {

	NSURL* _punchoutURLWithoutAssociatedPlayable;

}

@property (nonatomic,readonly) NSURL * punchoutURLWithoutAssociatedPlayable;              //@synthesize punchoutURLWithoutAssociatedPlayable=_punchoutURLWithoutAssociatedPlayable - In the implementation block
-(id)initWithContextData:(id)arg1 ;
-(BOOL)_openPunchoutURL:(id)arg1 isPlaybackURL:(BOOL)arg2 ;
-(void)performWithTargetResponder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSURL *)punchoutURLWithoutAssociatedPlayable;
@end

