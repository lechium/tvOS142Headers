/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:19 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class ACAccountStore, NSObject, ACAccount;

@interface SSVAppleAccountStore : NSObject {

	ACAccountStore* _accountStore;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	ACAccount* _primaryAppleAccount;

}

@property (readonly) ACAccount * primaryAppleAccount; 
+(id)sharedAccountStore;
-(id)init;
-(ACAccount *)primaryAppleAccount;
-(void)_accountStoreDidChangeNotification:(id)arg1 ;
@end

