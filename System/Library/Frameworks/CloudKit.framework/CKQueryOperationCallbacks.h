/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:54 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CKQueryOperationCallbacks <CKOperationCallbacks>
@required
-(void)handleOperationDidCompleteWithCursor:(id)arg1 metrics:(id)arg2 error:(id)arg3;
-(void)handleQueryDidFetchRecord:(id)arg1;
-(void)handleQueryDidFetchCursor:(id)arg1 reply:(/*^block*/id)arg2;

@end

