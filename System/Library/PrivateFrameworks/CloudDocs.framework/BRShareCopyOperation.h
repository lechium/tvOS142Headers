/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:00 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudDocs/BROperation.h>

@class NSURL;

@interface BRShareCopyOperation : BROperation {

	NSURL* _url;
	/*^block*/id _shareCopyCompletionBlock;
	/*^block*/id _rootShareCopyCompletionBlock;

}

@property (nonatomic,retain) NSURL * url;                      //@synthesize url=_url - In the implementation block
@property (copy) id shareCopyCompletionBlock;                  //@synthesize shareCopyCompletionBlock=_shareCopyCompletionBlock - In the implementation block
@property (copy) id rootShareCopyCompletionBlock;              //@synthesize rootShareCopyCompletionBlock=_rootShareCopyCompletionBlock - In the implementation block
-(id)initWithURL:(id)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(NSURL *)url;
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)setRootShareCopyCompletionBlock:(id)arg1 ;
-(id)shareCopyCompletionBlock;
-(void)setShareCopyCompletionBlock:(id)arg1 ;
-(id)rootShareCopyCompletionBlock;
@end
