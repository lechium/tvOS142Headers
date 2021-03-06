/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:54 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@class CKUploadRequestMetadata;

@interface CKRequestAssetOperation : NSOperation {

	long long _state;
	CKUploadRequestMetadata* _metadata;
	/*^block*/id _assetRequestCompletionBlock;
	/*^block*/id _requestCallback;

}

@property (nonatomic,retain) CKUploadRequestMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy) id requestCallback;                                //@synthesize requestCallback=_requestCallback - In the implementation block
@property (assign) long long state;                                           //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) id assetRequestCompletionBlock;                    //@synthesize assetRequestCompletionBlock=_assetRequestCompletionBlock - In the implementation block
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isAsynchronous;
-(CKUploadRequestMetadata *)metadata;
-(void)setMetadata:(CKUploadRequestMetadata *)arg1 ;
-(void)setRequestCallback:(id)arg1 ;
-(id)requestCallback;
-(id)initWithAssetMetadata:(id)arg1 requestCallback:(/*^block*/id)arg2 ;
-(void)setAssetRequestCompletionBlock:(id)arg1 ;
-(id)assetRequestCompletionBlock;
@end

