/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:03 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServices/AMSURLProtocolHandler.h>

@interface IMURLProtocolHandler : AMSURLProtocolHandler {

	BOOL _followsRedirects;

}

@property (assign) BOOL followsRedirects;              //@synthesize followsRedirects=_followsRedirects - In the implementation block
-(id)handleCompletionWithTask:(id)arg1 metrics:(id)arg2 decodedObject:(id)arg3 ;
-(BOOL)followsRedirects;
-(void)setFollowsRedirects:(BOOL)arg1 ;
@end
