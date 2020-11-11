/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:44 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MFAttachmentDataProviderProtocol <NSObject>
@required
-(id)fetchLocalDataForAttachment:(id)arg1;
-(void)fetchDataForAttachment:(id)arg1 withDataConsumer:(id)arg2 completion:(/*^block*/id)arg3;
-(id)messageForAttachment:(id)arg1;
-(id)storageLocationForAttachment:(id)arg1 withMessage:(id)arg2;

@end

