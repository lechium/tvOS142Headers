/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:50 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CKDOperation.h>
#import <libobjc.A.dylib/CKDOperationInfoDelegate.h>

@class NSString;

@interface CKDLongLivedCallbackRelayOperation : CKDOperation <CKDOperationInfoDelegate>

@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(void)main;
-(BOOL)isInvalidated;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(BOOL)isLongLivedCallbackRelayOperation;
-(BOOL)shouldCheckAppVersion;
-(void)wasUnexpectedlyUnregisteredForOperationID:(id)arg1 ;
-(void)operationWithID:(id)arg1 receivedCallback:(id)arg2 ;
@end

