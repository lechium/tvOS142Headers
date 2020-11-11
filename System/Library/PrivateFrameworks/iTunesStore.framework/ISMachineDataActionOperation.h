/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:32 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesStore/ISOperation.h>

@class SSMachineDataRequest, NSString;

@interface ISMachineDataActionOperation : ISOperation {

	BOOL _blocksPurchaseRequests;
	BOOL _hidesServerDrivenDialogs;
	SSMachineDataRequest* _request;
	/*^block*/id _resultBlock;
	NSString* _syncState;
	NSString* _userAgent;

}

@property (readonly) SSMachineDataRequest * machineDataRequest; 
@property (assign) BOOL blocksPurchaseRequests; 
@property (assign) BOOL hidesServerDrivenDialogs; 
@property (copy) id resultBlock; 
@property (copy) NSString * userAgent; 
@property (readonly) NSString * syncState; 
-(void)run;
-(void)setUserAgent:(NSString *)arg1 ;
-(NSString *)userAgent;
-(id)uniqueKey;
-(void)setResultBlock:(id)arg1 ;
-(id)resultBlock;
-(id)initWithMachineDataRequest:(id)arg1 ;
-(NSString *)syncState;
-(BOOL)_provisionWithRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)_syncMachineWithRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)_eraseProvisioning;
-(BOOL)blocksPurchaseRequests;
-(BOOL)hidesServerDrivenDialogs;
-(void)setHidesServerDrivenDialogs:(BOOL)arg1 ;
-(BOOL)_shouldRetryAfterError:(id)arg1 ;
-(SSMachineDataRequest *)machineDataRequest;
-(void)setBlocksPurchaseRequests:(BOOL)arg1 ;
@end

