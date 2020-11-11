/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:10:36 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ACAccountStoreClientProtocol.h>

@protocol ACRemoteAccountStoreSessionDelegate;
@class NSString;

@interface ACAccountStoreClientSideListener : NSObject <ACAccountStoreClientProtocol> {

	id<ACRemoteAccountStoreSessionDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDelegate:(id)arg1 ;
-(void)accountCredentialsDidChangeForAccountWithIdentifier:(id)arg1 ;
-(void)accountDidChange:(id)arg1 withChangeType:(int)arg2 ;
-(void)connectionWasInvalidated;
@end
