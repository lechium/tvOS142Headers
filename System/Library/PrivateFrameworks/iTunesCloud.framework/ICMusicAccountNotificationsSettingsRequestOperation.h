/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:19 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/ICRequestOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, ICStoreRequestContext, ICStoreURLRequest, ICMusicAccountNotificationsSettingsResponse, NSDictionary;

@interface ICMusicAccountNotificationsSettingsRequestOperation : ICRequestOperation {

	NSObject*<OS_dispatch_queue> _accessQueue;
	ICStoreRequestContext* _requestContext;
	ICStoreURLRequest* _storeURLRequest;
	ICMusicAccountNotificationsSettingsResponse* _response;
	long long _requestMethod;
	NSDictionary* _bodyDictionary;

}
-(void)cancel;
-(void)execute;
-(void)performRequestWithResponseHandler:(/*^block*/id)arg1 ;
-(id)initWithRequestContext:(id)arg1 withRequestMethod:(long long)arg2 ;
-(id)initWithRequestContext:(id)arg1 withRequestMethod:(long long)arg2 andBodyDictionary:(id)arg3 ;
@end

