/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:32 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IDS/IDSTransactionLogMessage.h>

@class NSData;

@interface IDSTransactionLogDataMessage : IDSTransactionLogMessage {

	NSData* _dataValue;

}

@property (nonatomic,readonly) NSData * dataValue;              //@synthesize dataValue=_dataValue - In the implementation block
-(id)dictionaryRepresentation;
-(NSData *)dataValue;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)initWithData:(id)arg1 accountUniqueID:(id)arg2 fromID:(id)arg3 loginID:(id)arg4 serviceName:(id)arg5 ;
@end

