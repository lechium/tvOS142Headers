/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:18 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/ICRequestOperation.h>

@class ICStoreRequestContext, ICLibraryAuthServiceBulkClientTokenResponse, NSSet;

@interface ICLibraryAuthServiceBulkClientTokenRequest : ICRequestOperation {

	ICStoreRequestContext* _storeRequestContext;
	ICLibraryAuthServiceBulkClientTokenResponse* _response;
	NSSet* _accountDSIDs;

}
-(void)execute;
-(void)performRequestWithResponseHandler:(/*^block*/id)arg1 ;
-(id)initWithStoreRequestContext:(id)arg1 accountDSIDs:(id)arg2 ;
@end

