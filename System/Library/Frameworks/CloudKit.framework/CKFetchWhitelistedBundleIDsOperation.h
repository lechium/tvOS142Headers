/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:56 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKit/CKOperation.h>
#import <libobjc.A.dylib/CKFetchWhitelistedBundleIDsOperationCallbacks.h>

@class NSArray;

@interface CKFetchWhitelistedBundleIDsOperation : CKOperation <CKFetchWhitelistedBundleIDsOperationCallbacks> {

	/*^block*/id _fetchWhitelistedBundleIDsCompletionBlock;
	NSArray* _bundleIDs;

}

@property (nonatomic,copy) NSArray * bundleIDs;                                                                             //@synthesize bundleIDs=_bundleIDs - In the implementation block
@property (nonatomic,readonly) id<CKFetchWhitelistedBundleIDsOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,copy) id fetchWhitelistedBundleIDsCompletionBlock;                                                     //@synthesize fetchWhitelistedBundleIDsCompletionBlock=_fetchWhitelistedBundleIDsCompletionBlock - In the implementation block
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg1 ;
+(SEL)daemonCallbackCompletionSelector;
-(NSArray *)bundleIDs;
-(void)setBundleIDs:(NSArray *)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(void)performCKOperation;
-(id)fetchWhitelistedBundleIDsCompletionBlock;
-(void)setFetchWhitelistedBundleIDsCompletionBlock:(id)arg1 ;
-(void)handleOperationDidCompleteWithBundleIDs:(id)arg1 metrics:(id)arg2 error:(id)arg3 ;
@end

