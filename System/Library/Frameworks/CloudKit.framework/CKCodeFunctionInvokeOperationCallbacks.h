/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:55 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CKCodeFunctionInvokeOperationCallbacks <CKOperationCallbacks>
@required
-(void)handleReplaceLocalWithWireSerializations:(id)arg1 encryptedMasterKeys:(id)arg2 wireEnvelopes:(id)arg3 reply:(/*^block*/id)arg4;
-(void)handleInitialResponseReceived:(id)arg1 reply:(/*^block*/id)arg2;
-(void)handleReplaceWireSerializationsWithRecords:(id)arg1;

@end

