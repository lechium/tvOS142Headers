/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:00 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudDocs/BROperation.h>

@class NSURL;

@interface BRSharePrepFolderForSharing : BROperation {

	NSURL* _url;
	/*^block*/id _prepFolderSharingCompletionBlock;

}

@property (copy) id prepFolderSharingCompletionBlock;              //@synthesize prepFolderSharingCompletionBlock=_prepFolderSharingCompletionBlock - In the implementation block
-(id)initWithURL:(id)arg1 ;
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)prepFolderSharingCompletionBlock;
-(void)setPrepFolderSharingCompletionBlock:(id)arg1 ;
@end

